#include <iostream>;
using namespace std;
/* [] declaramos cuatro variables
[] inicializamos volumen, base, altura, profundidad
[] pedimos los datos al usuario
[] declaramos la operacion
[] mostramos los datos de la operacion
*/

int main () {
float baseDelObjeto = 0;
float alturaDelObjeto = 0;
float profundidadDelObjeto = 0;
float volumenDelObjeto = 0;
cout << "ingresar baseDelObjeto";
cin >> baseDelObjeto;

cout << "ingresar alturaDelObjeto";
cin >> alturaDelObjeto;

cout << "ingresarprofundidadDelObjeto";
cin >> profundidadDelObjeto;

volumenDelObjeto = baseDelObjeto * alturaDelObjeto * profundidadDelObjeto;

cout << "El volumen del objeto es: " <<, volumenDelObjeto;


return 0;
}
