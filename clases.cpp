#include <iostream>
using namespace std;

class Rectangulo {
private:
  double base = 5;
  double altura = 1;
public:

  Rectangulo(double base = 1, double altura = 1){
    //this -> base = base;
    //this -> altura = altura;
    setBase(base);
    setAltura(altura);
  }
  void setBase(double base){
    (base > 0) ? this -> base = base : this -> base = 1;
  }
  void setAltura(double altura){
    (altura > 0) this -> altura = altura: this -> altura = 1;
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
