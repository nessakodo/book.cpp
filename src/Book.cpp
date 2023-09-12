#include "Book.h"
#include <iostream>
#include <iomanip>

// Constructor
Book::Book(std::string title, int pubYear, int numOfPages)
    : title(title), pubYear(pubYear), numOfPages(numOfPages) {
}

// Getters
std::string Book::getTitle() const {
    return title;
}

int Book::getPubYear() const {
    return pubYear;
}

int Book::getNumOfPages() const {
    return numOfPages;
}

// Setters
void Book::setTitle(std::string aTitle) {
    title = aTitle;
}

void Book::setPubYear(int aPubYear) {
    pubYear = aPubYear;
}

void Book::setNumOfPages(int aNumOfPages) {
    numOfPages = aNumOfPages;
}

// Estimated book weight method
float Book::estimatedBookWeight() const {
    float weight = 0.176f * float(numOfPages);
    return weight; // Round to two decimal places
}



// Main function to read user input and display estimated book weight
int mainRunner() {
    std::string title;
    int pubYear, numOfPages;

    std::cout << "Please input the title of the book: ";
    std::cin.ignore();
    std::getline(std::cin, title);

    std::cout << "Input the publication year of the book: ";
    std::cin >> pubYear;

    std::cout << "Input the number of pages in the book: ";
    std::cin >> numOfPages;

    Book book(title, pubYear, numOfPages);

    std::cout << book.getTitle() << " is about " << book.estimatedBookWeight() << " ounces." << std::endl;

    return 0;
}
