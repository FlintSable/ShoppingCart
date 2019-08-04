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
    int cartQuantTotal = 0;
    for(int k = 0; k < cartItems.size(); k++){
        cartQuantTotal += cartItems[k].GetQuantity();
    }
    return cartQuantTotal;
}

int ShoppingCart::GetCostOfCart() const{
    int cartTotal = 0;
    for(int i = 0; i < cartItems.size(); i++){
        cartTotal += (cartItems[i].GetPrice() * cartItems[i].GetQuantity());
    }
    return cartTotal;
}

// Mutators
void ShoppingCart::AddItem(ItemToPurchase newItem){
    cartItems.push_back(newItem);
}
void ShoppingCart::RemoveItem(string removeItem){
    int hitCount = 0;
    for(int i = 0; i < cartItems.size(); i++){
        // cout << (cartItems[i].GetName() == removeItem) << endl;
        if(cartItems[i].GetName() == removeItem){
            hitCount++;
            cartItems.erase(cartItems.begin( ) + i);
        } 
    }
    if(cartItems.size() == 0 || hitCount == 0){
        cout << "Item not found in cart. Nothing removed.\n";
    }

}
void ShoppingCart::ModifyItem(ItemToPurchase modifyItem){
    int hitCount = 0;
    for(int i = 0; i < cartItems.size(); i++){
        if(cartItems[i].GetName() == modifyItem.GetName()){
            hitCount++;
            cartItems[i].SetQuantity(modifyItem.GetQuantity());
        }
    }
    if(cartItems.size() == 0 || hitCount == 0){
        cout << "Item not found in cart. Nothing modified.\n";
    }
}




// Helper
void ShoppingCart::PrintTotal(){
    int cartTotalPrice  = 0;
    cout << customerName 
            << "'s Shopping Cart - "
            << currentDate << "\n"
            << "Number of Items: " << GetNumItemsInCart()
            << "\n\n";
    if(cartItems.size() == 0){
        cout << "SHOPPING CART IS EMPTY\n";
    }

    for(int j = 0; j < cartItems.size(); j++){
        cartTotalPrice += (cartItems[j].GetPrice() * cartItems[j].GetQuantity());
        cout << cartItems[j].GetName() << " "
                << cartItems[j].GetQuantity()
                << " @ $" << cartItems[j].GetPrice() 
                << " = $" << cartItems[j].GetQuantity() * cartItems[j].GetPrice()
                << "\n";
    }
    cout << "\n";
    cout << "Total: $" << cartTotalPrice << "\n";
}
void ShoppingCart::PrintDescription(){
    cout << customerName 
            << "'s Shopping Cart - "
            << currentDate << "\n"
            << "\n";
    cout << "Item Descriptions\n";

    for(int j = 0; j < cartItems.size(); j++){
        cout << cartItems[j].GetName() << ": "
                << cartItems[j].GetDescription()
                << "\n";
    }
}



