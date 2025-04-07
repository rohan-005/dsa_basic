/*
eg ->  1+2+3+4+5+6+7+8+9+10 = 55
*/

#include<iostream>
using namespace std;


int sum_of_numbers(int number){
    
    //  can be done using two ways ---
    //         1) - using for loop storing the sum till the ending number given by the user--
    //         2) - using ap sum formula -- (1 + number)*number/2;


    int sum = 0;
    // method 1

    // for(int i=1;i<=number;i++){
    //     sum+=i;
    // }

    // method 2
    
    // sum = ((1+number)*number)/2;


    return sum;


}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    int result = sum_of_numbers(number);

    cout<<"sum of numbers is: "<<result;
    return 0;
}