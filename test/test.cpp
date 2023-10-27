#include "gtest/gtest.h"
#include "../include/Triangle.h"
using shapes::Triangle;


TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testKind) {
    Triangle *newTriangle = new Triangle(4,3,2);
    EXPECT_EQ (newTriangle->getKind(),Triangle::Kind::SCALENE);
}

TEST(TriangleTests, testArea) {
    Triangle *aTriangle = new Triangle(6,5,5);
    EXPECT_EQ (aTriangle->getArea(),12);
}


