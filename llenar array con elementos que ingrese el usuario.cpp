#include <iostream>

using namespace std;

int main()
{
    /// como se constituye la matriz
    int filas, columnas;
    cout<<"Ingrese el num de filas: "<<endl;
    cin>>filas;
    cout<<"Ingrese el num de columnas: "<<endl;
    cin>>columnas;

    ///Definir la matriz
    int matriz[filas][columnas];

    ///Rellenar la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout
            <<"Ingrese el valor para la posicion: "
            <<i
            <<j
            <<endl;
            cin>>matriz[i][j];
        }
    }
    ///mostramos la matriz
    cout<< "La matriz ingresada es: "<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){

            cout<<matriz[i][j] << " ";
        }
        cout<<endl;
    }


    return 0;
}
