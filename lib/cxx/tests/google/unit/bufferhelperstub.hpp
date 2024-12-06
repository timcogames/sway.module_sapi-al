#ifndef SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP
#define SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al/wrap/oalbufferhelper.hpp>

#undef None
#undef Bool

#include <gmock/gmock.h>

NS_SHORT_SWAY()

class BufferHelperStub : public sapi::BufferHelper {
public:
  BufferHelperStub() {
    ON_CALL(*this, generate).WillByDefault([this](i32_t num, u32_t *uids) {
      // Empty
    });

    ON_CALL(*this, deleteBuffers).WillByDefault([this](i32_t num, const u32_t *uids) {
      // Empty
    });
  }

  MOCK_METHOD(void, generate, (i32_t num, u32_t *uids));

  MOCK_METHOD(void, deleteBuffers, (i32_t num, const u32_t *uids));
};

#endif  // SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP
