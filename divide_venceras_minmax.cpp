#include<bits/stdc++.h>
using namespace std;

struct ParNumeros{
  int min, max;
};

ParNumeros minmax(vector<int> &nums, int i, int d){
  ParNumeros resultado, izq, der;
  int mitad;
  //Casos Base
  //Cuando tengo solo un elemento
  if (i == d){
    resultado.min = nums[i];
    resultado.max = nums[i];
    return resultado;
  }
  //Cuando tengo dos numeros
  if (i == d-1){
    if(nums[i] < nums[d]){
      resultado.min = nums[i];
      resultado.max = nums[d];
    }else {
      resultado.min = nums[d];
      resultado.max = nums[i];
    }
    return resultado;
  }
  //Caso recursivo - dividir el arreglo en subarreglos
  mitad = (i+d)/2;
  izq = minmax(nums, i, mitad);
  der = minmax(nums, mitad+1, d);
  if(izq.min < der.min)
    resultado.min = izq.min;
  else
    resultado.min = der.min;
  if(izq.max > der.max)
    resultado.max = izq.max;
  else
    resultado.max = der.max;

  return resultado;  
}

int main (){
  vector<int> numeros{3, -1, 0, 4, 6, 9, 2, 7};
  ParNumeros resultado;
  resultado = minmax(numeros, 0, numeros.size()-1);
  cout << "MAX: " << resultado.max << endl;
  cout << "MIN: " << resultado.min;
  return 0;
}
