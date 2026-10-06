// Napisz program który oblicza sumę wszystkich liczb naturalnych mniejszych od podanej liczby
// Napisz program który oblicza sumę oraz średnią n-liczb podanych przez użytkownika. Liczę n podaje użytkownik.
// Napisz programy, które wczytują liczby do momentu wpisania przez użytkownika liczby o własnościach poniżej, a następnie ich największą, najmniejszą, sumę i średnią:

//     parzystej
//     nieparzystej
//     0

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void suma_mniejsza(int a){
    int suma;
    suma = 0;
    while (a > 0){
        a = a-1;
        suma += a;
    }
    printf("Suma wszystkich liczb rowna jest: %d", suma);
}

void suma_srednia_podana(){
    printf("Podaj liczbe liczb: ");
    int wielkosc;
    scanf("%d", &wielkosc);
    float liczba;
    float suma;
    int i;
    for (i=0;i<wielkosc;i++){
        scanf("%f",&liczba);
        suma += liczba;
    }
    float srednia;
    srednia = suma/wielkosc;
    printf("Suma: %f\nSrednia: %f\n", suma, srednia);
}

void statystyki_do_momentu_parzysta(){
    int wielkosc;
    float suma;
    float srednia;
    int najwieksza;
    int najmniejsza;
    float liczba;
    najwieksza = 0;
    najmniejsza = 1000000;
    wielkosc = 0;
    while (true){
        wielkosc++;
        scanf("%f", &liczba);
        suma += liczba;
        if (liczba>najwieksza){
            najwieksza = liczba;
        }
        if (liczba<najmniejsza){
            najmniejsza = liczba;
        }
        if ((int)liczba%2==0) break;
    }
    srednia = suma/wielkosc;
    printf("Najwieksza: %d\nNajmniejsza: %d\nSuma: %f\nSrednia: %f\n", najwieksza, najmniejsza, suma, srednia);
}

void statystyki_do_momentu_parzysta(){
    int wielkosc;
    float suma;
    float srednia;
    int najwieksza;
    int najmniejsza;
    float liczba;
    najwieksza = 0;
    najmniejsza = 1000000;
    wielkosc = 0;
    while (true){
        wielkosc++;
        scanf("%f", &liczba);
        suma += liczba;
        if (liczba>najwieksza){
            najwieksza = liczba;
        }
        if (liczba<najmniejsza){
            najmniejsza = liczba;
        }
        if ((int)liczba%2==1) break;
    }
    srednia = suma/wielkosc;
    printf("Najwieksza: %d\nNajmniejsza: %d\nSuma: %f\nSrednia: %f\n", najwieksza, najmniejsza, suma, srednia);
}

void statystyki_do_momentu_parzysta(){
    int wielkosc;
    float suma;
    float srednia;
    int najwieksza;
    int najmniejsza;
    float liczba;
    najwieksza = 0;
    najmniejsza = 1000000;
    wielkosc = 0;
    while (true){
        wielkosc++;
        scanf("%f", &liczba);
        suma += liczba;
        if (liczba>najwieksza){
            najwieksza = liczba;
        }
        if (liczba<najmniejsza){
            najmniejsza = liczba;
        }
        if ((int)liczba==0) break;
    }
    srednia = suma/wielkosc;
    printf("Najwieksza: %d\nNajmniejsza: %d\nSuma: %f\nSrednia: %f\n", najwieksza, najmniejsza, suma, srednia);
}

int main(){
    //suma_mniejsza(101);
    //suma_srednia_podana();
    //statystyki_do_momentu_parzysta();
    //statystyki_do_momentu_nieparzysta();
    //statystyki_do_momentu_zero();
    return 0;
}