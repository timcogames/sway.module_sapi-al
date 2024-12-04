#ifndef SWAY_SAPI_AL_BUFFERINFO_HPP
#define SWAY_SAPI_AL_BUFFERINFO_HPP

#include <sway/sapi/al/prereqs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(sapi)

struct BufferInfo {
  std::size_t numChannels;
  std::size_t size;
  std::size_t bps;
  std::size_t bitrate;
  void *data;
};

NS_END()  // namespace sapi
NS_END()  // namespace sway

#endif  // SWAY_SAPI_AL_BUFFERINFO_HPP
