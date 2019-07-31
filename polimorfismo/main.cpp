#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"

int main() {
    Vehiculo movil(40, 20);
    Vehiculo* toyota = new Automovil;

    movil.mover();
    toyota->mover();

    delete toyota;

    return 0;
}