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
    char color;
    std::string placa;
    std::vector<Rueda*> ruedas;

public:
    Automovil(int px, int py, int plargo, int pancho,
            char pcolor, std::string pmodelo, Persona* pdueno,
            std::string pplaca,
            int pvx, int pvy, int pdireccion):
            Vehiculo(px, py, plargo, pancho,
                    pmodelo, pdueno, pvx, pvy, pdireccion),
            color{pcolor},
            placa{std::move(pplaca)} {
        for(int i = 0; i < 4; i++) {
            ruedas.push_back(new Rueda(4, 12));
        }
    }

    ~Automovil() {
        for(int i = 0; i < 4; i++) {
            delete ruedas[i];
        }
    }
};


#endif //GAME_AUTOMOVIL_H
