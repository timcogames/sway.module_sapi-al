#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al.hpp>

#include <google/unit/bufferhelperstub.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>

NS_SHORT_SWAY()
NS_SHORT(sapi)

TEST(AudioManagerTest, ctor_default) {
  testing::NiceMock<BufferHelperStub> mock;
  EXPECT_CALL(mock, generate(testing::_, testing::_)).Times(1);

  auto buf = std::make_unique<OALBuffer>(mock);
  ASSERT_NE(nullptr, buf);
}
