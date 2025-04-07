/*
eg ->  153  have 3 digits
*/

#include<iostream>
using namespace std;


int count_digits(int number){
    
    // we will divide the number by 10 and count how many times it is possible--
    int temp = number;
    int digit_count = 0;
    while(temp>0){
        digit_count++;
        temp = temp/10;
    }

    
    return digit_count;
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    int result = count_digits(number);

    cout<<number<<" have "<<result<<" digits";
    return 0;
}