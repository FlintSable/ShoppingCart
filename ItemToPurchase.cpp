#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// constructor/ deconstructor
ItemToPurchase::ItemToPurchase(string iName, string iDescript, int iPrice, int iQuant){
    itemName = iName;
    itemDescription = iDescript;
    itemPrice = iPrice;
    itemQuantity = iQuant;

}

ItemToPurchase::~ItemToPurchase(){}

// Mutators
void ItemToPurchase::SetName(string itemDescription){
    itemName = itemDescription;
}

void ItemToPurchase::SetPrice(int itemCost){
    itemPrice = itemCost;
}

void ItemToPurchase::SetQuantity(int itemQuant){
    itemQuantity = itemQuant;
}

void ItemToPurchase::SetDescription(string iDescript){
    itemDescription = iDescript;
}

// Accessors
string ItemToPurchase::GetName() const{
    return itemName;
}

int ItemToPurchase::GetPrice() const{
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const{
    return itemQuantity;
}

string ItemToPurchase::GetDescription() const{
    return itemDescription;
}

// Helper
void ItemToPurchase::PrintItemCost() const{
    cout << itemName << " " 
            << itemQuantity << " @ $"
            << itemPrice << " = $"
            << itemQuantity * itemPrice << "\n";
}

void ItemToPurchase::PrintItemDescription() const{
    cout << itemName << ": "
            << itemDescription << "\n";
}