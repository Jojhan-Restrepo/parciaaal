#include <iostream>
using namespace std;
int k=2;
int r=3;

int matrizfunc(int filas) {
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
    int posicion_deseada = matriz[k- 1][r- 1];
    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
    return posicion_deseada;
} // Corrección: agregar un corchete de cierre para cerrar la definición de la función

int funcionvoltear1(int filas) {
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
    for (int j = columnas - 1; j >= 0; j--) {
        for (int i = 0; i < filas; i++) {
            matrizRotada[j][i] = matriz[i][j]; // Intercambiar filas por columnas
        }
    }

    int posicion_deseada1 = matrizRotada[k- 1][r- 1];
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
        delete[] matrizRotada[i];
    }
    delete[] matriz;
    delete[] matrizRotada;
    return posicion_deseada1;
}

int funcionvoltear2(int filas) {
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
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizRotada[i][j]=matriz[i][j];
        }
    }
    int posicion_deseada2=matrizRotada[k- 1][r- 1];
    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
        delete[] matrizRotada[i];
    }
    delete[] matriz;
    delete[] matrizRotada;
    return posicion_deseada2;
}

int funcionvoltear3(int filas) {
    int columnas = filas; // Corrección: usar el operador de asignación en lugar del operador de comparación
    int mitad = (filas * columnas / 2) + 1;
    
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
    // Obtener el valor deseado de la matriz rotada
    int posicion_deseada3 = matrizRotada[k- 1][r- 1];

    // Liberar la memoria asignada
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
        delete[] matrizRotada[i];
    }
    delete[] matriz;
    delete[] matrizRotada;
    return posicion_deseada3;
}


int main() {
    int arrmatrices[] = {3, 3, 3};
    int X[] = {3, 4, -1, 1};
    int longitudarrmatices = sizeof(arrmatrices) / sizeof(arrmatrices[0]);
    /*for (int i = 0; i < longitudarrmatices; i++) {
        int filas1, filas2, filas3;
        if (i == 0)
            filas1 = arrmatrices[0];
        if (i == 1)
            filas2 = arrmatrices[1];
        if (i == 2)
            filas3 = arrmatrices[2];
    }*/
    int posicionx = X[0];
    int posiciony = X[1];
    if(k> arrmatrices[0]- 1)
        arrmatrices[0]=arrmatrices[0]+ 2;

    int posicion=matrizfunc(arrmatrices[0]); 
    cout<<posicion;
    int posicion1=funcionvoltear1(arrmatrices[0]); 
    cout<<posicion1;    
    int posicion2=funcionvoltear2(arrmatrices[0]); 
    cout<<posicion2;
    int posicion3=funcionvoltear3(arrmatrices[0]); // Debes especificar qué valor de filas deseas utilizar aquí
    cout<<posicion3;
    

    //for(int i=2;i== )
    //matrizfunc(filas);
    //funcionvoltear1(filas);
    //funcionvoltear2(filas);

    return 0;
}


