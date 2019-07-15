#ifndef MEMENTO_H
#define MEMENTO_H

#include "originator.h"

class Memento
{
public:
    Memento(const Originator& o);
    ~Memento();
    friend class Originator;

private:
    Originator getOriginator();
    Originator originator;

};

#endif // MEMENTO_H
