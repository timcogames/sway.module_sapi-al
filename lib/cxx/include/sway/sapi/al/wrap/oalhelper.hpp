#ifndef SWAY_SAPI_AL_WRAP_OALHELPER_HPP
#define SWAY_SAPI_AL_WRAP_OALHELPER_HPP

#include <sway/core.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class OALHelperIface {
public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(OALHelperIface);

#pragma endregion

#pragma region "Pure virtual methods"

  PURE_VIRTUAL(void generateBuffers(i32_t num, u32_t *uids));

  PURE_VIRTUAL(void deleteBuffers(i32_t num, const u32_t *uids));

#pragma endregion
};

class OALHelper : public OALHelperIface {
public:
#pragma region "Ctors/Dtor"

  OALHelper();

  DTOR_VIRTUAL_DEFAULT(OALHelper);

#pragma endregion

#pragma region "Override OALHelperIface methods"

  MTHD_VIRTUAL_OVERRIDE(void generateBuffers(i32_t num, u32_t *uids));

  MTHD_VIRTUAL_OVERRIDE(void deleteBuffers(i32_t num, const u32_t *uids));

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_WRAP_OALHELPER_HPP
