#ifndef SWAY_SAPI_AL_OALSOUNDMANAGER_HPP
#define SWAY_SAPI_AL_OALSOUNDMANAGER_HPP

#include <sway/sapi/al/interface/sourcedescriptor.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class Sound {
public:
  u32_t id;
  SourceDescriptor descriptor;

  Sound(u32_t id)
      : id(id) {}
};

namespace SoundTypedefs {
using UniquePtr_t = std::unique_ptr<Sound>;
using PlayingContainer_t = std::unordered_map<u32_t, UniquePtr_t>;
using RequestContainer_t = std::vector<UniquePtr_t>;
}  // namespace SoundTypedefs

class OALSoundManager {
public:
#pragma region "Ctors/Dtor"

  OALSoundManager();

  DTOR_DEFAULT(OALSoundManager);

#pragma endregion

  void add();

  void remove(u32_t id);

  auto process() -> i32_t;

  auto getNextRequestId() -> u32_t { return requestId_++; }

public:
  SoundTypedefs::PlayingContainer_t playings_;
  SoundTypedefs::RequestContainer_t requests_;
  u32_t requestId_ = GLOB_UID_INITIAL;
  std::thread thread_;
  std::mutex mutex_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_OALSOUNDMANAGER_HPP
