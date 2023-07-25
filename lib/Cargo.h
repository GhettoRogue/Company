#ifndef COMPANY_CARGO_H
#define COMPANY_CARGO_H

#include <string>
#include "Transport.h"

using namespace std;

class Cargo {
string _name;
double _weight;
public:
    Cargo(const string &name, double weight) : _name(name), _weight(weight) {}

    const string &GetName() const {
        return _name;
    }

    double GetWeight() const {
        return _weight;
    }

    void SetName(const string &name) {
        _name = name;
    }

    void SetWeight(double weight) {
        _weight = weight;
    }
};


#endif //COMPANY_CARGO_H
