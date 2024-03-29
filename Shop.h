#ifndef SHOP_H
#define SHOP_H

#define MAX_MECHANICS    5

#include "Mechanic.h"
#include "Customer.h"
#include "Vehicle.h"
#include "LinkedList.h"

class Shop{

    public:
        Shop();
        ~Shop();
        Shop& operator+=(Customer*);
		Shop& operator-=(Customer*);
        Customer* getCustomer(int);
        LinkedList<Customer>& getCustomers();
        Shop& operator+=(Mechanic*);
        int getNumMechanics();
        LinkedList<Mechanic>& getMechanics();

    private:
        LinkedList<Customer> customers;
        int numMechanics;
        LinkedList<Mechanic> mechanics;
};

#endif
