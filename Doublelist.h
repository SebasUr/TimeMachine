//
// Created by Sebastian on 10/09/2023.
//

#ifndef TIMEMACHINE_DOUBLELIST_H
#define TIMEMACHINE_DOUBLELIST_H
#include "Nodo.h"


class Doublelist {
protected:
    Nodo* header;
    int eventCounter;
public:
    Doublelist();
    void eventInsert(int scien, int num);

    int getEventCounter() const;

    void setEventCounter(int eventCounter);
};


#endif //TIMEMACHINE_DOUBLELIST_H
