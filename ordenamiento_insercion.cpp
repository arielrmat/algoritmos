#include <bits/stdc++.h>
using namespace std;

void insercion(int arreglo[], int n){
  int elem_ord, j;
  for (int i = 1; i < n; i++) {
    elem_ord = arreglo[i];
    j = i-1;
    while(j >= 0 && elem_ord < arreglo[j]){
      arreglo[j+1] = arreglo[j];
      j--;
    }
    arreglo[j+1] = elem_ord;
  }
}


void mostrar(int arreglo[], int n){
  for (int i = 0; i < n; i++)
    cout << arreglo[i] << " ";
  cout << endl;
}

int main() {
  
  int arreglo[] = {5,8,4,2,9,3,7,6};
  int n = sizeof(arreglo) / sizeof(int);
  mostrar(arreglo, n);
  insercion(arreglo, n);
  mostrar(arreglo, n);
  
  return 0;
}
