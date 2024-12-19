# Encontrar el Número Más Grande en un Vector en C++

Este programa en C++ permite encontrar el número más grande dentro de un arreglo de enteros. Es una implementación sencilla que utiliza estructuras de control y un enfoque iterativo para determinar el valor máximo en un conjunto de datos.

## Propósito del Código

El objetivo del programa es encontrar el número más grande en un conjunto predefinido de números almacenados en un arreglo. Esto se logra mediante una función que recorre el arreglo y compara cada elemento con el máximo actual.

## ¿Qué incluye el código?

1. **Función para Encontrar el Número Máximo**
   - La función `encontrarMaximo(int numeros[], int tamano)` toma como entrada un arreglo de números enteros y su tamaño.
   - Inicializa el valor máximo con el primer elemento del arreglo y lo actualiza si encuentra un número mayor durante la iteración:
     ```cpp
     int encontrarMaximo(int numeros[], int tamano) {
         int maximo = numeros[0];
         for (int i = 1; i < tamano; ++i) {
             if (numeros[i] > maximo) {
                 maximo = numeros[i];
             }
         }
         return maximo;
     }
     ```

2. **Declaración e Inicialización del Arreglo**
   - Se define un arreglo `numeros[]` con valores predefinidos de tipo `int`:
     ```cpp
     int numeros[] = {10, 25, 15, 30, 20};
     ```

3. **Cálculo del Número Máximo**
   - El programa llama a la función `encontrarMaximo` pasándole el arreglo de números y su tamaño como argumentos.
   - El valor máximo encontrado se almacena en la variable `maximo`.

4. **Salida del Resultado**
   - El programa imprime en la consola el número más grande encontrado en el arreglo:
     ```plaintext
     El numero mas grande es: 30
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ encontrarMaximo.cpp
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./encontrarMaximo
     ```

3. **Salida Esperada**
   - El programa calculará e imprimirá el número más grande del arreglo predefinido.

   Ejemplo:
   ```plaintext
   El numero mas grande es: 30
