#include <bits/stdc++.h>
using namespace std;

void seleccion(int arreglo[], int n){
  int menor, pos_menor, temp;
  for (int i = 0; i < n; i++) {
    menor = arreglo[i];
    pos_menor = i;
    for (int j = i+1; j < n; j++) {
      if (arreglo[j] < menor) {
	menor = arreglo[j];
	pos_menor = j;
      }      
    }
    if (pos_menor != i) {
      temp = arreglo[i];
      arreglo[i] = arreglo[pos_menor];
      arreglo[pos_menor] = temp;
    }
  }
}

void mostrar(int arreglo[], int n){
  for (int i=0; i < n; i++)
    cout << arreglo[i] << " ";
  cout << endl;  
}

int main() {
  int arreglo[] = {5,8,4,2,9,3,7,6};
  int n = sizeof(arreglo) / sizeof(int);
  mostrar(arreglo, n);
  seleccion(arreglo, n);
  mostrar(arreglo, n);
  
  return 0;
}
