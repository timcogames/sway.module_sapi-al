#include <sway/sapi/al/song.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

Song::Song()
    : helper_(new OALHelper()) {}

Song::Song(OALHelperIface &helper)
    : helper_(&helper) {}

Song::~Song() { helper_->deleteBuffers(buffers_.size(), buffers_.data()); }

void Song::setup() { helper_->generateBuffers(buffers_.size(), buffers_.data()); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
