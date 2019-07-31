//
// Created by emarquez on 30/07/19.
//

#ifndef POLIMORFISMO_AUTOMOVIL_H
#define POLIMORFISMO_AUTOMOVIL_H

#include "Vehiculo.h"

class Automovil : public Vehiculo {
public:
    Automovil() : Vehiculo(40, 20) {}
    void mover();
};

#endif //POLIMORFISMO_AUTOMOVIL_H
