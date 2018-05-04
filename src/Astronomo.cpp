
#include "Astronomo.h"

Estrella* Astronomo::buscarEstrellaMasCercana(Lista<Estrella*>* estrellas) {

    Estrella* estrellaMasCercana = NULL;

    estrellas->iniciarCursor();
    while (estrellas->avanzarCursor()) {
        Estrella* estrellaActual = estrellas->obtenerCursor();

        if ((estrellaMasCercana == NULL) ||
            estrellaActual->esMasCercanaQue(estrellaMasCercana)) {

            estrellaMasCercana = estrellaActual;
        }
    }

    return estrellaMasCercana;
}
















