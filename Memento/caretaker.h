#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento/Memento.h"
#include <list>

class CareTaker
{
public:
    CareTaker();
    ~CareTaker();

    void setMemento(Memento* memento);
    Memento* getMementoUndo();
    Memento* getMementoRedo();

public:
    std::list<Memento*> listMementoUndo;
    std::list<Memento*> listMementoRedo;

private:
    Memento* lastElementInList{nullptr};

};

#endif // CARETAKER_H
