#include <iostream>
#include <vector>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
// constructor/ deconstructor
ShoppingCart::ShoppingCart(string cartName, string cartDate){
    customerName = cartName;
    currentDate = cartDate;
}

ShoppingCart::~ShoppingCart(){}

// Accessors
string ShoppingCart::GetCustomerName() const{
    return customerName;
}

string ShoppingCart::GetDate() const{
    return currentDate;
}

int ShoppingCart::GetNumItemsInCart() const{
    return 0;
}

int ShoppingCart::GetCostOfCart() const{
    return 0;
}

// Mutators
void ShoppingCart::AddItem(ItemToPurchase newItem){}
void ShoppingCart::RemoveItem(ItemToPurchase removeItem){}
void ShoppingCart::ModifyItem(ItemToPurchase modifyItem){}
void ShoppingCart::PrintTotal(){}
void ShoppingCart::PrintDescription(){}





