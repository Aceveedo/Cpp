#include <iostream>
using namespace std;

int main(){

string juego = "Tetris";

string* ptrJuego = &juego;

cout << "Imprimo el juego: " << juego << endl;
cout << "Imprimo el &juego: " << &juego << endl;
cout << "Imprimo el ptrJuego: " << ptrJuego << endl;

  return 0;
}
