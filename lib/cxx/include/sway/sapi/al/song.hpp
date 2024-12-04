#ifndef SWAY_SAPI_AL_SONG_HPP
#define SWAY_SAPI_AL_SONG_HPP

#include <sway/sapi/al/prereqs.hpp>
#include <sway/sapi/al/wrap/oalhelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class Song {
public:
#pragma region "Ctors/Dtor"

  Song();

  Song(OALHelperIface &helper);

  DTOR(Song);

#pragma endregion

  void setup();

private:
  OALHelperIface *helper_;
  std::array<u32_t, 2> buffers_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_SONG_HPP
