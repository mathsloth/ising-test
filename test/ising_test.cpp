#include "/home/zhe/ME2018/googletest/googletest/include/gtest/gtest.h"
// #include "../src/ising.h"

TEST(a,a){
  EXPECT_EQ(1.0,1.0);
}

TEST(ising_init, ising_init){
  class Ising a(4,7);
  EXPEXT_EQ(a.m, 4);
  EXPECT_EQ(a.n, 7);
  EXPECT_EQ(a.lattice[2][2], 0);
  EXPECT_EQ(a.lattice[3][6], 0);
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
