#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    
    // Calling the add function
    int sum = add(num1, num2);
    
    // Displaying the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    
    return 0;
}

