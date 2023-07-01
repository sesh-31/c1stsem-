//how you pass pointer as a function argument?
#include <stdio.h>

void changeValue(int* ptr) {
    *ptr = 10;  // Modifying the value stored at the memory location pointed to by 'ptr'
}

int main() {
    int num = 5;
    printf("Before: %d\n", num);

    changeValue(&num);  // Passing the address of 'num' to the function

    printf("After: %d\n", num);
    return 0;
}
