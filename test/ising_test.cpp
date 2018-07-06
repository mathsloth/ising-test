#include "/home/zhe/ME2018/googletest/googletest/include/gtest/gtest.h"
// #include "../src/ising.h"

TEST(a,a){
  EXPECT_EQ(1.0,1.0);
}


int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
