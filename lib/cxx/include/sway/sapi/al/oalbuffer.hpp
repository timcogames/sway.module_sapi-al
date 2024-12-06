#ifndef SWAY_SAPI_AL_OALBUFFER_HPP
#define SWAY_SAPI_AL_OALBUFFER_HPP

#include <sway/sapi/al/prereqs.hpp>
#include <sway/sapi/al/wrap/_typedefs.hpp>
#include <sway/sapi/al/wrap/oalbufferhelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class OALBuffer {
public:
#pragma region "Ctors/Dtor"

  OALBuffer();

  OALBuffer(BufferHelper &helper);

  DTOR(OALBuffer);

#pragma endregion

  void generate();

  void destroy();

private:
  BufferHelperTypedefs::Ptr_t helper_;
  u32_t buffer_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_OALBUFFER_HPP
