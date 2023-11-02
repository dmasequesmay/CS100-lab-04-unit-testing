#include "gtest/gtest.h"
#include "../include/Triangle.h"
#include <cmath>
using shapes::Triangle;

<<<<<<< HEAD
// ================= Failing Tests =====================
<<<<<<< HEAD
TEST(TriangleTests, testKind) {
    Triangle *aTriangle = new Triangle(4,4,4);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTest, testArea) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_EQ (aTriangle->getArea(), sqrt(2.1875));
}

TEST(TriangleTest, testInvalidInput) {
    EXPECT_DEATH (Triangle(1,3,4), "ERROR: 1st side not the longest");
}
// =====================================================
TEST(TriangleTests, testKindScalene) {
    Triangle *aTriangle = new Triangle(4,3,2);
    EXPECT_EQ (aTriangle->getKind(),Triangle::Kind::SCALENE);
}

TEST(TriangleTests, testPerimeterEquilateral) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testKindIsosceles) {
    Triangle *aTriangle = new Triangle(3,2,2);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTest, testValidInput) {
    EXPECT_NO_THROW (Triangle(5,5,5));
}


=======
>>>>>>> main
