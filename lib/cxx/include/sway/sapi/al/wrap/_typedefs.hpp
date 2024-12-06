#ifndef SWAY_SAPI_AL_WRAP_TYPEDEFS_HPP
#define SWAY_SAPI_AL_WRAP_TYPEDEFS_HPP

#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class BufferHelper;
namespace BufferHelperTypedefs {
using Ptr_t = BufferHelper *;
}  // namespace BufferHelperTypedefs

class SourceHelper;
namespace SourceHelperTypedefs {
using Ptr_t = SourceHelper *;
}  // namespace SourceHelperTypedefs

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_WRAP_TYPEDEFS_HPP
