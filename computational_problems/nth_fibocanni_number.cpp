#include<iostream>
using namespace std;

/*
The sequence follows the rule that each number is equal to the sum of the preceding two numbers. 
The Fibonacci sequence begins with the following 14 integers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...
*/

int main(){
    int n;
    cout<< "enter a number: "<<endl;
    cin >> n;
    int first = 0;        //first number
    int second = 1;       //second number
    int nth = 0;
    if(n==0){
        cout << n <<"st number of fibonacci series is: "<<first<<endl;
        return 0;
    }
    
    if(n==1){
        cout << n <<"nd number of fibonacci series is: "<<second<<endl;
        return 0;
    }
    for(int i = 0;i <n-2;i++){
        nth = first+second;
        first = second;
        second = nth;
    }
    cout << n <<"th number of fibonacci series is: "<<nth<<endl;

    return 0;
}