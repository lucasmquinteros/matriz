#include <iostream>

using namespace std;

int main(){
int matriz [3][3] ={
  {1,2,3},
  {4,5,6},
  {7,8,9},
};
bool nEncontrado = false;
int nBuscado;
for (int i=0;i<3;i++){
    for(int j=0;j<3;i++){
        if (matriz[i][j] == nBuscado){
            nEncontrado = true;
            cout << "numero buscado se encontro";
            break;
        }
    }if (nEncontrado){
    break;
    }
}
if (!nEncontrado){
    cout << "numero no fue encontrado";
}




return 0;
}
