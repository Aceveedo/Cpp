#include <iostream>
using namespace std;


int* ordenarLista (int* ptrLista, int tama){
  int* ptrNuevaLista = new int[tama];
  for (int i = 0, j= tama-1 ; i < tama ; i++, j--){
    ptrNuevaLista[i] = ptrLista[j];
  }
  return ptrNuevaLista;
}

int* copiarLista (int* ptrLista, int tama){
  int* ptrNuevaLista = new int [tama];
  for (int i = 0 ; i < tama ; i++){

  }

  return ptrNuevaLista;
}

int posMinimoLista(int* ptrLista, int tama){
  int posicion = 0;
  int minimo = ptrLista[0];
  for (int i = 1 ; i < tama ; i++){
    if (ptrLista[i]<minimo){
      minimo = ptrLista[i];
      posicion = i;
    }
  }
  return posicion;
}

int* ordenarLista (int* ptrLista, int tama){
  int* ptrCopiaLista = copiaLista(ptrLista, tama);
  int* ptrOrdenadaLista = new int [tama];
  int tamaMax = 20;
  int posicionMin;
  for (int i = 0 ; i < tama ; i++){
    posicionMin = posMinimoLista(ptrCopiaLista,tama);
    ptrOrdenadaLista[i] = ptrCopiaLista[posicionMin];
    ptrCopiaLista[posicionMin] = tamaMax;
    eliminarPosicionLista(int* ptrLista, int tama, int pos){
    }
    return ptrOrdenadaLista;
  }
int* listaSinRepetidos (int* ptrLista, int tama){
  int* ptrCopiaLista = copiarLista(ptrLista, tama);
  for (int i = 0 ; i < tama ; i++){

  }
}
int main (){

int* ptrArray1;
int* ptrArray2;
int tama = 5;

cout << "Alvaro Acevedo " << endl;

cout << "Generar lista aleatoria " << endl;

ptrArray1 = crearListaAleatoria(tama);
imprimirLista(ptrArray1, tama);

cout << "Cambiar por doble. " << endl;

cambiarPorDobleLista(ptrArray1,tama,3);
imprimirLista(ptrArray1,tama);

cout << "Eliminar una posicion de la lista. " << endl;

tama = eliminarPosicionLista(ptrArray1, tama, 2);
imprimirLista(ptrArray1, tama);

cout << "Imprimir lista al revés. " << endl;

imprimirListaAlReves(ptrArray1, tama);

cout <<"Guardar lista al reves en una nueva lista. " << endl;

cout << "Lista antigua: ";

ptrArray2 = invertirLista(ptrArray1, tama)

cout << "Lista nueva: ";

  return 0;
}
