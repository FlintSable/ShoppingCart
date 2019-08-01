#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
using namespace std;

class ItemToPurchase{
    public:
        ItemToPurchase(string iName, string iDescrip, int iPrice, int iQuant);
        ~ItemToPurchase();
        void SetName(string itemDescription);
        void SetPrice(int itemPrice);
        void SetQuantity(int itemQuant);
        void SetDescription(string iDescrip);
        void PrintItemCost() const;
        void PrintItemDescription() const;

        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;
        string GetDescription() const;

    private:
        string itemName;
        string itemDescription = "noned";    
        int itemPrice;
        int itemQuantity;
        
};

#endif