#include <iostream>
using namespace std;
const int k=3;
const int r=4;

void matrizfunc(int filas) {
    // Código para generar la primera matriz
    int mitad, columnas;
    columnas = filas; // Corrección: usar el operador de asignación en lugar del operador de comparación
    mitad = (filas * columnas / 2) + 1;
    // Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
        //cout<<*matriz[i];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = 1;
    int segundavez = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador == mitad && segundavez == 0) {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador = contador++;
                segundavez++;
            } else {
                matriz[i][j] = contador++; // Asignar números en el resto de la matriz
            }
        }
    }
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
} // Corrección: agregar un corchete de cierre para cerrar la definición de la función

void funcionvoltear1(int filas) {
    // Código para generar la segunda matriz
    int columnas, mitad;
    filas = columnas; // Corrección: usar el operador de asignación en lugar del operador de comparación
    mitad = (filas * columnas / 2) + 1;
    // Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = 1;
    int segundavez = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador == mitad && segundavez == 0) {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador = contador++;
                segundavez++;
            } else {
                matriz[i][j] = contador++; // Asignar números en el resto de la matriz
            }
        }
    }

    cout << "Matriz:" << endl;
    for (int j = columnas - 1; j >= 0; j--) {
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

void funcionvoltear2(int filas) {
    int columnas, mitad;
    filas = columnas; // Corrección: usar el operador de asignación en lugar del operador de comparación
    mitad = (filas * columnas / 2) + 1;
    // Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = filas * filas - 1;
    int segundavez = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador == mitad - 1 && segundavez == 0) {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador = contador--;
                segundavez++;
            } else {
                matriz[i][j] = contador--; // Asignar números en el resto de la matriz
            }
        }
    }

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

void funcionvoltear3(int filas) {
    int columnas, mitad;
    filas = columnas; // Corrección: usar el operador de asignación en lugar del operador de comparación
    mitad = (filas * columnas / 2) + 1;
    // Crear un puntero para el arreglo de punteros de filas
    int** matriz = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }
    int** matrizRotada = new int*[filas];

    // Crear cada fila como un arreglo dinámico de columnas
    for (int i = 0; i < filas; ++i) {
        matrizRotada[i] = new int[columnas];
    }

    // Rellenar la matriz con valores de ejemplo (solo para demostración)
    int contador = 1;
    int segundavez = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (contador == mitad && segundavez == 0) {
                matriz[i][j] = 0; // Asignar cero en la mitad de la matriz
                contador = contador++;
                segundavez++;
            } else {
                matriz[i][j] = contador++; // Asignar números en el resto de la matriz
            }
        }
    }
    // Rotar la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            matrizRotada[j][(filas - 1) - i] = matriz[i][j];
        }
    }
    // Imprimir la matriz rotada
    cout << "\nMatriz con filas como columnas:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << matrizRotada[i][j] << " ";
        }
        cout << endl;
    }
    const int posicion_deseada=matrizRotada[k][r]
    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matrizRotada[i];
    }
    delete[] matrizRotada;
}


int main() {
    int filas,contraseña,matrices;
    int arrmatrices{3,5,7};
    int X{3,4,-1,1};
    int k=3;
    int r=4;
    int longitudarrmatices = sizeof(arrmatrices) / sizeof(arrmatrices[0]);
    
    for(int i=0;i=longitudarrmatices;i++)
    {
        int filas1, filas2, filas3;
        if(i==0)
            filas1=arrmatrices[0];
        if(i==1)
            filas2=arrmatrices[1];
        if(i==2)
            filas3=arrmatrices[2];
    }
    posicionx=int X[0];
    pisiciony=int X[1];
    for(int i=2;i== )
    matrizfunc(filas);
    funcionvoltear1(filas);
    funcionvoltear2(filas);
    funcionvoltear3(filas);

    return 0;
}
