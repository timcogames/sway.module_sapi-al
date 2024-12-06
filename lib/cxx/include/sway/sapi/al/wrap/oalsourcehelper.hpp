#ifndef SWAY_SAPI_AL_WRAP_OALSOURCEHELPER_HPP
#define SWAY_SAPI_AL_WRAP_OALSOURCEHELPER_HPP

#include <sway/core.hpp>
#include <sway/sapi/al/interface/_typedefs.hpp>
#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class SourceHelper {
public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(SourceHelper);

#pragma endregion

#pragma region "Pure virtual methods"

  PURE_VIRTUAL(void setProperty(SourceTypedefs::Id_t src, i32_t param, i32_t value));

#pragma endregion
};

class OALSourceHelper : public SourceHelper {
public:
#pragma region "Ctors/Dtor"

  OALSourceHelper() = default;

  DTOR_VIRTUAL_DEFAULT(OALSourceHelper);

#pragma endregion

#pragma region "Override SourceHelper methods"

  MTHD_VIRTUAL_OVERRIDE(void setProperty(SourceTypedefs::Id_t src, i32_t param, i32_t val));

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_WRAP_OALSOURCEHELPER_HPP
