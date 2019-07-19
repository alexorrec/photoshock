#include "Memento.h"
#include "Originator.h"

Memento::Memento(const Originator& o) : originator(o) {
}

Memento::~Memento() = default;

Originator Memento::getOriginator() {
    return originator;
}
