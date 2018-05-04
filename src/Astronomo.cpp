
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

void Astronomo::seleccionarEstrellasPorTemperatura(Lista<Estrella*>* estrellas,
                                                   float minima,
                                                   float maxima,
                                                   Lista<Estrella*>* seleccionadas) {

    estrellas->iniciarCursor();
    while (estrellas->avanzarCursor()) {
        Estrella* estrellaAnalizada = estrellas->obtenerCursor();

        if (estrellaAnalizada->tieneTemperaturaEntre(minima, maxima)) {

            seleccionadas->agregar(estrellaAnalizada);
        }
    }

}














