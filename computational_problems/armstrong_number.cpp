/*An Armstrong number (also known as a narcissistic number) is a number 
that is equal to the sum of its own digits, 
each raised to the power of the number of digits in the number

eg ->  153 == 1^3+5^3+3^3 == 1+125+27 == 153
*/

#include<iostream>
#include<math.h>        // for power function  pow();
using namespace std;


bool armstrong_number(int number){
    int temp = number;  //storing the number into a temporary var
    
    //  first we will count the number of digits in the given number
    //  take sum of each digit with the power(total number of digit)
    //  check weather the sum is equal or not

    int digit_count = 0;
    while(temp>0){
        digit_count++;
        temp = temp/10;
    }

    temp = number; 
    int sum_of_digits = 0;
    while(temp>0){
        int digit = temp%10;
        sum_of_digits += pow(digit,digit_count);
        temp = temp/10;
    }

    return sum_of_digits == number ? true : false;
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    bool result = armstrong_number(number);

    result ? cout<<"given number is a armstrong number" : cout<<"number is not a armstrong number";
    return 0;
}