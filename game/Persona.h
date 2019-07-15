//
// Created by emarquez on 06/07/19.
//

#ifndef GAME_PERSONA_H
#define GAME_PERSONA_H
#include <string>


class Persona {
private:
    std::string id;
    std::string nombre;
    bool es_natural;

public:
    Persona(std::string pid, std::string pnombre, bool pes_natural):
        id{pid},
        nombre{pnombre},
        es_natural{pes_natural} {}

    std::string get_id();
    std::string get_nombre();
    bool get_es_natural();
};


#endif //GAME_PERSONA_H
