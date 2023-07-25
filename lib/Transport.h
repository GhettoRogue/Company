#ifndef COMPANY_TRANSPORT_H
#define COMPANY_TRANSPORT_H

#include <string>
#include <vector>

#include "TransportMode.h"

using namespace std;

class Transport {
private:
    string _model;
    double _max_weight;
    string _type;
    TransportMode _mode;
public:
    Transport(const string &model, double maxWeight, const string &type, TransportMode mode) : _model(model),
                                                                                               _max_weight(maxWeight),
                                                                                               _type(type),
                                                                                               _mode(mode) {}

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
