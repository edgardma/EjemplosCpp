//
// Created by emarquez on 30/07/19.
//

#ifndef POLIMORFISMO_VEHICULO_H
#define POLIMORFISMO_VEHICULO_H

class Vehiculo {
private:
    int largo;
    int ancho;
protected:
    int velocidad;
public:
    Vehiculo(int largo, int ancho);
    virtual void mover() = 0;
    virtual void mover(int velocidad) = 0;
};

#endif //POLIMORFISMO_VEHICULO_H
