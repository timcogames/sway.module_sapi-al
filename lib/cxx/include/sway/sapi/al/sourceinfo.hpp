#ifndef SWAY_SAPI_AL_SOURCEINFO_HPP
#define SWAY_SAPI_AL_SOURCEINFO_HPP

#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

struct SourceInfo {
  math::vec3f_t position;
  math::vec3f_t direction;
  math::vec3f_t velocity;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_SOURCEINFO_HPP
