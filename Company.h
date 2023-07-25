#ifndef COMPANY_COMPANY_H
#define COMPANY_COMPANY_H

#include <vector>
#include "Order.h"
#include "./lib/Transport.h"

using namespace std;

class Company {
private:
    vector<Transport> _transport;
    vector<Order> _order;
public:
    void AddTransport(Transport transport) {
        _transport.push_back(transport);
    }

    void CreateOrder(Order order) {
        _order.push_back(order);
    }
};


#endif //COMPANY_COMPANY_H
