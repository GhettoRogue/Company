#ifndef COMPANY_RAILWAY_H
#define COMPANY_RAILWAY_H

#include <string>
#include "Transport.h"

using namespace std;

class Airplane : public Transport {
public:
    Airplane(const string &model, double maxWeight, const string &type, TransportMode mode) : Transport(model,
                                                                                                        maxWeight, type,
                                                                                                        mode) {}
};


#endif //COMPANY_RAILWAY_H
