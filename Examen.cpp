#include <iostream>
using namespace std;

int aniosADias (int anios){
  const int DIASENANIO = 365;
  return DIASENANIO*anios;
}

int main(){

// 1.- Imprime tu nombre por pantalla.

cout << "Alvaro Acevedo Moreno" << endl;

// 2.- ¿Cuantos años tiene el tiburon?

int aniosTiburon;
cout <<"¿Cuantos anios tiene el tiburon?";
cin >> aniosTiburon;
cout << "El tiburon tiene " << aniosTiburon << " anios" << endl;

// 3.- Partiendo de un numero de años, calcula cuanto tiempo en dias y cuánto tiempo en meses ha pasado
int mesesTiburon;
int diasTiburon;

diasTiburon = aniosADias(aniosTiburon);
cout << "El tiburon itene " << diasTiburon << " dias" << endl;

return 0;
}
