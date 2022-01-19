#include <iostream>
using namespace std; // Siempre poner al iniciar un documento C++ //

bool muchaDiferencia(int diferencia, int num1, int num2){
  return (num1-num2 > diferencia);
}
int main() {
  string saludo = "Hola!";
  string repetir;
  string contrasena = "aaaa";
  bool esCorrecto;
  bool diferencia;
  int edad = 26;
  int edadIntroducidad;


cout << "Imprimir por pantalla" << endl; // Para imprimir por pantalla //
 cout << "Imprimir por pantalla\n";
 cout << "Comprobacion de salto de linea";
 cout << saludo << endl;

// Este codigo se usa para entrar en un bucle (while) y hace que cuando introduzcas una palabra se repita //
  while (true) {
    cout << "Introduce una palabra: ";
    cin >> repetir;
    cout << repetir << endl;
}

 while (!esCorrecto) {     // La exclamacion significia no // // Este codigo sirve para que hasta que no introduzcas la contraseña (aaaa del string) no salgas del bucle //
  cout << "Introduce la contraseña: ";
  cin >> repetir;
  if (repetir == contrasena){
    esCorrecto = true;

  }
}

//Este codigo sirve para poder preguntar la edad que tienes y que te responda una de las dos opciones definidas//
cout << "?Cuantos anios tienes? "; // Para preguntar (cout) //
cin >> edadIntroducida; // Para responder (cin) //

  if (edadIntroducida >= edad){
    cout << "Eres un viejo. ";
    } else {
    cout << "Eres un bebe. ";
  }
)
}

diferencia = muchaDiferencia(5,edadIntroducida,edad); // Este codigo sirve para que cuando introduzcas la edad y haya una diferencia mayor a 5 o mas respecto a la tuya, diga que hay mucha diferencia de edad //
if (diferencia){
  cout << "Hay mucha diferencia de edad.";
}

// Deberes:
// Crear una funcion de valor absoluto (quitar signos).
// Arreglar la funcion muchaDiferencia para que funcione con cualquier edad (mayor o menor que la tuya)
    return 0;
}
