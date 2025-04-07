/*  
   For example, 1234321 is a palindrome. 
*/

#include<iostream>
using namespace std;


bool palindrome_number(int number){
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

int  main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    bool result = palindrome_number(number);

    result ? cout<<"given number is a armstrong number" : cout<<"number is not a armstrong number";
    return 0;
}