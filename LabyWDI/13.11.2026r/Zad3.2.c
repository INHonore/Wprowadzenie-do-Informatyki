//========================================================
// Zadanie 3_2 język C
// Program uzysujke zmienne Su i IU i kończy się po sumie
// przekraczającej Su lub ilości liczb większej niż IU
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    // Inicjalizowanie zmiennych
    int liczba_Su;
    int liczba_IU;
    int liczba_do_dodania;
    int suma;
    int licznik;

    // Wczytywanie Su i IU
    printf("Uzytkowniku podaj liczbe Su i liczbe IU: ");
    scanf("%d %d", &liczba_Su,&liczba_IU);
    suma = 0;
    licznik = 0;

    // Wcytywanie liczby i sprawdzanie warunku zakończenia
    while (licznik < liczba_IU && suma < liczba_Su)
    {
            printf("Uzytkowniku podaj liczbe do dodania: ");
            scanf("%d", &liczba_do_dodania);
            licznik++;
            suma += liczba_do_dodania;
    }

    // Wypisanie wyniku
    if (licznik >= liczba_IU)
    {
        printf("Program zakonczyl sie przez przekroczenie ilosci zmiennych");
    }   else{
        
        printf("Program zakonczyl sie przez przekroczenie sumy");
    }
    
    return 0;

}