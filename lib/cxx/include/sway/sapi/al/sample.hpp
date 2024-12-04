#ifndef SWAY_SAPI_AL_SAMPLE_HPP
#define SWAY_SAPI_AL_SAMPLE_HPP

#include <sway/sapi/al/prereqs.hpp>
#include <sway/sapi/al/wrap/oalhelper.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

class Sample {
public:
#pragma region "Ctors/Dtor"

  Sample();

  Sample(OALHelperIface &helper);

  DTOR(Sample);

#pragma endregion

  void setup();

private:
  OALHelperIface *helper_;
  u32_t buffer_;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_SAMPLE_HPP
