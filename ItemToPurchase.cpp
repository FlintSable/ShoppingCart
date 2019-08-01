#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// constructor/ deconstructor
ItemToPurchase::ItemToPurchase(string iName, string iDescrip, int iPrice = 0, int iQuant = 0){
    itemName = iName;
    itemDescription = iDescrip;
    itemPrice = iPrice;
    itemQuantity = iQuant;
}

ItemToPurchase::~ItemToPurchase(){}

void ItemToPurchase::PrintItemCost(){
    cout << itemName << " "
            << itemQuantity << " @ $"
            << itemPrice << " = $"
            << itemPrice * itemQuantity;
}

void ItemToPurchase::PrintItemDescription(){
    cout << itemName << ": "
            << itemDescription << "\n";
}
void ItemToPurchase::SetName(string itemDescription){
    itemName = itemDescription;
}

void ItemToPurchase::SetPrice(int itemCost){
    itemPrice = itemCost;
}

void ItemToPurchase::SetQuantity(int itemQuant){
    itemQuantity = itemQuant;
}

void ItemToPurchase::SetDescription(string iDescrip){
    itemDescription = iDescrip;
}

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