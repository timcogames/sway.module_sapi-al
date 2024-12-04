#ifndef SWAY_SAPI_AL_AUDIOMANAGER_HPP
#define SWAY_SAPI_AL_AUDIOMANAGER_HPP

#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class AudioManager {
public:
#pragma region "Ctors/Dtor"

  AudioManager();

  DTOR_DEFAULT(AudioManager);

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_AUDIOMANAGER_HPP
