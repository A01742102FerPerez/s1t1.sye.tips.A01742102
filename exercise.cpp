#include <iostream>
#include "Game.hpp"
//TODO: DELETE 

#include "CDado.hpp"
#include "Tablero.hpp"

int main()
{
    Game g("t1.tab", false, true);

    g.start();
    //TODO: DELETE
    Tablero j;
    j.print();
    int r;
    std::cin>>r;
    return 0;
}