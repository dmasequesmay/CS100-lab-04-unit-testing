#include "gtest/gtest.h"
#include "../include/Triangle.h"
using shapes::Triangle;


TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testKindScalene) {
    Triangle *aTriangle = new Triangle(4,3,2);
    EXPECT_EQ (newTriangle->getKind(),Triangle::Kind::SCALENE);
}

TEST(TriangleTests, testKindEquilateral) {
    Triangle *aTriangle = new Triangle(4,4,4);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTests, testKindIsosceles) {
    Triangle *aTriangle = new Triangle(5,5,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, testArea) {
    Triangle *aTriangle = new Triangle(6,5,5);
    EXPECT_EQ (aTriangle->getArea(),12);
}


