//========================================================
// Zadanie 1_4 język C
// Obliczanie średniej x ocen gdzie x jest podawane przez 
// użytkownika, a następnie wyświetlenie komunikatu w 
// o średniej i ile było ocen = 2
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Deklaracja zmiennych
    int liczba_ocen;
    float ocena, suma = 0;
    int licznik_dwojek = 0;

    // Wczytanie liczby ocen od użytkownika
    printf("Podaj liczbe ocen: ");
    scanf("%d", &liczba_ocen);

    // Pętla do wczytywania ocen i obliczania średniej
    for(int i = 0; i < liczba_ocen; i++){
        printf("Podaj ocene %d: ", i + 1);
        scanf("%f", &ocena);
        suma += ocena;
        if(ocena == 2.0){
            licznik_dwojek++;
        }
    }

    // Obliczenie średniej
    float srednia = suma / liczba_ocen;

    // Wyświetlenie wyników
    printf("Srednia ocen: %.2f\n", srednia);
    printf("Liczba ocen rownych 2: %d\n", licznik_dwojek);

    return 0;
}