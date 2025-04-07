#include<iostream>
using namespace std;


int sum_of_number(int number){

    int sum = 0;
    while(number>0){   // check weather the number is greator than 0 or not
        int temp = number%10;
        sum+=temp;
        number = number/10;
    }

    return sum;   
    
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    int result = sum_of_number(number);

    cout<<"sum of digits of the given number is : "<<result;
    return 0;
}







16