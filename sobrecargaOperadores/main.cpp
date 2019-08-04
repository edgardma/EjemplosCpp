#include <iostream>
#include "Moneda.h"

using  namespace std;

int main() {
    Moneda m10(10);
    Moneda m20(20);
    Moneda m50 = m20.acumular(m20.acumular(m10));
    Moneda m50b = m20 + m20 + m10;

    cout << "El valor de la moneda m50a es: " << m50.get_valor() << "\n";
    cout << "El valor de la moneda m50b es: " << m50b.get_valor() << "\n";

    return 0;
}