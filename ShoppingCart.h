#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart{
    private:  
        string customerName;
        string currentDate;
        vector <ItemToPurchase> cartItems;
    public:
        ShoppingCart(string cartName = "none", string cartDate = "January 1, 2016");
        ~ShoppingCart();
        string GetCustomerName() const;
        string GetDate() const;
        int GetNumItemsInCart() const;
        int GetCostOfCart() const;

        void AddItem(ItemToPurchase newItem);
        void RemoveItem(string removeItem);
        void ModifyItem(ItemToPurchase modifyItem);

        void PrintTotal();
        void PrintDescription();

        
};

#endif
