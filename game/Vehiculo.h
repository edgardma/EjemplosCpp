//
// Created by emarquez on 14/07/19.
//

#ifndef GAME_VEHICULO_H
#define GAME_VEHICULO_H
#include <string>
#include "Persona.h"

class Vehiculo {
private:
    int x;
    int y;
    int largo;
    int ancho;
    std::string modelo;
    int vx;
    int vy;
    int direccion;
    Persona* dueno;

public:
    Vehiculo(int px, int py, int plargo, int pancho,
              std::string pmodelo, Persona* pdueno,
              int pvx, int pvy, int pdireccion):
            x{px}, y{py},
            largo{plargo}, ancho{pancho},
            modelo{std::move(pmodelo)}, dueno{pdueno},
            vx{pvx}, vy{pvy}, direccion{pdireccion} {
    }
    void enceder();
    void acelelar();
    void frenar();
    void detener();
    void set_direccion(int valor);
    std::string get_dueno();
    std::string get_modelo();
};


#endif //GAME_VEHICULO_H
