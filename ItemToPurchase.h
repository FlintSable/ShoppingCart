#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
using namespace std;

class ItemToPurchase{

    private:
        string itemName;
        string itemDescription = "none";
        int itemPrice = 0;
        int itemQuantity = 0;

    public:
        ItemToPurchase(string iName, string iDescript, int iPrice, int iQuant);
        ~ItemToPurchase();
        void SetName(string itemDescription);
        void SetPrice(int itemPrice);
        void SetQuantity(int itemQuant);
        void SetDescription(string iDescript);
        void PrintItemCost() const;
        void PrintItemDescription() const;

        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;
        string GetDescription() const;

        
};

#endif