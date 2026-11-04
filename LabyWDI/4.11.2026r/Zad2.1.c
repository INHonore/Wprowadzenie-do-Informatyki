//========================================================
// Zadanie 2_1 język C
// Zmiana zadania 1_6 na działającego aż do zakończenia
// programu przez użytkownika wpisanie 0
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklaracja zmiennych
    int wartosc = 1;
    int tryb;
    double wspolczynnik = 0.73549875;         // 1 KM = 0.73549875 kW
    double wspolczynnik_kW_na_KM = 1.35962161; // 1kW = 1.35962161

    // Wczytanie trybu
    printf("Podaj tryb konwersji: 1: KM na kW --- 2: kW na KM (Wpisz 1 lub 2): ");
    scanf("%d", &tryb);

    // Sprawdzanie trybu
    if (tryb == 1)
    {
        while (wartosc != 0)
        {
            // Wczytanie wartości od użytkownika
            printf("Podaj wartosc KM lub '0', aby zakonczyc: ");
            scanf("%d", &wartosc);
            if(wartosc == 0 ){
                break;
            }
            double kw = wartosc * wspolczynnik;
            printf("%3d KM = %8.4f kW\n", wartosc, kw);
            
        }
    }
    // Sprawdzanie trybu
    if (tryb == 2)
    {
        while (wartosc != 0)
        {
            // Wczytanie wartości od użytkownika
            printf("Podaj wartosc kW lub '0', aby zakonczyc: ");
            scanf("%d", &wartosc);
            if(wartosc == 0 ){
                break;
            }
            double KM = wartosc * wspolczynnik_kW_na_KM;
            printf("%3d kW = %8.4f KM\n", wartosc, KM);
            
        }
    }
    return 0;
}