#include <stdio.h>

void stampaj(int *broj);

int main()
{
    // taking an integer variable
    int m = 100;

    // pointer variable pm that stores
    // the address of variable m
    int *pm = &m;

    // printing the value of variable m
    printf("The Value of Variable m is: %d\n", m);

    // printing the memory address of variable m
    // in hexadecimal format
    printf("The Memory Address of Variable m is: %p\n", &m);

    // printing the value of ptr i.e.
    // printing the memory address of variable m
    // in hexadecimal format using pointer variable
    printf("The Memory Address of Variable m is using ptr: %p\n", pm);

    stampaj(pm); // ili &m
    printf("\n a poslije: %d", m);

    //stampaj2(m);
    //printf("\n a poslije: %d", m);

    return 0;
}

void stampaj(int *broj) {
    printf("Value at address before modification: %d\n", *broj);
    (*broj)++;
    *broj = *broj + 1;
}

void stampaj2(int broj) {
    printf("Value at address before modification: %d\n", broj);
    broj++;
    broj = broj + 1;
}
