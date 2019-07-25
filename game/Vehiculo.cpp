//
// Created by emarquez on 14/07/19.
//

#include "Vehiculo.h"

void Vehiculo::enceder() {

}

void Vehiculo::acelelar() {

}

void Vehiculo::frenar() {

}

void Vehiculo::detener() {

}

void Vehiculo::set_direccion(int valor) {
    direccion = valor;
}

std::string Vehiculo::get_dueno() {
    if (dueno != nullptr)
        return dueno->get_nombre();
    else
        return "Auto no tiene dueno asignado";
}

std::string Vehiculo::get_modelo() {
    return modelo;
}

int Vehiculo::get_velocidad_x() {
    return x;
}

int Vehiculo::get_velocidad_y() {
    return y;
}
