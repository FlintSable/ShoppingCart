#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// constructor/ deconstructor
ItemToPurchase::ItemToPurchase(){
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::~ItemToPurchase(){}

void ItemToPurchase::SetName(string itemDescription){
    itemName = itemDescription;
}

void ItemToPurchase::SetPrice(int itemCost){
    itemPrice = itemCost;
}

void ItemToPurchase::SetQuantity(int itemQuant){
    itemQuantity = itemQuant;
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