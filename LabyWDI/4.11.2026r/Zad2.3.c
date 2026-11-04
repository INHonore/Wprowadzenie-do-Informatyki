//========================================================
// Zadanie 2_3 język C
// Zliczanie sumy liczb z zakresu od 0 do N podzielnych
// przez liczbę K (liczby podane przez użytkonika)
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    int liczba_n;
    int liczba_k;
    int suma;

    // Pobranie zmiennych
    printf("Podaj liczbę N oznaczającą zakres, a nastepnie liczbe K do sprawdzania podzielnosci: ");
    scanf("%d %d", &liczba_n, &liczba_k);

    // Wyliczenie sumy
    for(int i  = 0; i <= liczba_n; i +=liczba_k){
        suma += i;
    }

    //Podanie wyniku
    printf("Wynik dodawania liczb podzielnych przez %d w zakresie %d to: %d", liczba_k,liczba_n,suma);
}