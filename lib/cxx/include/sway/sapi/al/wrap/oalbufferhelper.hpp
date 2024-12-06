#ifndef SWAY_SAPI_AL_WRAP_OALBUFFERHELPER_HPP
#define SWAY_SAPI_AL_WRAP_OALBUFFERHELPER_HPP

#include <sway/core.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class BufferHelper {
public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(BufferHelper);

#pragma endregion

#pragma region "Pure virtual methods"

  PURE_VIRTUAL(void generate(i32_t num, u32_t *uids));

  PURE_VIRTUAL(void deleteBuffers(i32_t num, const u32_t *uids));

#pragma endregion
};

class OALBufferHelper : public BufferHelper {
public:
#pragma region "Ctors/Dtor"

  OALBufferHelper();

  DTOR_VIRTUAL_DEFAULT(OALBufferHelper);

#pragma endregion

#pragma region "Override OALBufferHelperIface methods"

  MTHD_VIRTUAL_OVERRIDE(void generate(i32_t num, u32_t *uids));

  MTHD_VIRTUAL_OVERRIDE(void deleteBuffers(i32_t num, const u32_t *uids));

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_WRAP_OALBUFFERHELPER_HPP
