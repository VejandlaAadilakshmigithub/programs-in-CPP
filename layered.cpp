#include <iostream>
#include <vector>
#include <string>


class BookRepository {
public:
    
    void addBook(const std::string& title) {
        books.push_back(title);
    }

  
    void listBooks() const {
        for (const auto& book : books) {
            std::cout << "Book: " << book << std::endl;
        }
    }

private:
    std::vector<std::string> books;
};


class LibraryService {
private:
    BookRepository bookRepo; 

public:
    
    void addBook(const std::string& title) {
        bookRepo.addBook(title);
    }

    
    void displayBooks() const {
        bookRepo.listBooks();
    }
};


class LibraryUI {
private:
    LibraryService libraryService;

public:
   
    void start() {
        std::string book;
        std::cout << "Enter book name to add to library: ";
        std::getline(std::cin, book); 

        
        libraryService.addBook(book);

        
        std::cout << "\nBooks in the library: " << std::endl;
        libraryService.displayBooks();
    }
};


int main() {
    LibraryUI ui;
    ui.start(); 
    return 0;
}
