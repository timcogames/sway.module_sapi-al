#include <sway/core.hpp>
#include <sway/math.hpp>
#include <sway/sapi/al/oalsoundmanager.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>

NS_SHORT_SWAY()
NS_SHORT(sapi)

TEST(SoundManagerTest, ctor_default) {
  auto mngr = std::make_unique<OALSoundManager>();
  ASSERT_NE(nullptr, mngr);

  mngr->add();
  mngr->add();
  mngr->add();

  mngr->thread_.join();
}
