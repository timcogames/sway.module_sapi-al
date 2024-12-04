#include <sway/sapi/al/sample.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

Sample::Sample()
    : helper_(new OALHelper()) {}

Sample::Sample(OALHelperIface &helper)
    : helper_(&helper) {}

Sample::~Sample() { helper_->deleteBuffers(1, &buffer_); }

void Sample::setup() { helper_->generateBuffers(1, &buffer_); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
