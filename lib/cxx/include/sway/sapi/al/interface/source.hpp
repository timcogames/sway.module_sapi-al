#ifndef SWAY_SAPI_SOURCE_HPP
#define SWAY_SAPI_SOURCE_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class Source : public core::foundation::Uniqueable<u32_t> {
public:
#pragma region "Ctors/Dtor"

  Source()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(Source);

#pragma endregion
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_SOURCE_HPP
