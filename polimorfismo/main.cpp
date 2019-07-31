#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"

int main() {
    Vehiculo* toyota = new Automovil;

    toyota->mover();

    delete toyota;

    return 0;
}