#include <iostream>
#include "Library.h"
#include "Book.h"
using namespace std;

string Book::book(string bname){

        name = bname;

    return name;
}


void Library::setQuantity(int bquantity){

    quantity = bquantity;

}

int Library::getQuantity(){

    return quantity;
}

string Library::borrow_book(int stock){

    if(stock > 0){
        quantity--;

        return "was borrowed succesfully";

    }
    
    return "could not be borrowed";

    
}
string Library::return_book(){

    quantity++;

    return "book returned succesfully";

}


