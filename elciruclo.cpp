#include <iostream>
using namespace std;

class Circulo{

private:
  double base = 1;
  double perimetro = 1;
  double radio = 1;

public:
  Circulo(double base = 1, double altura = 1){
    this -> base = base;
    this -> perimetro = perimetro;
    this -> radio = radio;
  }
  void setBase(double base){
    if (base > 0) this -> base = base;
  }
  void setRadio(double radio){
    if (radio > 0) this -> radio = radio;
  }
  void setPerimetro(double perimetro){
    if perimetro > 0) this -> perimetro = perimetro
  }
  double getBase(){
    return this -> base
  }
  double getRadio(){
    return this -> radio
  }
  double getPerimetro(){
    return this -> perimetro
  }
  void imprimir(){
    cout << "La base del Circulo es " << this -> base << "El radio del circulo es " << this -> radio << "El perimetro del circulo es " << this -> perimetro << endl;
  }
};

int main(){
  circulo.imprimir
  return 0;
}
