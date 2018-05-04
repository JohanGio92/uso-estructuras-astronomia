Algoritmos y Programación 2 - FI UBA

# Uso de Estructuras Dinámicas: Astronomía

## Enunciado

Considerando la clase:

* Estrella: [`Estrella.h`](../enunciado/src/Estrella.h)

1. Implementar el método `buscarEstrellaMasCercana` de la clase `Astronomo`:

```c++

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

```

2. Implementar el método `seleccionarEstrellasPorTemperatura` de la clase `Astronomo`:

```c++

/*
 * post: agrega a la lista 'seleccionadas' aquellas Estrellas de 'estrellas'
 *       cuya temperatura está entre 'temperaturaDesde' y
 *       'temperaturaHasta'.
 */
void seleccionarEstrellasPorTemperatura(Lista<Estrella*>* estrellas,
                                        float temperaturaDesde,
                                        float temperaturaHasta,
                                        Lista<Estrella*>* seleccionadas);

```

## Solución


1. Implementación del método `buscarEstrellaMasCercana`:

* Astronomo: [`Astronomo.h`](../punto-01/src/Astronomo.h) - [`Astronomo.cpp`](../punto-01/src/Astronomo.cpp)

Mejoramos la implementación agregando a `Estrella` el método `bool esMasCercanaQue(Estrella* otraEstrella)`

* Astronomo: [`Astronomo.h`](../punto-01-b/src/Astronomo.h) - [`Astronomo.cpp`](../punto-01-b/src/Astronomo.cpp)

* Estrella: [`Estrella.h`](../punto-01-b/src/Estrella.h)

2. Implementación del método `seleccionarEstrellasPorTemperatura`

* Astronomo: [`Astronomo.h`](../punto-02/src/Astronomo.h) - [`Astronomo.cpp`](../punto-02/src/Astronomo.cpp)

* Estrella: [`Estrella.h`](../punto-02/src/Estrella.h)
