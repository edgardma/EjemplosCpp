//
// Created by emarquez on 30/06/19.
//

#include "Automovil.h"

void Automovil::enceder() {

}

void Automovil::acelelar() {

}

void Automovil::frenar() {

}

void Automovil::detener() {

}

void Automovil::set_direccion(int valor) {

}

std::string Automovil::get_dueno() {
    if (dueno != nullptr)
        return dueno->get_nombre();
    else
        return "Auto no tiene dueno asignado";
}

std::string Automovil::get_modelo() {
    return modelo;
}

int Automovil::get_velocidad_x() {
    return vx;
}

int Automovil::get_velocidad_y() {
    return vy;
}