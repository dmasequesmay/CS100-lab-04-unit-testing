#include "gtest/gtest.h"
#include "../include/Hailstone.h"
using sequence::satisfiesHailstone;


TEST(HailstoneTests, testZeroInput) {
    EXPECT_EQ (satisfiesHailstone(0),false);
}

TEST(HailstoneTests, testOneInput) {
    EXPECT_EQ (satisfiesHailstone(1), true);
}

TEST(HailstoneTests, testEvenInput) {
    EXPECT_EQ (satisfiesHailstone(4), true);
}

TEST(HailstoneTests, testOddInput) {
    EXPECT_EQ (satisfiesHailstone(5), true);

TEST(HailstoneTests, number0) {
    EXPECT_EQ (sequence::satisfiesHailstone(0), false);
}

TEST(HailstoneTests, number1) {
    EXPECT_EQ (sequence::satisfiesHailstone(1), true);
}

TEST(HailstoneTests, number2) {
    EXPECT_EQ (sequence::satisfiesHailstone(2), true);
}

TEST(HailstoneTests, number3) {
    EXPECT_EQ (sequence::satisfiesHailstone(3), true);
}

