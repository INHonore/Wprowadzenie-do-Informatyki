//========================================================
// Zadanie 3_5 język C
// Program ma funkcję która generuję losową liczbę 
// całkowitą, a nastepnie za pomocą funkcji wypełnia tab
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generator_liczb_losowych(int zak_p, int zak_k){
    int liczba_losowa;
    liczba_losowa = (rand() % (zak_k - zak_p + 1)) + zak_p;
    return liczba_losowa;
}

int main(){
    // Inicjalizowanie generatora liczb losowych
    srand(time(NULL));
    // Inicjalizowanie zmiennych
    int zakres_poczatkowy;
    int zakres_koncowy;
    int wielkosc_tablicy;

    // Wczytywanie danych od użytkownika
    printf("Podaj zakres poczatkowy: ");
    scanf("%d", &zakres_poczatkowy);
    printf("Podaj zakres koncowy: ");
    scanf("%d", &zakres_koncowy);
    printf("Podaj wielkosc tablicy: ");
    scanf("%d", &wielkosc_tablicy);
    
    // Tworzenie tablicy i wypełnianie jej losowymi liczbami
    int tablica[wielkosc_tablicy];
    for(int i = 0; i < wielkosc_tablicy; i++){
        tablica[i] = generator_liczb_losowych(zakres_poczatkowy, zakres_koncowy);
    }
    
    // Wyświetlanie tablicy
    printf("Wygenerowana tablica: ");
    for(int i = 0; i < wielkosc_tablicy; i++){
        printf("%d ", tablica[i]);
    }
    printf("\n");

}