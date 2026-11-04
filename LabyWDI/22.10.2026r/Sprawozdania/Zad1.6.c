//========================================================
// Zadanie 1_6 język C
// Konwersja KM na kW w zakresie od 10 do N z krokiem co 10
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>

int main() {
    // Deklaracja zmiennych
    int N;
    double wspolczynnik = 0.73549875; // 1 KM = 0.73549875 kW

    // Wczytanie wartości N od użytkownika
    printf("Podaj wartosc N: ");
    scanf("%d", &N);

    printf("\nTabela konwersji KM na kW:\n");
    printf("-------------------------\n");

    // Pętla od 10 do N z krokiem co 10
    for (int km = 10; km <= N; km += 10) {
        double kw = km * wspolczynnik;
        printf("%3d KM = %8.4f kW\n", km, kw);
    }

    return 0;
}