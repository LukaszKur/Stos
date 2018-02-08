#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double schemat_klasyczny(int liczba_slow,
                         char *const *tablica_slow) {

    double x = atof(tablica_slow[1]);
    double wynik = 0.0;
    double potega_x = 1.0;

    for (int licznik = 2; licznik < liczba_slow; ++licznik) {
        wynik += potega_x * atof(tablica_slow[licznik]);
        potega_x *= x;
    }
    return wynik;
}

double schemat_Hornera(int liczba_slow,
                       char *const *tablica_slow) {

    double x = atof(tablica_slow[1]);
    double wynik = atof(tablica_slow[liczba_slow - 1]); // współczynnik a_n

    for (int licznik = liczba_slow - 2; licznik >= 2; --licznik) {
        wynik = wynik * x + atof(tablica_slow[licznik]);
    }

    return wynik;
}

double schemat_Hornera_rekurencyjnie(int liczba_slow, char *const *tablica_slow) {

    if(liczba_slow==2){
        return atof(tablica_slow[2]);
    }else
    {
        return schemat_Hornera_rekurencyjnie(liczba_slow-1,tablica_slow)
               *atof(tablica_slow[1])+atof(tablica_slow[liczba_slow-2]);
    }
}


int main(int liczba_slow, char *tablica_slow[]) {

    if (liczba_slow > 2) { //pierwszy parametr to nazwa programu
        printf("Wynik: %lf\n",
               schemat_Hornera_rekurencyjnie(liczba_slow, tablica_slow));
    } else {
        printf("Niepoprawna liczba parametrow!\n");
    }

    return 0;
}