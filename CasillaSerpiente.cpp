#include "CasillaSerpiente.hpp"
#include "CCasilla.hpp"
#include "Ctesconf.hpp"

// Construye la Casilla Serpiente en una posicion valida, con su premio/castigo y tipo
CasillaSerpiente::CasillaSerpiente()
{
    
}

// Construye la Casilla Serpiente como Casilla Normal configurada como Serpiente y agrega el premio/castigo
CasillaSerpiente::CasillaSerpiente(int numero):CCasilla{numero, "S"}
{
    
}
