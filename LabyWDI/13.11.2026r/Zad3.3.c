//========================================================
// Zadanie 3_3 język C
// Program oblicza pierwiastki podanego równania kwadrato-
// wego dopóki użytkownik nie zakończy pętli poprzez duże N
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    // Zainicjalizowanie zmiennych
    int a;
    int b;
    int c;
    char czyDalej;
    int delta;
    czyDalej = 'T';

    // Stworzenie pętli
    while (czyDalej != 'N') {
        // Wczytanie danych
        printf("Uzytkowniku podaj wspolczynniki rownania kwadratowego a, b, c: ");
        scanf("%d %d %d", &a, &b, &c);

        // Sprawdzenie warunków i wypisanie wyniku
        if (a == 0) {
            printf("To nie jest rownanie kwadratowe (a nie moze byc rowne 0).\n");
        } else {
            delta = b * b - 4 * a * c;

            if (delta < 0) {
                printf("Brak pierwiastkow rownania kwadratowego.\n");
            } else if (delta == 0) {
                printf("Jest jeden pierwiastek tego rownania wynoszacy: %.2f.\n", (-b) / (2.0 * a));
            } else {
                printf("Sa dwa pierwiastki tego rownania wynoszace: %.2f oraz %.2f.\n",
                       (-b + sqrt(delta)) / (2.0 * a),
                       (-b - sqrt(delta)) / (2.0 * a));
            }
        }

        // Zapytanie o dalsze kontynuowanie sprawdzania
        printf("Czy sprawdzic kolejne rownanie kwadratowe? (T/N): ");
        scanf(" %c", &czyDalej);
    }

    return 0;
}