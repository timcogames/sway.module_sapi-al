#ifndef SWAY_SAPI_AL_OALDEVICE_HPP
#define SWAY_SAPI_AL_OALDEVICE_HPP

#include <sway/sapi/al/_typedefs.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class OALDevice {
public:
#pragma region "Ctors/Dtor"

  OALDevice(const std::string &name);

  DTOR(OALDevice);

#pragma endregion

#pragma region "Operators"

  operator ALCdevice *() { return device_; }

  operator const ALCdevice *() const { return device_; }

#pragma endregion

private:
  ALCdevice *device_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_OALDEVICE_HPP
