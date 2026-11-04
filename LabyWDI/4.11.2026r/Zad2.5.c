//========================================================
// Zadanie 2_5 język C
// Zliczanie sumy N liczb dwucyfrowych podanych przez
// użytkownika
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    int suma;
    int liczba;
    
    // Wczytanie danych
    printf("Podaj ilosc liczb do sprawdzenia: ");
    scanf("%d", &n);

    // Obliczenie sumy liczb dwucyforwych
    for(int i = 0; i < n;i++){
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        if (liczba > 9 && liczba < 100){
            suma += liczba;
        }
    }
    // Podanie wyniku
    printf("Suma wszystkich podanych liczb dwucyforwych rowna jest: %d", suma);
}