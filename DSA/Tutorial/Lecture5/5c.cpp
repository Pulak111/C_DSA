// Increment & Decrement
#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    cout << (++i) << endl; // "Pre increment" first incr i by 1 then print i. (i = 8)               8
    cout << (i++) << endl; // "Post increment" first print i (8) then increase it by 1 (i = 9)      8
    cout << (i--) << endl; // "Post decrement" first print i (9) then decrease it by 1 (i = 8)      9
    cout << (--i) << endl; // "Pre decrement" first dec i by 1 then print i (7)                     7
}