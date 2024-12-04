#include <sway/sapi/al/wrap/oalhelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALHelper::OALHelper() {}

void OALHelper::generateBuffers(i32_t num, u32_t *uids) { alGenBuffers(num, uids); }

void OALHelper::deleteBuffers(i32_t num, const u32_t *uids) { alDeleteBuffers(num, uids); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
