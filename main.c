//vypocet faktorialu
#include <stdio.h>
#include <stdlib.h>


int vypocet(int i);

int main(void)
    {
    int vysledek = vypocet(5); //cislo, ze ktereho se bude pocitat faktorial
    printf("Vysledek  je: %d\n", vysledek); //vypsani vysledku
    return 0;
    }

int vypocet(int i) //cyklus pro vypocet faktorialu
    {
    int res = 1;
    for(int j = 2; j <= i; j++)
         {
          res *= j;
         }
     return res;

     }
