#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter a number: ";
    cin >> n;

    int power = 0;

    int temp = n;

    if(n%2 == 0){
        while (temp > 0){
            if(temp%2==0){
                power++;
            }
            temp = temp/2;
        }
        
    }

    if(power == 0){
        cout<<"number can not be represented in power of 2";
    }
    else{
        cout<<"2^"<<power<<" = "<<n;
    }
    


}