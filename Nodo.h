//
// Created by Sebastian on 10/09/2023.
//

#ifndef TIMEMACHINE_NODO_H
#define TIMEMACHINE_NODO_H


class Nodo {
private:
    Nodo* pastLink;
    int dato;
    int scien;
    Nodo* Link;
public:
    Nodo(Nodo* pastLink,int d, int scien);
    Nodo(Nodo* pastLink, int d, int scien, Nodo* Link);

    int getDato() const;
    void setDato(int dato);

    Nodo *getLink() const;
    void setLink(Nodo *link);
};


#endif //TIMEMACHINE_NODO_H
