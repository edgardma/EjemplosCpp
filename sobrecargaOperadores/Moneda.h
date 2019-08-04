//
// Created by emarquez on 3/08/19.
//

#ifndef SOBRECARGAOPERADORES_MONEDA_H
#define SOBRECARGAOPERADORES_MONEDA_H


class Moneda {
private:
    int valor;

public:
    Moneda(int valor);
    Moneda acumular(Moneda m);
    Moneda operator+(Moneda m);
    int get_valor();
};


#endif //SOBRECARGAOPERADORES_MONEDA_H
