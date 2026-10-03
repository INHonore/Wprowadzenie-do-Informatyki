// Stwórz program, który wczytuje od użytkownika 2 liczy całkowite i wyświetla:

//     większą
//     mniejszą
//     relację jaka występuje pomiędzy pierwszą a drugą (np. 3<4, 5=5, 5>1)

// Kalkulator, w którym użytkownik podaje 2 liczby, następnie podaje znak działania jakie chce wykonać (+, -, *, /, %). 
// Program wykonuje działanie i wyświetla wynik.
// Napisz program, który pobiera 2 liczby od użytkownika a następnie stwierdza czy pierwsza jest podzielna przez drugą.
// Napisz program, który oblicza średnią dla 5 ocen, oraz wyświetla, ile było ocen niedostatecznych.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wyswietl_porownanie(int a, int b){
    int wieksza;
    int mniejsza;
    char relacja;
    relacja = '>';
    if (a > b){
        wieksza = a;
        mniejsza = b;
    }
    else{
        wieksza = b;
        mniejsza = a;
    }
    if (a==b)
        relacja = '=';
    printf("Wieksza: %d\nMniejsza: %d\nRelacja %d%c%d\n", wieksza, mniejsza, wieksza,relacja,mniejsza);
}

void kalkulator(int a, int b, char znak){
    int wynik;
    if (znak == '+')
        wynik = a + b;
    else if (znak == '-')
        wynik = a - b;
    else if (znak == '*')
        wynik = a * b;
    else if (znak == '/')  
        wynik = (b==0) ? 0 : a / b;
    else if (znak == '%')
        wynik = (b==0) ? 0 : a % b;
    printf("Wynik: %d\n", wynik);
}

void sprawdzenie_podzielnosci(int a, int b){
    bool wynik = (a%b==0);
    if(wynik)printf("%d jest podzielne przez %d\n",a,b);
    else printf("%d nie jest podzielne przez %d",a,b);
}

//kod zrecyklowany z poprzedniej lekcji
void srednia_arytmetyczna(int a,int b, int c, int d, int e){
    float srednia;
    srednia = (a+b+c+d+e)/5.0;
    printf("Srednia pieciu ocen wynosi: %f\n", srednia);
    int i;
    i = 0;
    if(a <3)i++;
    if(b <3)i++;
    if(c <3)i++;
    if(d <3)i++;
    if(e <3)i++;
    printf("Ocen niedostatecznych jest: %d\n", i);
}

int main(){
    int licz1;
    int licz2;
    char znak;
    int licz3;
    int licz4;
    int licz5;
    scanf("%d %d %c %d %d %d", &licz1, &licz2, &znak, &licz3, &licz4, &licz5);
    //wyswietl_porownanie(licz1,licz2);
    //kalkulator(licz1,licz2,znak);
    //sprawdzenie_podzielnosci(licz1,licz2);
    srednia_arytmetyczna(licz1,licz2,licz3,licz4,licz5);
    return 0;
}