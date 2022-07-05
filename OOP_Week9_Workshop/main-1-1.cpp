#include <iostream>

/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
int add(int lhs, int rhs) {
    return lhs + rhs;
}

int main(){
    std::cout << "part 1" << std::endl;
    {
        int result = add(1, 2);
        std::cout << result << std::endl;

        if (add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    {
        int result = add(1, 2);
        std::cout << result << std::endl;

        if (add(1, 2) != 5) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    
    {
        int result = add(5, 5);
        std::cout << result << std::endl;

        if (add(5, 5) != 10) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "part 2" << std::endl;
    {
        int result = add(-4,-5);
        std::cout << result << std::endl;

        if (add(-4, -5) != -9) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }
    {
        int result = add(-4,5);
        std::cout << result << std::endl;
        
        if (add(-4, 5) != 1) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }
    {
        int result = add(3.3,5.5);
        std::cout << result << std::endl;
        
        if (add(3.3, 5.5) != 8) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }
    {
        int result = add(-4,-5);
        std::cout << result << std::endl;
        
        if (add(-4.3, -5.6) != -9) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }
    {
        int result = add(0,0);
        std::cout << result << std::endl;
        
        if (add(0, 0) != 0) {
            std::cout << "Test 8 failed!" << std::endl;
        }
    }
    {
        int result = add(1234567,1234567);
        std::cout << result << std::endl;
        
        if (add(1234567,1234567) != 2469134) {
            std::cout << "Test 9 failed!" << std::endl;
        }
    }
    {
        int result = add(-1234567,1234567);
        std::cout << result << std::endl;
        
        if (add(-1234567,1234567) != 0) {
            std::cout << "Test 10 failed!" << std::endl;
        }
    }
    return 0;
}