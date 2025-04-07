#include <iostream>
using namespace std;
/*//using recursion-----
bool isPalindrome(string &str, int left, int right) {  // Base case: If pointers meet or cross, it's a palindrome

    if (left >= right){
        return true;
    
    } 

    if (str[left] != str[right]){  // Mismatch found, not a palindrome
        return false;
    } 

    return isPalindrome(str, left + 1, right - 1);  // Recursive call with reduced range
}
*/

/*// without recursion----
bool isPalindrome(string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]){   // Mismatch found, not a palindrome
            return false;
        }
        left++;
        right--;
    }
    return true;
}
*/

int main() {
    cout << "enter a string: ";
    string str;
    cin >> str; 


    //bool result = isPalindrome(str, 0, str.length() - 1);  //for recursve approach
    //bool result = isPalindrome(str);    // for iterative approach
    
    
    if (result){
        cout << "yes";

    }
    else{
        cout << "no";
    }

    return 0;
}


