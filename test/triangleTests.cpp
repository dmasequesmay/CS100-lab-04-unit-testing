#include "gtest/gtest.h"
#include "../include/Triangle.h"
#include <cmath>
using shapes::Triangle;

//fails
TEST(TriangleTests, testKindEQUILATERAL) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}

//fails
TEST(TriangleTests,testAreaIsoceles) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_EQ (aTriangle->getArea(), sqrt(2.1875));
}

//fails
TEST(TriangleTests,testPerimeterIsoceles) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_EQ (aTriangle->getArea(), 7);
}

//fails
TEST(TriangleTests,testPerimeter2) {
    Triangle *aTriangle = new Triangle(5,5,1);
    EXPECT_EQ (aTriangle->getArea(), 11);
}

TEST(TriangleTests, expectDeath) {
    EXPECT_DEATH (Triangle(1,3,4), "First side is not the longest");
}

TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testArea) {
    Triangle *aTriangle = new Triangle(6,5,5);
    EXPECT_EQ (aTriangle->getArea(), 12);
}

TEST(TriangleTests, testKindIsosceles) {
    Triangle *aTriangle = new Triangle(3,2,2);
    ASSERT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, testKindScalene) {
    Triangle *aTriangle = new Triangle(5,4,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::SCALENE);
}

TEST(TriangleTests, expectNotThrow) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_NO_THROW (aTriangle->getPerimeter());
}

