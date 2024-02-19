#include <iostream>
using namespace std;

int main(){
    int a = 2;

    // memory alloc
    int* const ptr = new int;
    
    // raises error
    *ptr = (int*)&a;

    cout << *ptr;
}