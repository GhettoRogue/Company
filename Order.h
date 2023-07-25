#ifndef COMPANY_ORDER_H
#define COMPANY_ORDER_H

using namespace std;

class Order {
private:
    double _distance;
    double _price;
public:
    Order(double distance, double price) : _distance(distance), _price(price) {}

    double GetDistance() const {
        return _distance;
    }

    double GetPrice() const {
        return _price;
    }

    void SetDistance(double distance) {
        _distance = distance;
    }

    void SetPrice(double price) {
        _price = price;
    }
};


#endif //COMPANY_ORDER_H
