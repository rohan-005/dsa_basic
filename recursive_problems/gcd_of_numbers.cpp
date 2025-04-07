#include<iostream>
using namespace std;

// The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly.

int gcd_of_number(int num1,int num2){

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main(){
    cout<<"enter first number : ";
    int num1;
    cin >> num1;
    
    cout<<"enter second number : ";
    int num2;
    cin >> num2;
    
    int result = gcd_of_number(num1, num2);

    cout<<"gcd of the given number is : "<<result;
    return 0;
}




