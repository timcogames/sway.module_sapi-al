#include <sway/sapi/al/oalsource.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

auto OALSource::create() -> SourceTypedefs::SharedPtr_t { return std::make_shared<OALSource>(); }

OALSource::OALSource()
    : helper_(new OALSourceHelper()) {
  u32_t objname;
  alGenSources(1, &objname);
  setUid(objname);
}

OALSource::OALSource(SourceHelper &helper)
    : helper_(&helper) {}

OALSource::~OALSource() {
  auto id = getUid().value();
  alDeleteSources(1, &id);
}

NS_END()  // namespace sapi
NS_END()  // namespace sway
