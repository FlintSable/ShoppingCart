#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


int main(){
    ItemToPurchase newItem1;
    ItemToPurchase newItem2;

    cout << "TOTAL COST" << endl;
    cout << newItem1.GetName() 
            << " " << newItem1.GetQuantity() 
            << " @ $" << newItem1.GetPrice() 
            << " = $" << newItem1.GetPrice() * newItem1.GetQuantity() << endl;

    cout << newItem2.GetName() 
            << " " << newItem2.GetQuantity() 
            << " @ $" << newItem2.GetPrice() 
            << " = $" << newItem2.GetPrice() * newItem2.GetQuantity() << endl; 
    
    cout << "\n";
    cout << "Total: $" 
        << (newItem1.GetPrice() * newItem1.GetQuantity()) + (newItem2.GetPrice() * newItem2.GetQuantity()) 
        << endl;

}