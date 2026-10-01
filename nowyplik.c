// Napisz int suma(const int *t, int n) bez użycia 
// t[i] – tylko *(t+i) lub przesuwanie wskaźnika.
#include <stdio.h>


void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int suma(const int *t, int n) {
    int s = 0;
    for (const int *p = t; p < t + n; p++)
        s += *p;
    return s;
}



int main(void) {
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%d\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);
    return 0;
}


