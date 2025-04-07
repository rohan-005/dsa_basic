#include<iostream>
using namespace std;


int power_of_number(int number,int power){

    int result = 1;
    if(power == 0){   // check weather the number is greator than 0 or not
        return 1;
    }

    result = number*number;
    power_of_number(number,power-1);

    return result;   
    
}

int main(){
    cout<<"enter a number : ";
    int number;
    cin >> number;
    
    cout<<"enter power : ";
    int power;
    cin >> power;
    
    int result = power_of_number(number,power);

    cout<<"power of the given number is : "<<result;
    return 0;
}

