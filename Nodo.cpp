//
// Created by Sebastian on 10/09/2023.
//

#include <iostream>
#include "Nodo.h"
using namespace std;

int Nodo::getDato() const {
    return dato;
}

void Nodo::setDato(int dato) {
    Nodo::dato = dato;
}

Nodo *Nodo::getLink() const {
    return Link;
}

void Nodo::setLink(Nodo* link) {
    Link = link;
}

Nodo::Nodo(Nodo* pastLink, int d, int scien) {
    this->dato = d;
    this->scien = scien;
}

Nodo::Nodo(Nodo* pastLink, int d, int scien, Nodo* Link) {
    this->pastLink = pastLink;
    this->dato = d;
    this->Link = Link;
    this->scien = scien;
}

std::string Nodo::getScien() const {
    if (scien == 1){
        return "Einstein";
    }
    else{
        return "Rosen";
    }
}

void Nodo::setScien(int scien) {
    Nodo::scien = scien;
}
