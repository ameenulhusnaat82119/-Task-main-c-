#include<iostream>
using namespace std;
int main()
{
    int mainChoice, subChoice, qty;
    float totalBill = 0.0;
    string again;
    do
    {
    cout << "====Hotel Menu=====" << endl;
    cout << "1. Breakfast" << endl;
    cout << "2. Lunch" << endl;
    cout << "3. Dinner" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> mainChoice;

    if(mainChoice >= 1 && mainChoice <= 3) 
    {
        if(mainChoice == 1)
        {
            cout<<"1. Anda Paratha  (Rs. 40/plate)"<<endl;
            cout<<"2. Naan Channy   (Rs. 60/Plate)"<<endl;
            cout<<"3. Siri Pay      (Rs. 150/Plate)"<<endl;
            cout<<"4. Tea           (Rs. 15/Cup)"<<endl;
            cout<<"Enter Your choice: ";
            cin>>subChoice;
            cout<<"Enter Quantity:  (KG/plates/cup)";
            cin>>qty;
            if(subChoice == 1)
            totalBill += 40 * qty;
            else if(subChoice == 2)
            totalBill += 60 * qty;
            else if(subChoice == 3)
            totalBill += 150 * qty;
            else if(subChoice == 4)
            totalBill += 15 * qty;
            else
            cout<<"You choose invalid Breakfast item\n";
        }
        else if(mainChoice == 2)
        {
            cout<<"1. Chicken Karahi   (Rs. 1050/KG)"<<endl;
            cout<<"2. Muttun Karahi    (Rs. 1800/KG)"<<endl;
            cout<<"3. Egg Fried Rice   (Rs. 450/plate)"<<endl;
            cout<<"4. BBQ              (Rs. 1050/dozen)"<<endl;
            cout<<"Enter your choice: ";
            cin>>subChoice;
            cout<<"Enter Quantity:  (KG/plate/dozen)"<<endl;
            cin>>qty;
            if(subChoice == 1)
            totalBill += 1050 * qty;
            else if(subChoice == 2)
            totalBill += 1800 * qty;
            else if(subChoice == 3)
            totalBill += 450 * qty;
            else if(subChoice == 4)
            totalBill += 1050 * qty;
            else
            cout<<"You choose invalid Lunch item\n";
        }
        else if(mainChoice == 3)
        {
            cout<<"1. Chicken Karahi   (Rs. 1050/KG)"<<endl;
            cout<<"2. Muttun Karahi    (Rs. 1800/KG)"<<endl;
            cout<<"3. Egg Fried Rice   (Rs. 450/plate)"<<endl;
            cout<<"4. BBQ              (Rs. 1050/dozen)"<<endl;
            cout<<"5. Saji              (Rs. 2500/KG)"<<endl;
            cout<<"Enter your choice: ";
            cin>>subChoice;
            cout<<"Enter Quantity:  (KG/plate/dozen)"<<endl;
            cin>>qty;
            if(subChoice == 1)
            totalBill += 1050 * qty;
            else if(subChoice == 2)
            totalBill += 1800 * qty;
            else if(subChoice == 3)
            totalBill += 450 * qty;
            else if(subChoice == 4)
            totalBill += 1050 * qty;
            else if(subChoice == 5)
            totalBill += 2500 * qty;
            else
            cout<<"You choose invalid Dinner item\n";
        }
    }
    else            
        cout<<"You choose invalid main menu item\n";        
        cout<<"Your total bill is: Rs. "<<totalBill<<endl;
        cout<<"Do you want to order again? (yes/no): ";
        cin>>again;
    } while(again == "yes" || again == "Yes");
    return 0;
}
     
