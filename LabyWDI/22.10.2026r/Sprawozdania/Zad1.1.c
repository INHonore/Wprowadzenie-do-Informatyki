//========================================================
// Zadanie 1_1 język C
// Operacje na różnych typach danych
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Deklaracja zmiennych
    unsigned int liczbaint;
    long int liczbalong;
    float liczbafloat;
    double liczbadoouble;
    char znak;
    int wynik;
    float wynik2;

    // Wczytanie danych od użytkownika
    scanf("%u %ld %f %lf %c", &liczbaint, &liczbalong, &liczbafloat, &liczbadoouble, &znak);

    // Wyznaczanie operacji w zależności od znaku
    if(znak == '+'){
        wynik = liczbaint + liczbalong;
        wynik2 = liczbafloat + liczbadoouble;
    } else if(znak == '-'){
        wynik = liczbaint - liczbalong;
        wynik2 = liczbafloat - liczbadoouble;
    } else if(znak == '*'){
        wynik = liczbaint * liczbalong;
        wynik2 = liczbafloat * liczbadoouble;
    } else if(znak == '/'){
        wynik = liczbaint / liczbalong;
        wynik2 = liczbafloat / liczbadoouble;
    }

    // Wyświetlenie wyników
    printf("Wynik int i long: %d\n", wynik);
    printf("Wynik float i double: %f\n", wynik2);
}