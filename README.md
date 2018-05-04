Algoritmos y Programaci�n 2 - FI UBA

# Uso de Estructuras Din�micas: Astronom�a

## Enunciado

Considerando la clase:

* Estrella: [`Estrella.h`](../enunciado/src/Estrella.h)

1. Implementar el m�todo `buscarEstrellaMasCercana` de la clase `Astronomo`:

```c++

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
};

```

2. Implementar el m�todo `seleccionarEstrellasPorTemperatura` de la clase `Astronomo`:

```c++

/*
 * post: agrega a la lista 'seleccionadas' aquellas Estrellas de 'estrellas'
 *       cuya temperatura est� entre 'temperaturaDesde' y
 *       'temperaturaHasta'.
 */
void seleccionarEstrellasPorTemperatura(Lista<Estrella*>* estrellas,
                                        float temperaturaDesde,
                                        float temperaturaHasta,
                                        Lista<Estrella*>* seleccionadas);

```

## Soluci�n


1. Implementaci�n del m�todo `buscarEstrellaMasCercana`:

* Astronomo: [`Astronomo.h`](../punto-01/src/Astronomo.h) - [`Astronomo.cpp`](../punto-01/src/Astronomo.cpp)

Mejoramos la implementaci�n agregando a `Estrella` el m�todo `bool esMasCercanaQue(Estrella* otraEstrella)`

* Astronomo: [`Astronomo.h`](../punto-01-b/src/Astronomo.h) - [`Astronomo.cpp`](../punto-01-b/src/Astronomo.cpp)

* Estrella: [`Estrella.h`](../punto-01-b/src/Estrella.h)

2. Implementaci�n del m�todo `seleccionarEstrellasPorTemperatura`

* Astronomo: [`Astronomo.h`](../punto-02/src/Astronomo.h) - [`Astronomo.cpp`](../punto-02/src/Astronomo.cpp)

* Estrella: [`Estrella.h`](../punto-02/src/Estrella.h)
