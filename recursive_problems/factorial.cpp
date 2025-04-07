#include<iostream>
using namespace std;

/* 
   A factorial, denoted by "n!", is the product of all positive integers 
   less than or equal to a given positive integer, n. 
   For example, 5! = 5 * 4 * 3 * 2 * 1 = 120. 
*/

int factorial_of_given_number(int number){

    // initilazing a variable to store the result--
    int factorial = 1;
    // declaring the base case--
    if(number == 1 || number == 0){
        return factorial;
    }

    factorial =  number * factorial_of_given_number(number-1);
    
    // recursion -- passing the value the new value into the same function--
    

    return factorial;
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    int result = factorial_of_given_number(number);

    cout<<"factorial of the given number is: "<<result;
    return 0;
}







