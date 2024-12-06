#ifndef SWAY_SAPI_SOURCEDESCRIPTOR_HPP
#define SWAY_SAPI_SOURCEDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

struct SourceDescriptor {
  math::vec3f_t position;
  math::vec3f_t direction;
  math::vec3f_t velocity;
  u32_t gain;
  u32_t pitch;
  bool looped;
  bool relatived;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_SOURCEDESCRIPTOR_HPP
