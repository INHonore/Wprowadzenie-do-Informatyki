#include <stdio.h>
#include <stdlib.h>
/*Napisz program, który przywita się z użytkownikiem, zapyta, 
ile ma lat (zmienna całkowitoliczbowa) i wyświetli komunikat jaki wiek podał użytkownik.*/
/*Napisz program, który wyczyta jedną liczbę zmiennoprzecinkową, i wyświetl ją z dokładnością do 1,3,5 
miejsc po przecinku. Wczytywanie poprzedź odpowiednim komunikatem.*/

 void Podaj_wiek(){
     printf("Ile masz lat?\n");
     int wiek;
     scanf(" %d", &wiek);
     printf("Uzytkownik podal, ze ma %d lat.", wiek);
 }

 void Dokladnosc(){
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    float liczba;
    scanf(" %f", &liczba);
    printf("Jedno miejsce: %5.1f\n", liczba);
    printf("Trzy miejsce: %5.3f\n", liczba);
    printf("Piec miejsce: %5.5f\n", liczba);
 }


int main() {	
    //Podaj_wiek();
    Dokladnosc();
	return 0;
}