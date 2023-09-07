#include <gtest/gtest.h>
#include "../src/mainRunner.h"
#include <sstream>
#include <cmath>

TEST(MainFunctionTests, ProperlyHandlesUserInput) {
// Prepare the input stream.
std::istringstream input("Test Book\n2000\n150");
std::cin.rdbuf(input.rdbuf());

// Capture the output stream.
std::ostringstream output;
std::streambuf* originalCoutStreamBuf = std::cout.rdbuf();
std::cout.rdbuf(output.rdbuf());


mainRunner();

// Restore original std::cout buffer
std::cout.rdbuf(originalCoutStreamBuf);

// Expected output based on the inputs and the Book class methods.
std::string expectedOutput =
        "Please input the title of the book: "
        "Input the publication year of the book: "
        "Input the number of pages in the book: "
        "Test Book is about 13.2 ounces.\n";

EXPECT_EQ(expectedOutput, output.str());
}
