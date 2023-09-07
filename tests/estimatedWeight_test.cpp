#include <gtest/gtest.h>
#include "../src/Book.h"
#include <cmath> // For std::ceil

TEST(BookTests, EstimatedBookWeight) {
Book b1("Test Book 1", 2001, 0);
EXPECT_FLOAT_EQ(0.0f, b1.estimatedBookWeight());

Book b2("Test Book 2", 2002, 1);
EXPECT_FLOAT_EQ(0.176f, b2.estimatedBookWeight());

Book b3("Test Book 3", 2003, 100);
EXPECT_FLOAT_EQ(8.8f, b3.estimatedBookWeight());

Book b4("Test Book 4", 2004, 7);
EXPECT_FLOAT_EQ(0.704f, b4.estimatedBookWeight());

Book b5("Test Book", 2000, 5);
EXPECT_FLOAT_EQ(0.528f, b5.estimatedBookWeight());
}
