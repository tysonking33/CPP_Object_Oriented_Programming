#include <iostream>
#include "Invoice.h"

int main(){
    {
        std::cout << "Testing addServiceCost" << std::endl;
        std::cout << std::endl;

        Invoice invoice("ABCD");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(1);
        if (invoice.getDollarsOwed() != 1) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        }
    }

    {
        std::cout << "Testing getInvoiceCode" << std::endl;
        std::cout << std::endl;

        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(12);
        if (invoice.getInvoiceCode() != "ABCD") {
            std::cout << "Test 3 failed!" << std::endl;
        }
        }

        {
        Invoice invoice("CDBA");
        invoice.addServiceCost(2);
        if (invoice.getInvoiceCode() != "CDBA") {
            std::cout << "Test 4 failed!" << std::endl;
        }
        }

    }

    {
        std::cout << "Testing getDollarsOwed" << std::endl;
        std::cout << std::endl;

        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(13);
        if (invoice.getDollarsOwed() != 13){
            std::cout << "Test 5 failed" << std::endl;
        }
        }
        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(0);
        if (invoice.getDollarsOwed() != 0){
            std::cout << "Test 6 failed" << std::endl;
        }
        }
    }

    {
        std::cout << "Testing applyDiscount" << std::endl;
        std::cout << std::endl;

        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(13);
        invoice.applyDiscount(0.5);
        if (invoice.getDollarsOwed() != 6){
            std::cout << "Test 7 failed" << std::endl;
        }
        }
        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(20);
        invoice.applyDiscount(0.25);
        if (invoice.getDollarsOwed() != 15){
            std::cout << "Test 8 failed" << std::endl;
        }
        }
    }

    {
        std::cout << "Testing applyDiscount" << std::endl;
        std::cout << std::endl;

        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(13);
        invoice.applyDiscount(0.5);
        if (invoice.computeTax() != 0){
            std::cout << "Test 9 failed" << std::endl;
        }
        }
        {
        Invoice invoice("ABCD");
        invoice.addServiceCost(20);
        invoice.applyDiscount(0.25);
        if (invoice.computeTax() != 1){
            std::cout << "Test 10 failed" << std::endl;
        }
        }
    }
    return 0;
}