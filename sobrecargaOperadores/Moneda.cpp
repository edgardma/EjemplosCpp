//
// Created by emarquez on 3/08/19.
//

#include "Moneda.h"

Moneda::Moneda(int valor) : valor {valor} {

}

Moneda Moneda::acumular(Moneda m) {
    Moneda resultado(valor + m.valor);
    return resultado;
}

int Moneda::get_valor() {
    return valor;
}

Moneda Moneda::operator+(Moneda m) {
    return acumular(m);
}
