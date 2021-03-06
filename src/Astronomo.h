#ifndef ASTRONOMO_H_
#define ASTRONOMO_H_

#include "Estrella.h"
#include "Lista.h"

class Astronomo {

    public:

        /*
         * post: devuelve aquella Estrella de 'estrellas' cuya distancia
         *       es la m�nima respecto al Sol.
         *       Si dos o m�s Estrellas est�n a distancia m�nima, devuelve
         *       la primera seg�n su orden en la lista.
         *       Si 'estrellas' est� vac�a, devuelve NULL.
         */
        Estrella* buscarEstrellaMasCercana(Lista<Estrella*>* estrellas);

        /*
         * post: agrega a la lista 'seleccionadas' aquellas Estrellas de
         *       'estrellas' cuya temperatura est� entre 'temperaturaDesde' y
         *       'temperaturaHasta'.
         */
        void seleccionarEstrellasPorTemperatura(Lista<Estrella*>* estrellas,
                                                float minima,
                                                float maxima,
                                                Lista<Estrella*>* seleccionadas);
};

#endif /* ASTRONOMO_H_ */

