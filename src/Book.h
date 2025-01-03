#pragma once

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;
public:
    Book();
    Book(std::string title, std::string author, int pages);
    ~Book();
    std::string getTitle();
    std::string getAuthor();
    int getPages();
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setPages(int pages);
    void printBook();
};