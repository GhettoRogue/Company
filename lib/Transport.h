#ifndef COMPANY_TRANSPORT_H
#define COMPANY_TRANSPORT_H

#include <string>
#include <vector>

#include "TransportMode.h"
#include "Cargo.h"

using namespace std;

class Transport {
private:
    string _model;
    double _max_weight;
    string _type;
    TransportMode _mode;
    Cargo _cargo;
public:
    Transport(const string &model, double maxWeight, const string &type, TransportMode mode, const Cargo &cargo)
            : _model(model), _max_weight(maxWeight), _type(type), _mode(mode), _cargo(cargo) {}

    double GetMaxWeight() const {
        return _max_weight;
    }

    const string &GetType() const {
        return _type;
    }

    void SetMaxWeight(double maxWeight) {
        _max_weight = maxWeight;
    }

    void SetType(const string &type) {
        _type = type;
    }
};


#endif
