#ifndef SWAY_SAPI_AL_OALCONTEXT_HPP
#define SWAY_SAPI_AL_OALCONTEXT_HPP

#include <sway/sapi/al/_typedefs.hpp>
#include <sway/sapi/al/oaldevice.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class OALContext {
public:
#pragma region "Ctors/Dtor"

  OALContext();

  DTOR(OALContext);

#pragma endregion

private:
  OALDevice device_;
  ALCcontext *context_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_OALCONTEXT_HPP
