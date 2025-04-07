#include<iostream>
using namespace std;

/*
The sequence follows the rule that each number is equal to the sum of the preceding two numbers. 
The Fibonacci sequence begins with the following 14 integers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...
*/

#include <iostream>
using namespace std;

void fibonacci_series(int first_number, int second_number, int count) {
    if (count == 0) return; // Base case: Stop when count reaches 0

    int next_number = first_number + second_number;
    cout << " " << next_number;

    // Recursive call with updated values
    fibonacci_series(second_number, next_number, count - 1);
}

int main() {
    int number_of_integers;
    cout<<"enter a number: ";
    cin >> number_of_integers; 

    if (number_of_integers <= 0) return 0; // Handle invalid input

    cout << "0"; // First Fibonacci number

    if (number_of_integers > 1) {
        cout << " 1"; // Second Fibonacci number
        fibonacci_series(0, 1, number_of_integers - 2);
    }

    return 0;
}







