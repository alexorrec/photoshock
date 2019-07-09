#include "model.h"

Model::Model()
{

}

void Model::notify() {
    for (Observer* observer : observers)
        observer->updateUi();
}

void Model::addObserver(Observer* o) {
    observers.push_back(o);
}

void Model::removeObserver(Observer* o) {
    observers.remove(o);
}

void Model::setValue(int v, int& value){
    value = v;
    notify();
}

void Model::setString(std::string s, std::string& string){
    s = string;
    notify();
}
