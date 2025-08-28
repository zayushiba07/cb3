#include <stdio.h>

int main() {
    int a = 10;        // normal integer variable
    int *p;            // declaring a pointer to int

    p = &a;            // assign address of 'a' to pointer 'p'

    printf("Value of a: %d\n", a);       // prints 10
    printf("Address of a: %d\n", &a);    // memory address of a
    printf("Pointer p stores: %d\n", p); // same address as &a
    printf("Value pointed by p: %d\n", *p); // *p = value at that address = 10

    return 0;
}
