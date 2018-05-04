#ifndef ASTRONOMO_H_
#define ASTRONOMO_H_

#include "Estrella.h"
#include "Lista.h"

class Astronomo {

    public:

        /*
         * post: devuelve aquella Estrella de 'estrellas' cuya distancia
         *       es la mínima respecto al Sol.
         *       Si dos o más Estrellas están a distancia má­nima, devuelve
         *       la primera según su orden en la lista.
         *       Si 'estrellas' está vacía, devuelve NULL.
         */
        Estrella* buscarEstrellaMasCercana(Lista<Estrella*>* estrellas);
};

#endif /* ASTRONOMO_H_ */

