//========================================================
// Zadanie 3_1 język C
// Program sprawdza czy podane 5 cyforwe N jest lustrzane
// czyli jest palindromem
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    // Zainicjowanie danych
    int cyforwa_liczba;
    int temp_liczba;
    int lustrzana_liczba;

    // Wczytywanie danych od użytkownika
    printf("Uzytkowniku podaj liczbe do odworcenia: ");
    scanf("%d", &cyforwa_liczba);

    // Sprawdzanie czy liczba jest lustrzana
    temp_liczba = cyforwa_liczba;
    lustrzana_liczba = 0;
    while (cyforwa_liczba != 0)
    {
        lustrzana_liczba = lustrzana_liczba * 10 + cyforwa_liczba % 10;
        cyforwa_liczba = cyforwa_liczba / 10;
    }

    // Wypisanie wyniku
    if (lustrzana_liczba == temp_liczba){
        printf("Twoja liczba %d jest lustrzana", lustrzana_liczba);
    } else {
        printf("Twoja liczba %d nie jest lustrzana", temp_liczba);
    }
    

    return 0;
}