#include <iostream>
using namespace std;

//void mostrarArray (string array[]){
  //for(int i = 0 ; i < array->size() ; i++)
  //cout << i << " = " << array[i] << endl;
  //}
//}

int main(){
int  numJuegos = 10; //Declaramos funciones para nombrarlas en el bucel for, este bucle basicamente lo que hace es nombrar 10 juegos y cada juego se llame "A"
string juegos[numJuegos];

  for (int i = 0; i < numJuegos ; i++){ //Empieza el bucle for
    string jue;
    cout << "Introduce el nombre de un juego: ";
    cin >> jue;
    juegos[i] = jue;
  }

  for (int i = 0; i < numJuegos ; i++){
    cout << "juegos" << i << " = " << juegos[i] << endl;
  } //Termina el bluce for

  //mostrarArray(juegos);

return 0;
}

//Ejercicio para el 16/01/2022
// Rellenar un vector con los 100 primeros numeros y sumar de 4 en 4 los numeros y guardarlos en otro vector
