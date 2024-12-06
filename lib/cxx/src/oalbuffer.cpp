#include <sway/sapi/al/oalbuffer.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

OALBuffer::OALBuffer()
    : helper_(new OALBufferHelper()) {
  generate();
}

OALBuffer::OALBuffer(BufferHelper &helper)
    : helper_(&helper) {
  generate();
}

OALBuffer::~OALBuffer() { destroy(); }

void OALBuffer::generate() {
#if TRACE_CTOR
  std::cout << "OALBuffer::OALBuffer" << std::endl;
#endif

  helper_->generate(1, &buffer_);
}

void OALBuffer::destroy() {
#if TRACE_DTOR
  std::cout << "OALBuffer::~OALBuffer" << std::endl;
#endif

  helper_->deleteBuffers(1, &buffer_);
}

NS_END()  // namespace sapi
NS_END()  // namespace sway
