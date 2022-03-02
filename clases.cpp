#include <iostream>
using namespace std;

class Rectangulo {
private:
  double base = 5;
  double altura = 1;
public:
  Rectangulo(double base = 1, double altura = 1){
    this -> base = base;
    this -> altura = altura;
  }
  void setBase(double base){
    this -> base = base;
  }
  void setAltura(double altura){
    this -> altura = altura;
  }
  double getBase(){
    return this -> base;
  }
  double getAltura(){
    return this -> altura;
  }
  void imprimir(){
      cout << "La base de folio es " << this -> base << " y la altura es " << this -> altura) << endl;
  }
};

int main(){

  Rectangulo folio(5,3);
  Rectangulo tablero;
  Rectangulo manta(4);

  cout << "Folio: " << endl;
  folio.imprimir();
  folio.setBase(2);
  folio.setAltura(2);
  folio.imprimir();
  cout << "Tablero: " << endl;
  tablero.imprimir();
  cout << "Manta: " << endl;
  manta.imprimir();
  return 0;
}
