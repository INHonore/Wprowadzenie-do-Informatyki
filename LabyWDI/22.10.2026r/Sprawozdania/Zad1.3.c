//========================================================
// Zadanie 1_3 język C
// Sprawdzenie 3 liczb i wypisanie odpowiedzi w zależności 
// od ich watości
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Deklaracja zmiennych
    int liczba1, liczba2, liczba3;
    int licznik = 0;

    // Wczytanie danych od użytkownika
    scanf("%d %d %d", &liczba1, &liczba2, &liczba3);

    // Sprawdzenie warunków i wypisanie odpowiedzi
    if(liczba1 == liczba2){licznik++;};
    if(liczba2 == liczba3){licznik++;};
    if(liczba1 == liczba3){licznik++;};

    if(licznik == 1){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}