#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


int main(){
    ItemToPurchase newItem1;
    ItemToPurchase newItem2;
    string n1;
    string n2;
    int p1;
    int p2;
    int q1;
    int q2;

    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    // cin >> n1;
    getline(cin, n1);
    newItem1.SetName(n1);
    // cin.ignore();

    cout << "Enter the item price:" << endl;
    cin >> p1;
    newItem1.SetPrice(p1);
    // cin.ignore();

    cout << "Enter the item quantity:" << endl;
    cin >> q1;
    newItem1.SetQuantity(q1);

    cin.ignore();
    cout << "\n";
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, n2);
    newItem2.SetName(n2);

    cout << "Enter the item price:" << endl;
    cin >> p2;
    newItem2.SetPrice(p2);
    cin.ignore();

    cout << "Enter the item quantity:" << endl;
    cin >> q2;
    newItem2.SetQuantity(q2);
    cout << "\n";

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