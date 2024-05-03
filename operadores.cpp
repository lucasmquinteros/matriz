#include <iostream>

using namespace std;

int main(){
int filas;
int columnas;
cout << "ingrese la cantidad de filas que hay: ";
cin >> filas;
cout << "ingrese la cantidad de columnas que hay: ";
cin >> columnas;

    int matriz[filas][columnas];
        for (int i=0;i<filas;i++){
            for (int j=0;j<columnas;j++){
                cout << "ingrese los numeros en la posiscion " << i << j << endl;
                cin >> matriz[i][j];
            }
        }

        cout << "la matriz ingresada es: " << endl;
 for (int i = 0; i < filas ; i++){
    for (int j = 0 ;j < columnas ; j++){
        cout << matriz[i][j];
    }
 cout << endl;
 }

  return 0;
}
