#include <iostream>

using namespace std;

/* [] inicializamos las variables 3
[] le damos el valor
[] le pedimos al usuario que ingrese el valor
[] hacemos la operacion
[] mostrar el resultado
*/

int main () {
float pesodepersona, alturadepersona, indicedemasacorporal;
cout << "ingresar peso de persona en kg";
cin >> pesodepersona;

cout << "ingresar altura de persona en cm";
cin >> alturadepersona;

indicedemasacorporal = pesodepersona / (alturadepersona * alturadepersona);
cout << "indice de masa corporal:" << indicedemasacorporal;



if ( indicedemasacorporal < 18.5) {
    cout << "tenes bajo peso";
} else if ( indicedemasacorporal >= 18.5 && indicedemasacorporal <= 25){
cout << "tenes peso normal";
}
return 0;
}
