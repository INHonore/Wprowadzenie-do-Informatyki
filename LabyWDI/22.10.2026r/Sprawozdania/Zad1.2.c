//========================================================
// Zadanie 1_2 język C
// Pobranie danych od użytkownika i ich wypisanie
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Deklaracja zmiennych
    char imie[20];
    char nazwisko[20];
    int nralbumu;
    int wiek;
    char zainteresowania[128];

    // Polecenie dla użytkownika
    printf("Podaj imie, nazwisko, numer albumu, wiek i zainteresowania (oddzielone spacjami w jednej lini):\n");

    // Wczytanie danych od użytkownika
    scanf("%s %s %d %d", imie, nazwisko, &nralbumu, &wiek);
    // Wczytanie reszty linii po scanf
    fgets(zainteresowania, sizeof(zainteresowania), stdin); 
    // Wypisanie danych
    printf("Imie: %s\n", imie);
    printf("Nazwisko: %s\n", nazwisko);
    printf("Numer albumu: %d\n", nralbumu);
    printf("Wiek: %d\n", wiek);
    printf("Suma wieku i nr albumu: %d\n", wiek + nralbumu);
    printf("Zainteresowania: %s\n", zainteresowania);
}