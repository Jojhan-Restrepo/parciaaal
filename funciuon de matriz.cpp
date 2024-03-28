#include <iostream>
using namespace std;

int main()
{
    int filas, columnas,mitad;
    
    // Solicitar al usuario el número de filas y columnas de la matriz
    cout << "Ingrese el tamaño de su matriz: ";
    cin >> filas;
    
    columnas=filas;
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
    return 0;
}