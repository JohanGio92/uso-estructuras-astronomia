#ifndef ESTRELLA_H_
#define ESTRELLA_H_

#include <string>

class Estrella {

    private:

        std::string nombre;

        unsigned int distancia;

        float temperatura;

    public:

        /* pre : nombre identifica la estrella en el Universo,
         *       distancia medida en a�os luz respecto del Sol,
         *       temperatura medida en K.
         * post: instancia creada con el nombre, distancia y temperatura
         *       indicados.
         */
        Estrella(std::string nombre, unsigned int distancia,
                 float temperatura) {

            this->nombre = nombre;
            this->distancia = distancia;
            this->temperatura = temperatura;
        }

        /* post: devuelve el nombre que identifica un�vocamente
         *       la estrella en el Universo.
         */
        std::string obtenerNombre() {

            return this->nombre;
        }

        /* post: devuelve la distancia, medida en a�os luz, del
         *       Sol a la estrella.
         */
        unsigned int obtenerDistancia() {

            return this->distancia;
        }

        /* post: devuelve la temperatura, medida en K, de la
         *       superficie de la estrella.
         */
        float obtenerTemperatura() {

            return this->temperatura;
        }

        /*
         * post: indica si la estrella est� m�s cerca que 'otraEstrella'
         *       del Sol.
         */
        bool esMasCercanaQue(Estrella* otraEstrella) {

            return this->distancia < otraEstrella->distancia;
        }

};

#endif /* ESTRELLA_H_ */















