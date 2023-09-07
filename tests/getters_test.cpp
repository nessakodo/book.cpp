#include "gtest/gtest.h"
#include "../src/Book.h"

TEST(BookTests, TestGetters) {
    Book b("Brave New World", 1932, 288);
    Book b2("The Giver", 1993, 208);

    EXPECT_EQ("Brave New World", b.getTitle()) << "Error getting the title from the Book Class";
    EXPECT_EQ("The Giver", b2.getTitle()) << "Error getting the title from the Book Class";

    EXPECT_EQ(1932, b.getPubYear()) << "Error getting the publication year from the Book Class";
    EXPECT_EQ(1993, b2.getPubYear()) << "Error getting the publication year from the Book Class";

    EXPECT_EQ(288, b.getNumOfPages()) << "Error getting the number of pages from the Book Class";
    EXPECT_EQ(208, b2.getNumOfPages()) << "Error getting the number of pages from the Book Class";

}