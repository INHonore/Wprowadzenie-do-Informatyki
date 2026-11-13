//========================================================
// Zadanie 3_4 język C
// Wyświetlanie wartości tablicy wyświetlając nagłowek
// przed każdą wartością tablicy
// WCY26IX2S0 Szer.pchor. Nadkierniczny Igor
//========================================================
#include <stdio.h>
#define N 20

int  tabZ[N]={625,640,631,621,7,773,722,735,741,779,772,780,778,850,77,856,855,853,852,863};
int i;
//koniec czesci pliku Z34.cpp

int main()
{
    // Petla wyświetlająca zadanie 
    for(i=0;i<N;i++)
    {
        printf("tabZ[%d] = %d ",i,tabZ[i]);
        if(i == 9)
        {
            printf("\nWyswietlono polowe tablicy \n");
        }
    }
   
   return 0;
}