#include "Memento.h"
#include "Originator.h"

Memento::Memento(Originator o) : originator(o) {
}

Memento::~Memento() {
}

Originator Memento::getOriginator() {
    return originator;
}
