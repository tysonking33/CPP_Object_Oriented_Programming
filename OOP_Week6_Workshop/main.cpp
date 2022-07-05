#include <iostream>
#include "Library.h"
#include "Book.h"
using namespace std;

int main(){

    Book book1;
    book1.book("peppapig");
    Library peppapig;
    peppapig.setQuantity(4);

    Book book2;
    book2.book("Romeo and Juliet");
    Library Romeoandjuliet;
    Romeoandjuliet.setQuantity(1);
     
    cout << book2.book("Romeo and Juliet") << " " << Romeoandjuliet.borrow_book(Romeoandjuliet.getQuantity()) << endl;
    cout << book2.book("Romeo and Juliet") << " " << Romeoandjuliet.borrow_book(Romeoandjuliet.getQuantity()) << endl;





}
