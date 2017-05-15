#include <gtest/gtest.h>
#include <optional.hpp>

TEST(optionallite, basics) {

  using namespace nonstd;

  optional<int> oi = 1234;

  ASSERT_TRUE(oi);
  ASSERT_TRUE(oi.value() == 1234);
}
