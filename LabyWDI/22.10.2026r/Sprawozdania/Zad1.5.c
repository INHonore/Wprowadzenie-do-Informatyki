//========================================================
// Zadanie 1_5 język C
// Odwracanie wprowadzonej liczby
// WCY26IX2S0 Nadkierniczny Igor
//========================================================
#include <stdio.h>
#include <stdlib.h>

int main(){
    int liczba;
    char liczbaodwrocona[128];
    int licznik = 0;
    
    scanf("%d", &liczba);
    
    // Obsługa przypadku, gdy podano 0
    if (liczba == 0) {
        printf("Liczba odwrocona: 0\n");
        return 0;
    }
    
    while(liczba > 0){
        int cyfra = liczba % 10;
        // Dodajemy '0', aby uzyskać poprawny znak ASCII
        liczbaodwrocona[licznik] = (char)(cyfra + '0');
        liczba /= 10;
        licznik++;
    }
    
    // Dodajemy znak końca ciągu na końcu tablicy
    liczbaodwrocona[licznik] = '\0';

    printf("Liczba odwrocona: %s\n", liczbaodwrocona);
    return 0;
}