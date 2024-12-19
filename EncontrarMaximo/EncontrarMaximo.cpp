#include <iostream>
using namespace std;
// Funcion para encontrar el numero mas grande en un vector
int encontrarMaximo(int numeros[], int tamano) {
int maximo = numeros[0];
for (int i = 1; i < tamano; ++i) {
if (numeros[i] > maximo) {
maximo = numeros[i];
}
}
return maximo;
}
int main() {
// Declaracion e inicializacion del vector de numeros
int numeros[] = {10, 25, 15, 30, 20};
// Llamada a la funcion para encontrar el numero mas grande
int maximo = encontrarMaximo(numeros, 5);
// Imprimir el resultado
cout << "El numero mas grande es: " << maximo << endl;
return 0;
}

