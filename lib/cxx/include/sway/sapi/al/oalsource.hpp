#ifndef SWAY_SAPI_AL_SOURCE_HPP
#define SWAY_SAPI_AL_SOURCE_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al/interface/sapi.hpp>
#include <sway/sapi/al/prereqs.hpp>
#include <sway/sapi/al/wrap/_typedefs.hpp>
#include <sway/sapi/al/wrap/oalsourcehelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class OALSource : public Source {
public:
#pragma region "Static methods"

  static auto create() -> SourceTypedefs::SharedPtr_t;

#pragma endregion

#pragma region "Ctors/Dtor"

  OALSource();

  OALSource(SourceHelper &helper);

  DTOR_VIRTUAL(OALSource);

#pragma endregion

  void init() {
    helper_->setProperty(getUid(), AL_SOURCE_RELATIVE, AL_FALSE);
    alSourcef(getUid().value(), AL_GAIN, 1.0);
    alSourcef(getUid().value(), AL_PITCH, 1.0);
    setPosition(math::vec3f_zero);
    setDirection(math::vec3f_zero);
    setVelocity(math::vec3f_zero);
    alSourcef(getUid().value(), AL_CONE_INNER_ANGLE, 360);
    alSourcef(getUid().value(), AL_CONE_OUTER_ANGLE, 360);
  }

  void remove() {
    auto id = getUid().value();
    if (!alIsSource(id)) {
      return;
    }

    alSourceStop(id);

    if (id != 0) {
      helper_->setProperty(getUid(), AL_BUFFER, 0);
      alDeleteSources(1, &id);
    }
  }

  [[nodiscard]] auto getState() const -> i32_t {
    ALint state;
    alGetSourcei(getUid().value(), AL_SOURCE_STATE, &state);

    return state;
  }

  void play(const math::vec3f_t &pos, const math::vec3f_t &dir) {
    if (alIsSource(getUid().value())) {
      helper_->setProperty(getUid(), AL_SOURCE_RELATIVE, descriptor_.relatived ? AL_TRUE : AL_FALSE);
    }

    helper_->setProperty(getUid(), AL_LOOPING, descriptor_.looped ? AL_TRUE : AL_FALSE);
    alSourcef(getUid().value(), AL_GAIN, descriptor_.gain);
    alSourcef(getUid().value(), AL_PITCH, descriptor_.pitch);
    alSourcef(getUid().value(), AL_MIN_GAIN, 0.01);
    alSourcef(getUid().value(), AL_MAX_DISTANCE, 50.0);

    alSourcef(getUid().value(), AL_REFERENCE_DISTANCE, 2.0);
    alSourcef(getUid().value(), AL_CONE_OUTER_GAIN, 0.0);
    alSourcef(getUid().value(), AL_ROLLOFF_FACTOR, 1.2);

    setPosition(pos);
    setDirection(dir);

    alSourcePlay(getUid().value());
  }

  void pause() {
    if (alIsSource(getUid().value())) {
      alSourcePause(getUid().value());
    }
  }

  void stop() {
    if (alIsSource(getUid().value())) {
      alSourceStop(getUid().value());
    }
  }

  [[nodiscard]] auto isPlaying() const -> bool { return getState() == AL_PLAYING; }

  [[nodiscard]] auto isPaused() const -> bool { return getState() == AL_PAUSED; }

  void setPosition(const math::vec3f_t &pos) {
    alSource3f(getUid().value(), AL_POSITION, pos.getX(), pos.getY(), pos.getZ());
  }

  void setDirection(const math::vec3f_t &dir) {
    alSource3f(getUid().value(), AL_DIRECTION, dir.getX(), dir.getY(), dir.getZ());
  }

  void setVelocity(const math::vec3f_t &vel) {
    alSource3f(getUid().value(), AL_VELOCITY, vel.getX(), vel.getY(), vel.getZ());
  }

private:
  SourceHelperTypedefs::Ptr_t helper_;
  SourceDescriptor descriptor_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_SOURCE_HPP
