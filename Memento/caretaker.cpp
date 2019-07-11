#include <iostream>
#include "CareTaker.h"
#include "Memento.h"

CareTaker::CareTaker() : lastElementInList(nullptr) {
}

CareTaker::~CareTaker() {
    for (Memento* element : listMementoUndo) {
        delete element;
    }
    listMementoUndo.clear();
    listMementoRedo.clear();
    if ( lastElementInList != nullptr) {
        delete lastElementInList;
    }
}


void CareTaker::setMemento(Memento* memento) {
    listMementoUndo.push_back(memento);
}

Memento* CareTaker::getMementoUndo() {

    listMementoRedo.push_front(listMementoUndo.back());

    listMementoUndo.pop_back();
    lastElementInList = listMementoUndo.back();
    return lastElementInList;
}

Memento* CareTaker::getMementoRedo() {

    listMementoUndo.push_back(listMementoRedo.front());

    lastElementInList = listMementoRedo.front();
    listMementoRedo.pop_front();
    return lastElementInList;

}
