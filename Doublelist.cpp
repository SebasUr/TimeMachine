//
// Created by Sebastian on 10/09/2023.
//
#include <iostream>
#include "Doublelist.h"
using namespace std;

Doublelist::Doublelist() {
    this->header = nullptr;
    this->eventCounter = 0;
}

void Doublelist::eventInsert(int num,int scien) {
    if(eventCounter==0){
        Nodo* newevent = new Nodo(header,num,scien,header);
        header = newevent;
        this->eventCounter = eventCounter + 1;
        cout << "Se creó el primer nodo" << endl;
    }
    else if(eventCounter!=0){
        Nodo* newevent = new Nodo(header,num,scien, nullptr);
       //cout << "Se creó el otro nodo" << newevent << endl;
        header->setLink(newevent);
        header = newevent;
        eventCounter++;
        cout << "Se creó el otro nodo" << endl;
    }
}

int Doublelist::getEventCounter() const {
    return eventCounter;
}

void Doublelist::setEventCounter(int eventCounter) {
    Doublelist::eventCounter = eventCounter;
}

