#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

char PrintMenu(ShoppingCart cartManip);

int main(){
    ItemToPurchase newItem1;
    ItemToPurchase newItem2;
    string customerName;
    string dateToday;
    

    cout << "Enter customer's name:" << "\n";
    getline(cin, customerName);
    cout << "Enter today's date:" << "\n\n";
    getline(cin, dateToday);
    ShoppingCart cart1(customerName, dateToday);

    cout << "Customer name: " << cart1.GetCustomerName() << "\n";
    cout << "Today's date: " << cart1.GetDate() << "\n\n";
    PrintMenu(cart1);
//     newItem1.SetName("Pot stickers");
//     newItem1.SetPrice(5.00);
//     newItem1.SetQuantity(3);
//     newItem1.SetDescription("savory vegi");
//     newItem2.SetPrice(6);
//     newItem2.SetQuantity(5);
//     cart1.AddItem(newItem1);
//     cart1.AddItem(newItem2);

//     cout << cart1.GetNumItemsInCart() << "\n";
//     cout << cart1.GetCostOfCart() << "\n";
//     cart1.PrintTotal();
//     cart1.PrintDescription();
        return 0;


}

char PrintMenu(ShoppingCart cartManip){
        char menuSelection = '\0';
        string tempItemName;
        string tempItemDescript;
        string tempRemove;
        string tempModify;
        int tempModifyQuant;
        int tempItemPrice;
        int tempItemQuant;

        while(menuSelection != 'q'){
                menuSelection = '\0';
                cout << "MENU\n"
                        << "a - Add item to cart\n"
                        << "d - Remove item from cart\n"
                        << "c - Change item quantity\n"
                        << "i - Output items' descriptions\n"
                        << "o - Output shopping cart\n"
                        << "q - Quit\n\n";
                        // << "Choose an option:"; 
                // cout << menuSelection << "\n";
                while(menuSelection != 'a' && 
                        menuSelection != 'd' &&
                        menuSelection != 'c' &&
                        menuSelection != 'i' &&
                        menuSelection != 'o' &&
                        menuSelection != 'q'){
                                cout << "Choose an option:\n";
                                cin >> menuSelection;
                }
                switch(menuSelection){
                        case 'a':
                                cin.ignore();
                                cout << "ADD ITEM TO CART\n";
                                cout << "Enter the item name:\n";
                                getline(cin, tempItemName);
                                cout << "Enter the item description:\n";
                                getline(cin, tempItemDescript);
                                cout << "Enter the item price:\n";
                                cin >> tempItemPrice;
                                cout << "Enter the item quantity:\n";
                                cin >> tempItemQuant;
                                cartManip.AddItem(ItemToPurchase(tempItemName, tempItemDescript, tempItemPrice, tempItemQuant));
                                cout << "\n";
                                break;
                        case 'd':
                                cin.ignore();
                                cout << "REMOVE ITEM FROM CART\n";
                                cout << "Enter name of item to remove:\n";
                                getline(cin, tempRemove);
                                cartManip.RemoveItem(tempRemove);
                                cout << "\n";

                                break;
                        case 'c':
                                cin.ignore();
                                cout << "CHANGE ITEM QUANTITY\n";
                                cout << "Enter the item name:\n";
                                getline(cin, tempModify);
                                cout << "Enter the new quantity:\n";
                                cin >> tempModifyQuant;
                                cartManip.ModifyItem(ItemToPurchase(tempModify, "none", 0, tempModifyQuant));
                                cout << "\n";
                                break;
                        case 'o':
                                cout << "OUTPUT SHOPPING CART\n";
                                cartManip.PrintTotal();
                                cout << "\n";
                                break;
                        case 'i':
                                cout << "OUTPUT ITEMS' DESCRIPTIONS\n";
                                cartManip.PrintDescription();
                                cout << "\n";
                                break;
                        case 'q':
                                break;
                        
                        

                }
        // cin.ignore();
        }
        return menuSelection;

}








