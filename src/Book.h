#include <string>

class Book {
public:
    // Constructor
    Book(std::string title, int pubYear, int numOfPages);

    // Getters
    std::string getTitle() const;
    int getPubYear() const;
    int getNumOfPages() const;

    // Setters
    void setTitle(std::string title);
    void setPubYear(int pubYear);
    void setNumOfPages(int numOfPages);

    // Estimated book weight 
    float estimatedBookWeight() const;

private:
    std::string title;
    int pubYear;
    int numOfPages;
};

