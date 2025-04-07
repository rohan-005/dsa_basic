/* 
   A number which is divisible by 1 and the number itself.--
   e.g   2,3,5,7,11------
*/

#include<iostream>
using namespace std;


bool prime_number(int number){
    
    // we will check weather any other number between 2 to number-1 divides the number
    // if yes than number is not prime
    // else number is prime

    for(int i=2;i<number;i++){
        if(number%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    bool result = prime_number(number);

    result ? cout<<"given number is a prime number" : cout<<"number is not prime";
    return 0;
}







