#include <memory>
#include <gtest/gtest.h>
#include "c_plus_plus_template/c_plus_plus_template.hpp"

TEST(c_plus_plus_template, test_c_plus_plus_template) {
  EXPECT_NO_THROW(std::shared_ptr<c_plus_plus_template::CPlusPlusTemplate> c_plus_plus_template =
                      std::make_shared<c_plus_plus_template::CPlusPlusTemplate>());
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}