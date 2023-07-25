#ifndef COMPANY_PASSENGER_H
#define COMPANY_PASSENGER_H

#include <string>
#include "Transport.h"

using namespace std;

class Passenger {
private:
    string _name;
    int _amount_passengers;
public:
    Passenger(const string &name, int amountPassengers) : _name(name), _amount_passengers(amountPassengers) {}

    const string &GetName() const {
        return _name;
    }

    int GetAmountPassengers() const {
        return _amount_passengers;
    }

    void SetName(const string &name) {
        _name = name;
    }

    void SetAmountPassengers(int amountPassengers) {
        _amount_passengers = amountPassengers;
    }
};


#endif //COMPANY_PASSENGER_H
