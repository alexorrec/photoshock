#include "memento.h"
#include "originator.h"

Memento::Memento(const Originator& o) : originator(o) {
}

Memento::~Memento() = default;

Originator Memento::getOriginator() {
    return originator;
}
