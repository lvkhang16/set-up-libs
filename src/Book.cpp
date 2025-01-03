#include "Book.h"
#include <iostream>

Book::Book() {
    title = "";
    author = "";
    pages = 0;
}

Book::Book(std::string title, std::string author, int pages) {
    this->title = title;
    this->author = author;
    this->pages = pages;
}

Book::~Book() {
    // Destructor
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

int Book::getPages() {
    return pages;
}

void Book::setTitle(std::string title) {
    this->title = title;
}

void Book::setAuthor(std::string author) {
    this->author = author;
}

void Book::setPages(int pages) {
    this->pages = pages;
}

void Book::printBook() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Pages: " << pages << std::endl;
}