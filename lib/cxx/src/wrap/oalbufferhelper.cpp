#include <sway/sapi/al/wrap/oalbufferhelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALBufferHelper::OALBufferHelper() {}

void OALBufferHelper::generate(i32_t num, u32_t *uids) { alGenBuffers(num, uids); }

void OALBufferHelper::deleteBuffers(i32_t num, const u32_t *uids) { alDeleteBuffers(num, uids); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
