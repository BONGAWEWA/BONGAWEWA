#include "quadrato.h"

int main() {

   int a,b,c,i,lato,N;



   cout << "inserisci il lato del quadrato -->  ";
   cin>>N;
  // cout<<"inserisci il numero di sequenze di calcolo -->  ";
  // cin>>i;


    for(lato=1; lato<N+1;lato++)
    {
        quadrato verifica(lato);
        verifica.perimetro(a);
        verifica.area(b),
        verifica.diagonale(c);
        verifica.stampa();
        verifica.file();
    }

   return 0;
}
