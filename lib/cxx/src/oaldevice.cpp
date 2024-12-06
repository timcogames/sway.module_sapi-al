#include <sway/sapi/al/oaldevice.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALDevice::OALDevice(const std::string &name)
    : device_(nullptr) {
  device_ = alcOpenDevice(name.size() > 0 ? name.c_str() : nullptr);
  if (device_ == nullptr) {
    // ERROR: Failed to open default device
  }
}

OALDevice::~OALDevice() { alcCloseDevice(device_); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
