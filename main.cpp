#include <iostream>
#include "Nodo.h"
#include "Doublelist.h"
#include <cstdlib>
#include "primeNums.h"

using namespace std;

int main() {
    cout << "### HISTORY HAS STARTED TO BE GENERATED, THE TIMELINE HAS BEGUN ###" << endl << endl;
    Doublelist* lista = new Doublelist();
    srand(time(nullptr));

    int randTT = 3 + rand() % 22;

    for(int i=0; i<randTT; i++){
        int rand100 = 1 + rand() % 100;
        int randScien = 1 + rand() % 2;
        lista->eventInsert(rand100,randScien);
    }

    Nodo* mainVal = lista->getFirst();
    int i = 0;
    while(mainVal != nullptr){

        if (mainVal->getLink()== nullptr){
            break;
        }
        if (i>0){
            cout << "History is a loop... Searching for other events..." << endl << endl;
        }
        Nodo* valid = lista->searchEventA(mainVal);
        if(valid==NULL){
            cout <<"No memorable event has occurred..."<< endl << endl;
            break;
        }
        if(valid->getLink() != nullptr){
            Nodo* validB = lista->searchEventB(valid);
            if(validB!= nullptr){
                Nodo* evenCVal = lista->searchEventC(validB,valid);
                mainVal = evenCVal;
                i++;
                cout << endl;

            } else {
                cout <<"No other memorable event has occurred..."<< endl << endl;
                break;
            }
        } else{
            break;
        }

    }

    cout << "There have been a total of " << lista->getEventCounter() << " events" << endl;
    lista ->printEvents();
    cout << "Finished."   << endl;
    return 0;
}
