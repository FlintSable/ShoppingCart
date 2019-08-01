#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
using namespace std;

class ItemToPurchase{
    public:
        ItemToPurchase();
        ~ItemToPurchase();
        void SetName(string itemDescription);
        void SetPrice(int itemPrice);
        void SetQuantity(int itemQuant);

        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;

    private:
        string itemName;
        int itemPrice;
        int itemQuantity;
        
};

#endif