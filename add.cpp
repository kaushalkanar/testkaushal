#include <iostream>

// Function to add two numbers
<<<<<<< HEAD
int addition(int a, int b) {
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

=======
int add(int a, int b) {
    return a + b;
}

>>>>>>> kaushal
int main() {
    int num1 = 5;
    int num2 = 7;
    
    // Calling the add function
<<<<<<< HEAD
    int sum = addition(num1, num2);
    
    // Calling the multiply function
    int product = multiply(num1, num2);
    
    // Displaying the results
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is: " << product << std::endl;
=======
    int sum = add(num1, num2);
    
    // Displaying the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
>>>>>>> kaushal
    
    return 0;
}

