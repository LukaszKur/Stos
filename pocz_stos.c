//
// Created by lukasz on 08.02.18.
// stos w postaci listy LIFO

#include <stdio.h>
#include "stos.h"
int main(){
    struct  Wezel *top=NULL; //wskaznik stosu
    struct Dane para;
    struct Dane para_ze_stosu;
    para.indeks=1;
    para.wartosc=23;
    push(&top,para);

    para.indeks=2;
    para.wartosc=62;
    push(&top,para);

    para.indeks=3;
    para.wartosc=-35;
    push(&top,para);

    para.indeks=4;
    para.wartosc=13;
    push(&top,para);

    para_ze_stosu=pop(&top);
    printf("(%d, %d) zdjety ze stosu\n",para_ze_stosu.indeks,para_ze_stosu.wartosc);

    printf("(%d, %d) najmlodszy na stosie\n",peek(top).indeks,peek(top).wartosc);

    return  0;
}