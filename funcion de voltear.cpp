#include <iostream>
using namespace std;

void matrizfunc(int filas)
{
    int mitad,columnas;
    columnas==filas;
    mitad=(filas*columnas/2)+ 1;
    // Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
        //cout<<*matriz[i];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = 1;
    int segundavez=0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador==mitad && segundavez==0) 
            {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador=contador++;
                segundavez++;
                } 
            else 
            {
                matriz[i][j] = contador++; // Asignar números en el resto de la matriz
                }
        }}
    // Imprimir la matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

void funcionvoltear(int filas)
    {
     int columnas,mitad;
    filas==columnas;
    mitad=(filas*columnas/2)+ 1;
    // Crear un puntero para el arreglo de punteros de filas
// Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = 1;
    int segundavez=0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador==mitad && segundavez==0) 
            {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador=contador++;
                segundavez++;
                } 
            else 
            {
                matriz[i][j] = contador++; // Asignar números en el resto de la matriz
                }
        }}

    cout << "Matriz:" << endl;
    for (int j = columnas- 1; j>=0; j--) {
        for (int i = 0; i < filas; i++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
    }
    
int main()
{
    int filas, columnas;
    // Solicitar al usuario el número de filas y columnas de la matriz
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    matrizfunc(filas);
    funcionvoltear(filas);
    return 0;
}