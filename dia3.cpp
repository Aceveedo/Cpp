
#include <iostream>
using namespace std;

//void mostrarArray (string array[]){
  //for(int i = 0 ; i < array->size() ; i++)
  //cout << i << " = " << array[i] << endl;
  //}
//}

int multiplicax5 (int num){
  return num*5;
}

void meMultiplicox5 (int &num){
  return num*5;
  cout << "Num en la funcion vale: " << num << endl;
}

void subirNota (int notas[3], int posicion, int nuevaNota){
  notas[posicion] = nuevaNota;
}

void imprimirArray(int array[20], int tama){
  for (int i = 0 ; i < tama ; i++){
      cout << array[i] << endl;
  }
}

int main(){
int  numJuegos = 100; //Declaramos funciones para nombrarlas en el bucel for, este bucle basicamente lo que hace es nombrar 10 juegos y cada juego se llame "A"
string juegos[numJuegos];
int numero1 = 2;
int numero2 = 0;
int notas[] = {8,4,9};


/*cout << "¿Cuantos juegos quieres introducir? ";
cin >> numJuegos;

  for (int i = 0; i < numJuegos ; i++){ //Empieza el bucle for
    string jue;
    cout << "Introduce el nombre de un juego: ";
    cin >> jue;
    juegos[i] = jue;
  }

  for (int i = 0; i < numJuegos ; i++){
  cout << "juegos" << i << " = " << juegos[i] << endl;*/
  } //Termina el bluce for

numero2 = multiplicax5(numero1);
cout << "El numero1 es " << numero1 << endl;
cout << "El numero2 es " << numero2 << endl;

meMultiplicox5(numero1);
cout << "El numero1 es " << numero1 <<endl << endl;

cout <<"Notas original" << endl:
imprimirArray(notas, 3);
cout << "Subimos la nota" << endl;
subirNota(notas,1,9);
cout << "Nota tras subir la nota " << endl;
imprimirArray(notas,3);

return 0;
}

//Ejercicio para el 16/01/2022
// Rellenar un vector con los 100 primeros numeros y sumar de 4 en 4 los numeros y guardarlos en otro vector
