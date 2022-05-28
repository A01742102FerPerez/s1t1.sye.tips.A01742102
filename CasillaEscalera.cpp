#include "CasillaEscalera.hpp"
#include "Ctesconf.hpp"

//Construye la Casilla Escalera configurada con su premio/castigo y su tipo
CasillaEscalera::CasillaEscalera()
{
    numero=1;
    tipo="L";
    premio_castigo=ESC_PREMIO_CASTIGO;
}

//Construye la Casilla Escalera como Casilla Normal tipo Escalera y agregando el premio/castigo
CasillaEscalera::CasillaEscalera(int numero):CCasilla{numero, "L"}
{
    numero=numero;
    //confirmar con el maestro
    tipo="L";
    premio_castigo=ESC_PREMIO_CASTIGO;
}
