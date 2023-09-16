#include <iostream>
#include "Nodo.h"
#include "Doublelist.h"
#include <cstdlib>
#include "primeNums.h"

using namespace std;

int main() {
    Doublelist* lista = new Doublelist();
    srand(time(nullptr));

    int randTT = 3 + rand() % 22;

    for(int i=0; i<randTT; i++){
        int rand100 = 1 + rand() % 100;
        int randScien = 1 + rand() % 2;
        lista->eventInsert(rand100,randScien);
    }
    lista->printEvents();

    Nodo* mainVal = lista->getFirst();
    while(mainVal != nullptr){
        if (mainVal->getLink()== nullptr){
            break;
        }
        Nodo* valid = lista->searchEventA(mainVal);
        if(valid==NULL){
            break;
        }
        if(valid->getLink() != nullptr){
            Nodo* validB = lista->searchEventB(valid);
            if(validB!= nullptr){
                Nodo* evenCVal = lista->searchEventC(validB,valid);
                mainVal = evenCVal;
            } else {
                break;
            }
        } else{
            break;
        }
    }
    cout << "get out"   << endl;
    return 0;
}
