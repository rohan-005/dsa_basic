/* 
   A factorial, denoted by "n!", is the product of all positive integers 
   less than or equal to a given positive integer, n. 
   For example, 5! = 5 * 4 * 3 * 2 * 1 = 120. 
*/

#include<iostream>
using namespace std;


int factorial_of_number(int number){
    
    int factorial = 1;
    if(number == 0 || number == 1){
        return factorial;
    }
    
    
    for(int i = 2;i<=number;i++){
        factorial*=i;
    }

    return factorial;


}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    int result = factorial_of_number(number);

    cout<<"factorial of numbers is: "<<result;
    return 0;
}