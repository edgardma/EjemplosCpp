#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"

int main() {
    Vehiculo* toyota = new Automovil(40, 20);

    toyota->mover();
    toyota->mover(30);

    delete toyota;

    return 0;
}