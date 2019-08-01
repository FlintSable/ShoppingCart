#include <iostream>
#include <vector>
using namespace std;

#inlcude "ShoppingCart.h"

// constructor/ deconstructor
ShoppingCart::ShoppingCart(string cartName = "none", string cartDate = "January 1,2016"){
    customerName = cartName;
    currentDate = cartDate;
}

ShoppingCart::~ShoppingCart(){}

// Accessors
ShoppingCart::GetCustomerName() const{
    return customerName;
}

ShoppingCart::GetDate() const{
    return currentDate;
}

ShoppingCart::GetNumItemsInCart() const{
    return 0
}

ShoppingCart::GetCostOfCart() const{
    return 0
}

// Mutators
ShoppingCart::AddItem(ItemToPurchase newItem){}
ShoppingCart::RemoveItem(ItemToPurchase removeItem){}
ShoppingCart::ModifyItem(ItemToPurchase modifyItem){}
ShoppingCart::PrintTotal(){}
ShoppingCart::PrintDescripttion(){}





