//
// Created by emarquez on 30/07/19.
//

#ifndef POLIMORFISMO_AUTOMOVIL_H
#define POLIMORFISMO_AUTOMOVIL_H

#include "Vehiculo.h"

class Automovil : public Vehiculo {
public:
    Automovil(int largo, int ancho) :
        Vehiculo(largo, ancho) {}
    void mover();
    void mover(int velocidad);
};

#endif //POLIMORFISMO_AUTOMOVIL_H
