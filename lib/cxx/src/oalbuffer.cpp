#include <sway/core/runtime/log.hpp>
#include <sway/sapi/al/oalbuffer.hpp>

#define TRACE_PARAMETERS 0
#define TRACE_CTORS_DTOR 0

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALBuffer::OALBuffer()
    : helper_(new OALBufferHelper()) {
#if TRACE_CTORS_DTOR
  core::runtime::LOG("OALBuffer::Ctor");
#endif

  generate();
}

OALBuffer::OALBuffer(BufferHelper &helper)
    : helper_(&helper) {
#if TRACE_CTORS_DTOR
  core::runtime::LOG("OALBuffer::Ctor");
#endif

  generate();
}

OALBuffer::~OALBuffer() {
#if TRACE_CTORS_DTOR
  core::runtime::LOG("OALBuffer::Dtor");
#endif

  destroy();
}

void OALBuffer::generate() { helper_->generate(1, &buffer_); }

void OALBuffer::destroy() { helper_->deleteBuffers(1, &buffer_); }

NS_END()  // namespace sapi
NS_END()  // namespace sway
