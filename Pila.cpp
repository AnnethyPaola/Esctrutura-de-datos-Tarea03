#include "Pila.h"

Pila::Pila():  _ultimo(NULL)
{
}

bool thereisanelement(Elemento* _ultimo){

return _ultimo==NULL?true:false;
}

void Pila::Agregar(Elemento* elemento)
{

if(thereisanelement(_ultimo)== false){
    elemento -> SetSiguiente(_ultimo);
    _ultimo = elemento;
}else{
    _ultimo = elemento;

}
    /* Llenar este método con su implementación de Agregar elemento a la pila */
}

Elemento* Pila::Extraer()
{
    if(thereisanelement(_ultimo) == false){
        Elemento* elemento = _ultimo;
        _ultimo = _ultimo -> GetSiguiente();
        return elemento;
    }


    /* Llenar este método con su implementación de Extraer un elemento de la pila */
    return NULL;
}
