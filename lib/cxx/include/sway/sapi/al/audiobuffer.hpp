#ifndef SWAY_SAPI_AL_AUDIOBUFFER_HPP
#define SWAY_SAPI_AL_AUDIOBUFFER_HPP

#include <sway/render/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class AudioBuffer {
public:
#pragma region "Ctors/Dtor"

  AudioBuffer() {}

  DTOR_DEFAULT(AudioBuffer);

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_AUDIOBUFFER_HPP
