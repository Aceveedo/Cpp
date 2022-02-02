#include <iostream>
using namespace std;

void solicitarContrasena(string password){
  string palabra;
/*
  cout   << "Quiero comer crustaceos... " ;
  cin >> palabra;
  while(password != palabra){
    cout << "A que te rajo subnormal, yo lo que quiero es comer crustaceos cabronazo... " ;
    cin >> palabra;

  }
}*/

cout << "Quiero comer crustaceos ..." ;
cin >> palabra;
for(int i = 0 ; password != palabra && i < 3 ; i++){
  cout << "No me puedes dar mejor crustaceos ... ";
  cin >> palabra
  }
}

void imprimirLista (string lista[]){
  for (string i : lista){
    cout << i << endl;
  }
}

int aBase8 (int numero){
  if (numero < 64) cout << "No estamos preparados para trabjar la recurrencia todavia... "
  else{
    unidades = numero%8;
    decenas = numero/8;
    numero = decenas*10 + unidades;
  }

  void pasarLista (string lista[], int tama, char listaFaltas[]){
    string respuesta;

  for (int i = 0; i < tama ; i++){
    cout << "Esta" << lista[i] << " en clase? " << endl;
    cin >> respuesta;
    if (respuesta == "si") listaFaltas[i] = 'V';
    else listaFaltas[i] = 'F'
    }
  }
}
  int main(){
  string contrasena = "crustaceo";
  int numero;
  int numeroBase8
  string listaPulpos = {"A" , "B" , "C" , "D" , "E"};

  cout << "Alvaro Acevedo Moreno" << endl;

  solicitarContrasena(contrasena);

  cout <<"Introduce un numero: ";
  cin >> numero;
  numeroBase8 = aBase8(numero);
  cout << numeroBase8 << endl;





  return 0;
}
