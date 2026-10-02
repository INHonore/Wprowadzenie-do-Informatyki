// 1.Napisz program, który pobierze od użytkownika 3 liczby całkowite, a następnie wyświetli wartości:

//     sumy trzech,
//     różnicy pierwszych dwóch,
//     iloczynu pierwszej i trzeciej,
//     ilorazu trzeciej i drugiej.

// 2.Napisz program, który wylicza średnią dla 5 ocen.

#include <stdio.h>
#include <stdlib.h>

void arytmetyczne_wyrazenia(int a,int b,int c){
    int suma = a + b + c;
    int roznica = a - b;
    int iloczyn = a*c;
    int iloraz = c/b;
    printf("Suma trzech: %d\nRoznica pierwszych dwoch: %d\nIloczyn pierwszej i trzeciej: %d\nIloraz trzeciej i drugiej: %d\n",suma,roznica,iloczyn,iloraz);
}

void srednia_arytmetyczna(int a,int b, int c, int d, int e){
    float srednia;
    srednia = (a+b+c+d+e)/5.0;
    printf("Srednia pieciu ocen wynosi: %f\n", srednia);
}

int main(){
    int liczba1;
    int liczba2;
    int liczba3;
    int liczba4;
    int liczba5;
    scanf("%d %d %d %d %d",&liczba1,&liczba2,&liczba3,&liczba4,&liczba5);
    arytmetyczne_wyrazenia(liczba1,liczba2,liczba3);
    srednia_arytmetyczna(liczba1,liczba2,liczba3,liczba4,liczba5);
    return 0;
}
