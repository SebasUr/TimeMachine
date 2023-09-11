#include <iostream>
#include "Nodo.h"
#include "Doublelist.h"

int main() {
    Doublelist* lista = new Doublelist();
    lista->eventInsert(1,24);
    lista->eventInsert(0,42);
    lista->eventInsert(1,22);
    lista->eventInsert(1,3);


}
