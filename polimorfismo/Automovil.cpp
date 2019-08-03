//
// Created by emarquez on 30/07/19.
//

#include "Automovil.h"
#include <iostream>

void Automovil::mover() {
    std::cout << "Mover Automovil a la velocidad: "
    << velocidad << "\n";
}

void Automovil::mover(int velocidad) {
    this->velocidad = velocidad;
    Automovil::mover();
}

