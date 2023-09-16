//
// Created by Sebastian on 10/09/2023.
//
#include <iostream>
#include "Doublelist.h"
#include "primeNums.h"
using namespace std;

Doublelist::Doublelist() {
    this->header = nullptr;
    this->eventCounter = 0;
    this->trulyheader = nullptr;
}

void Doublelist::eventInsert(int num,int scien) {
    if(eventCounter==0){
        Nodo* newevent = new Nodo(header,num,scien, nullptr);
        header = newevent;
        trulyheader = newevent;
        this->eventCounter = eventCounter + 1;
//        cout << "A node has been created" << endl;
    }
    else if(eventCounter!=0){
        Nodo* newevent = new Nodo(header,num,scien, nullptr);
       //cout << "Se creó el otro nodo" << newevent << endl;
        header->setLink(newevent);
        header = newevent;
        eventCounter++;
//        cout << "Another node has been created" << endl;
    }
}

int Doublelist::getEventCounter() const {
    return eventCounter;
}

void Doublelist::setEventCounter(int eventCounter) {
    Doublelist::eventCounter = eventCounter;
}

void Doublelist::printEvents() {
    Nodo* n=trulyheader;
    while (n!=nullptr){
        cout << n->getDato() << "|" << n->getScien() << "|"<< "-> ";
        if(n->getLink()== nullptr){
            cout << "NULL" << endl;
            break;
        }
        n = n->getLink();

    }
}

Nodo *Doublelist::searchEventA(Nodo* first) {
    Nodo* n=first->getLink();
    if(n!= nullptr || n->getLink() != 0){
        while (n!=nullptr || n->getLink()!= nullptr){
            if((n->getScien()=="Einstein") && (primeNums::isPrime(n->getDato()))){
                cout << "Se ha encontrado un evento A "<< n->getDato() << endl;
                return n;
            }
            if(n->getLink()!=nullptr){
                n = n->getLink();
            } else {
                return nullptr;
            }
        }
    }

    cout << "llegué acá"<< endl;
    return nullptr;
}

Nodo *Doublelist::searchEventB(Nodo *eventA) {
    Nodo*n = eventA->getLink();
    while (n!=nullptr){
        if(primeNums::isPrime(n->getDato())){
            cout << "Se ha encontrado un evento B "<< n->getDato() << endl;
            return n;
        }
        n= n->getLink();
    }
    return nullptr;
}

Nodo* Doublelist::searchEventC(Nodo *eventB, Nodo* eventA) {
    Nodo*n = eventB->getLink();
    while (n!=nullptr){
        if(primeNums::isCoprime(n->getDato(),eventA->getDato())){
            if(primeNums::isPrime(n->getDato())){
                cout << "Se ha encontrado un evento C con y ha habido un intercambio de datos "<< n->getDato() << endl;
                return n;
            } else {
                cout << "Se ha encontrado un evento C, no hay intercambio de datos "<< n->getDato() << endl;
                return n;
            }
        }
        n= n->getLink();
    }
    return nullptr;
}

Nodo *Doublelist::getFirst() {
    return trulyheader;
}

