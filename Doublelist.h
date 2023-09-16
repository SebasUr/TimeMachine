//
// Created by Sebastian on 10/09/2023.
//

#ifndef TIMEMACHINE_DOUBLELIST_H
#define TIMEMACHINE_DOUBLELIST_H
#include "Nodo.h"


class Doublelist {
protected:
    Nodo* header;
    Nodo* trulyheader;
    int eventCounter;
public:
    Doublelist();
    void eventInsert(int num, int scien);

    int getEventCounter() const;

    Nodo* getFirst();

    void setEventCounter(int eventCounter);

    void printEvents();

    Nodo* searchEventA(Nodo* first);

    Nodo* searchEventB(Nodo* eventA);

    Nodo* searchEventC(Nodo* eventB, Nodo* eventA);
};


#endif //TIMEMACHINE_DOUBLELIST_H
// buscar eventos A.
// añadir las dirmem en las que están los eventos <A
// a partir de cada evento A, buscar evento B.
// a partir de cada evento B si hay x cantidad de A como de B, buscar un C.