#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al.hpp>

#include <google/unit/mockoalhelper.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>

NS_SHORT_SWAY()
NS_SHORT(sapi)

TEST(AudioManagerTest, ctor_default) {
  testing::NiceMock<MockOALHelper> mock;
  EXPECT_CALL(mock, generateBuffers(testing::_, testing::_)).Times(1);

  auto sample = std::make_unique<Sample>(mock);
  sample->setup();
  ASSERT_NE(nullptr, sample);
}
