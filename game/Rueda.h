//
// Created by emarquez on 07/07/19.
//

#ifndef GAME_RUEDA_H
#define GAME_RUEDA_H


class Rueda {
private:
    int ancho;
    int radio;

public:
    Rueda(int pancho, int pradio):
        ancho{pancho},
        radio{pradio} {}
    int get_ancho();
    int get_radio();
};


#endif //GAME_RUEDA_H
