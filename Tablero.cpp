#include "Tablero.hpp"
#include "CasillaEscalera.hpp"
#include "CasillaSerpiente.hpp"
#include "Ctesconf.hpp"
#include "CasillaNormal.hpp"
#include <fstream>
//TODO: ELIMINAR
//#include "CCasilla.hpp"

// Construye un Tablero de sólo casillas Normales --------------
Tablero::Tablero()
{
    for (int x=0; x<MAX_CASILLAS; x++)
    {
        //estamos creando los "cuadritos" del tablero del 1 al 30
        CasillaNormal box(x+1);
        c[x]=box;
    }
}
Tablero::Tablero(std::string f)
{}

/*
// Construye un Tablero cargandolo desde un archivo ----------------------
Tablero::Tablero(std::string f)
{
   char cadena[128];
  ifstream fe("C:/ruta_archivos/archivo.txt");
  while (!fe.eof()) {
    fe >> cadena;
    cout << cadena << endl;
  }
  fe.close();

   char cadena[128];
    int x=0;
  ifstream fe(f);
  while (!fe.eof()) {
    fe >> cadena;
     //  CCasilla box(leer+1,cadena);
     //   c[leer]=box;
     if (cadena=="N")
     {
        CasillaNormal box(x+1);
        c[x]=box;
        setCasilla(box,x);
     }

         if (cadena=="S")
     {
        CasillaSerpiente box(x+1);
        c[x]=box;
     }

         if (cadena=="L")
     {
        CasillaEscalera box(x+1);
        c[x]=box;
     }
     //como leer un archivo linea por linea?


  }
  fe.close();
}
*/

// Muestra el tablero casilla x casilla --------------------
void Tablero::print() 
{
    
    for( int x=0; x<MAX_CASILLAS; x++)
    {
        std::cout<<"["<<c[x].getNumeroCasilla()<<c[x].getTipo()<<"] | ";
    }
}

//Inserta una casilla en una posición i -------------------
void Tablero::setCasilla(CCasilla vcasilla, int i)
{
    c[i]=vcasilla;
}

// Devuelve la casilla en la posición i --------------------
CCasilla Tablero::getCasilla(int i)
{
    return c[i];
}
