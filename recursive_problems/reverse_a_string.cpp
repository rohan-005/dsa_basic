#include <iostream>
using namespace std;
/*//using recursion-----
string reverse_string(string &str, int left, int right) {  // Base case: If pointers meet or cross, it's a palindrome

    if (left >= right){
        return str ;
    
    } 

    swap(str[left],str[right]);

    // if (str[left] != str[right]){  // Mismatch found, not a palindrome
    //     return false;
    // } 
    
    reverse_string(str, left + 1, right - 1); // Recursive call with reduced range
}
*/

/*// without recursion----
void reverse_string(string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}
*/


int main() {
    cout << "enter a string: ";
    string str;
    cin >> str;     

    // reverse_string(str, 0, str.length() - 1);   // for recursive approach
    // reverse_string(str);   // for iterative approach
    cout <<  str;
    return 0;
}


