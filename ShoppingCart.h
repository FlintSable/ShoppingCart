#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart{
    ShoppingCart(string cartName = "none", string cartDate = "January 1,2016");
    ~ShoppingCart();
    private:  
        string customerName = "none";
        string currentDate = "January 1,2016";
        vector <ItemToPurchase> cartItems;
    public:
        string GetCutomerName() const;
        int GetNumItemsInCart() const;
        int GetCostOfCart() const;

        void AddItem(ItemToPurchase newItem);
        void RemoveItem(ItemToPurchase removeItem);
        void ModifyItem(ItemToPurchase modifyItem);

        void PrintTotal();
        void PrintDescription();
        
};

#endif
