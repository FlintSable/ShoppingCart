#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <vector>
using namespace std;

class ShoppingCart{
    ShoppingCart(string cartName, string cartDate);
    ~ShoppingCart();
    private:  
        string customerName = "none"
        string currentDate = "January 1,2016"
        vector <ItemToPurchase> cartItems
    public:
        string GetCustomerName() const;
        string GetDate() const;
        int GetNumItemsInCart() const;
        int GetCostOfCart() const;

        void AddItem(ItemToPurchase newItem);
        void RemoveItem(ItemToPurchase removeItem);
        void ModifyItem(ItemToPurchase modifyItem);

        void PrintTotal();
        void PrintDescription();
        


  
}