//========================================================
// Zadanie 2_4 język C
// Zliczenie liczb podzielnych przez K w przedziale
// od a do b
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a;
    int b;
    int k;
    int licznik;

    // Wycztanie wartości
    printf("Podaj poczatek zakresu a, następnie koniec zakresu b i dzielnik k: ");
    scanf("%d %d %d", &a, &b, &k);

    // Zliczenie liczb podzielnych
    for(int i = a;i <= b;i++){
        if(i%k == 0){
            licznik++;
        }
    }

    // Wypisanie wyniku
    printf("Dla zakresu od %d do %d liczb podzielnych przez %d jest: %d", a, b, k, licznik);
}