#ifndef SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP
#define SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al/wrap/oalhelper.hpp>

#undef None
#undef Bool

#include <gmock/gmock.h>

NS_SHORT_SWAY()

class FakeOALHelper : public sapi::OALHelperIface {
public:
  MTHD_OVERRIDE(void generateBuffers(i32_t num, u32_t *uids)) {}

  MTHD_OVERRIDE(void deleteBuffers(i32_t num, const u32_t *uids)) {}
};

class MockOALHelper : public sapi::OALHelperIface {
public:
  MockOALHelper() {
    ON_CALL(*this, generateBuffers).WillByDefault([this](i32_t num, u32_t *uids) { fake_.generateBuffers(num, uids); });

    ON_CALL(*this, deleteBuffers).WillByDefault([this](i32_t num, const u32_t *uids) {
      fake_.deleteBuffers(num, uids);
    });
  }

  MOCK_METHOD(void, generateBuffers, (i32_t num, u32_t *uids));

  MOCK_METHOD(void, deleteBuffers, (i32_t num, const u32_t *uids));

private:
  FakeOALHelper fake_;
};

#endif  // SWAY_SAPI_AL_TESTS_GOOGLE_UNIT_MOCKOALHELPER_HPP
