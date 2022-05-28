#include "CasillaNormal.hpp"
#include "CCasilla.hpp"

//Inicializa la casilla Normal Igual que la casilla base
CasillaNormal::CasillaNormal() : CCasilla{}
{
    numero=1;
    tipo="N";
    premio_castigo=NOR_PREMIO_CASTIGO;

}

//Inicializa la casilla Normal como casilla base indicando su posicion en el Tablero
CasillaNormal::CasillaNormal(int vnumero):CCasilla{}
{
    numero=vnumero;
    tipo="N";
    premio_castigo=NOR_PREMIO_CASTIGO;
  
}