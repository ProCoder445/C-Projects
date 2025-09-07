#include <iostream>
#include <vector>
#include <stdio.h>


class Book {
  std::string title;
  std::string author;
  int year;
  int id;

  public:
    Book(int i, const std::string &t, const std::string &a, int y)
        : id(i), title(t), author(a), year(y) {};
    
    std::string get_title() {
      return this->title;
    }

    std::string get_author() {
      return this->author;
    }

    int get_year() {
      return this->year;
    }

    int get_ID() {
      return this->id;
    }
};

class Library
{
  std::vector<Book> book_list;

  public:

  Library(std::vector<Book> list)
    : book_list(list) {}

  void add_book(Book &book) {
    this->book_list.__append(*book)
  }
};

int main() {
  
};