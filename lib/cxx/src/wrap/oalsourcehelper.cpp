#include <sway/sapi/al/wrap/oalsourcehelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

void OALSourceHelper::setProperty(SourceTypedefs::Id_t src, i32_t param, i32_t val) {
  alSourcei(src.value(), param, val);
}

NS_END()  // namespace sapi
NS_END()  // namespace sway
