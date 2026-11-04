//========================================================
// Zadanie 2_6 język C
// Rysowanie 5 rysunków z x w zależności od podanej 
// wysokości przez użytkownika
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================

#include <stdlib.h>
#include <stdio.h>

int main(){
    int h;
    // Wyczytanie wysokości
    printf("Podaj wysokosc rysunkow: ");
    scanf("%d", &h);

    // Narysowanie rysunków
    for (int i = 0;i<h;i++){
        for(int j = 0;j<=h;j++){
            printf("x");
        }
        printf(" ");
        for(int j = 0;j<=i;j++){
            printf("x");
        }
        for(int j = 0;j<=h-i-1;j++){
            printf(" ");
        }
        printf(" ");
        for(int j = 0;j<=h-i-1;j++){
            printf("x");
        }
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        printf(" ");
        for(int j = 0;j<h-i-1;j++){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            printf("x");
        }
        printf(" ");
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        for(int j = 0;j<((h-i)*2)-1;j +=1){
            printf("x");
        }
        for(int j = 0;j<=i;j++){
            printf(" ");
        }
        printf("\n");
    }
}