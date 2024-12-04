#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al/audiomanager.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>

NS_SHORT_SWAY()
NS_SHORT(sapi)

TEST(AudioManagerTest, ctor_default) {
  auto mngr = std::make_unique<AudioManager>();
  ASSERT_NE(nullptr, mngr);
}
