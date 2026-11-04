//========================================================
// Zadanie 2_2 język C
// Wypisanie sumy wsztkich liczb od 0 do N
// z uwzględniem liczb ujemnych
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================
#include <stdlib.h>
#include <stdio.h>


int main(){
    int liczba_n;
    int suma;
    // Pobranie danych od użytkownika
    printf("Uzytkowniku! Podaj liczbe do ktorej dodawac: ");
    scanf("%d", &liczba_n);

    // Wyliczenie sumy za pomocą pętli
    for (int i = 0;abs(liczba_n)>=i;i++){
        suma+=i;
    }

    // Poprawienie wyniku dla n < 0 
    if (liczba_n<0){
        suma = suma * -1;
    }

    // Wypisanie wyniku
    printf("Suma wynosi: %d", suma);
    
}