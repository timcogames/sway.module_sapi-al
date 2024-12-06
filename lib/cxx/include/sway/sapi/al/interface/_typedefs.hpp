#ifndef SWAY_SAPI_TYPEDEFS_HPP
#define SWAY_SAPI_TYPEDEFS_HPP

#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class Source;
namespace SourceTypedefs {
using Id_t = std::optional<u32_t>;
using SharedPtr_t = std::shared_ptr<Source>;
}  // namespace SourceTypedefs

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_TYPEDEFS_HPP
