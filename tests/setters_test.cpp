#include "gtest/gtest.h"
#include "../src/Book.h"

TEST(BookTests, TestSetters) {
    Book b("Brave New World", 1932, 288);
    Book b2("The Giver", 1993, 208);

    b.setTitle("Courageous Novel Planet");
    EXPECT_EQ("Courageous Novel Planet", b.getTitle()) << "Error setting the title from the Book Class";

    b2.setTitle("A Donor");
    EXPECT_EQ("A Donor", b2.getTitle()) << "Error setting the title from the Book Class";

    b.setPubYear(2003);
    EXPECT_EQ(2003, b.getPubYear()) << "Error setting the publication year from the Book Class";

    b2.setPubYear(1975);
    EXPECT_EQ(1975, b2.getPubYear()) << "Error setting the publication year from the Book Class";

    b.setNumOfPages(3000);
    EXPECT_EQ(3000, b.getNumOfPages()) << "Error setting the number of pages from the Book Class";

    b2.setNumOfPages(56);
    EXPECT_EQ(56, b2.getNumOfPages()) << "Error setting the number of pages from the Book Class";

}