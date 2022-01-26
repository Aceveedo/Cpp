#include <iostream>
using namespace std;

int aniosADias (int anios){
  const int DIASENANIO = 365;
  return DIASENANIO*anios;
}

int aniosAMeses (int meses){
  const int MESESENANIO = 365;
  return MESESENANIO*anios;
}

int dientesCaidos(int anios){
  int meses;
  int total;

  meses = aniosAMeses(anios);
  for(int i = o ; i <= meses ; i += 5){
  total += i;
  }

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

mesesTiburon = aniosAMeses(aniosTiburon);
cout << "El tiburon itene " << mesesTiburon << " dias" << endl;

// 4.- Cada cinco meses al tiburon se le caen tantos dientes como meses tenga, es decir: A los 5 meses se le caen 5 dientes, a los 10 meses se le caen 10 dientes, En total se le han caido 15, A los 15 meses se le caen 15 dientes. En total se le han caido 30.
// Calcula  cuantos dientes se le ha ncaido al tiburon.

totalDientes = dientesCaidos(aniosTiburon)

return 0;
}
