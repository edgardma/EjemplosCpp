//
// Created by emarquez on 30/06/19.
//

#ifndef GAME_AUTOMOVIL_H
#define GAME_AUTOMOVIL_H
#include <string>
#include <vector>
#include "Persona.h"
#include "Rueda.h"
#include "Vehiculo.h"

class Automovil : public Vehiculo {
private:
    int x;
    int y;
    int largo;
    int ancho;
    char color;
    std::string modelo;
    Persona* dueno;
    std::string placa;
    std::vector<Rueda*> ruedas;
    int vx;
    int vy;
    int direccion;

public:
    Automovil(int px, int py, int plargo, int pancho,
            char pcolor, std::string pmodelo, Persona* pdueno,
            std::string pplaca,
            int pvx, int pvy, int pdireccion):
            x{px}, y{py}, largo{plargo},
            ancho{pancho}, color{pcolor}, modelo{std::move(pmodelo)},
            dueno{pdueno}, placa{std::move(pplaca)}, vx{pvx},
            vy{pvy}, direccion{pdireccion} {
        for(int i = 0; i < 4; i++) {
            ruedas.push_back(new Rueda(4, 12));
        }
    }

    ~Automovil() {
        for(int i = 0; i < 4; i++) {
            delete ruedas[i];
        }
    }
    void enceder();
    void acelelar();
    void frenar();
    void detener();
    void set_direccion(int valor);
    std::string get_dueno();
    std::string get_modelo();
    int get_velocidad_x();
    int get_velocidad_y();
};


#endif //GAME_AUTOMOVIL_H
