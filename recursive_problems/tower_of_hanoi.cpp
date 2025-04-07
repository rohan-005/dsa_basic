/*Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks.
Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk
is placed on the top and they are on rod A. The objective of the puzzle is to move the entire
stack to another rod (here considered C), obeying the following simple rules:

Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top
of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk.
*/



#include <iostream>
using namespace std;


void towerOfHanoi(int n, char from_rod, char to_rod,char aux_rod ,int &count)
{

    if (n == 0) {
        return ;
    }
    
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod,count);
    cout << "Move disk " << n << " from rod " << from_rod<< " to rod " << to_rod << endl;
    count++;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod,count);
}

int main()
{
    int number;
    cout<<"enter number of disks: ";
    cin>>number;
    int count = 0;
    // A, B and C are names of rods
    towerOfHanoi(number, 'A', 'C', 'B',count);

    cout<<"total steps taken = "<<count;
    return 0;
}



