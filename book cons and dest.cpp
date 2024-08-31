#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;


    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
        cout << "Book object created: \"" << title << "\" by " << author << ", " << pages << " pages" << endl;
    }


    ~Book() {
        cout << "Book object destroyed: \"" << title << "\" by " << author << endl;
    }
};

int main() {

    Book myBook("1984", "George Orwell", 328);


    return 0;
}
