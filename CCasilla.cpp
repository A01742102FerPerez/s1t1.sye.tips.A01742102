#include "CCasilla.hpp"
#include "Ctesconf.hpp"

// Construye la casilla con un valor de 1 y como normal
CCasilla::CCasilla()
{
    //TODO: CONFIRMAR SI ES NECESARIA ESTA INICIALIZACION
    numero=1;
    tipo="N";
    premio_castigo=NOR_PREMIO_CASTIGO;

}


//Construye la casilla con un valor y tipo enviados como parametro
CCasilla::CCasilla(int val, std::string vtipo)
{
    numero=val;
    tipo=vtipo;
    if (vtipo=="N")
    {
    premio_castigo=NOR_PREMIO_CASTIGO;
    }

    if (vtipo=="S")
    {
    premio_castigo=SER_PREMIO_CASTIGO;
    }

    if (vtipo=="L")
    {
    premio_castigo=ESC_PREMIO_CASTIGO;
    }
}  


//Consulta la casilla actual
int CCasilla::getNumeroCasilla()
{
    return numero;
}

//Consulta el tipo de la casilla actual
std::string CCasilla::getTipo()
{
    return tipo;
}

//Determina la casilla siguiente dependiendo del premio/castigo. Nunca debería pasar del maximo de casillas
int CCasilla::getSiguienteCasilla()
{
    int nextbox=1;
    
    if (tipo=="N")
    {
        nextbox=numero + NOR_PREMIO_CASTIGO;
    }

    if (tipo=="S")
    {
        nextbox=numero + SER_PREMIO_CASTIGO;
    }

    if (tipo=="L")
    {
        nextbox=numero + ESC_PREMIO_CASTIGO;
    }

    if (nextbox>30)
    {
        nextbox=30;
    }

    if (nextbox<1)
    {
        nextbox=1;
    }


    return nextbox;
   
}

//Muestra en consola el numero de casilla, su tipo y el premio/castigo correspondiente
void CCasilla::print()
{
    std::cout<<""<<numero<<" "<<tipo<<" "<<premio_castigo;
}
