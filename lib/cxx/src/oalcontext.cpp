#include <sway/sapi/al/oalcontext.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALContext::OALContext()
    : device_("") {
  context_ = alcCreateContext(device_, nullptr);
  if (context_ == nullptr) {
    // ERROR: Failed to create context
  }

  alcMakeContextCurrent(context_);
}

OALContext::~OALContext() {
  alcMakeContextCurrent(nullptr);
  alcDestroyContext(context_);
}

NS_END()  // namespace sapi
NS_END()  // namespace sway
