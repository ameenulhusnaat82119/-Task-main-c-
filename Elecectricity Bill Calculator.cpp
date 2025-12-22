#include<iostream> 
using namespace std;
int main()
{
    int vltg, units, Charges;
    string DueDate = "27-Oct-2025";
    string PayBillDate = "30-Oct-2025";
    float Bill_Amount, Total_Bill, perUnitCost, Amount_Surcharge;
    const float taxRate = 0.05, Surcharge_per_later = 0.010; // 5% tax   

    cout << "Enter the Voltage Category (in volts): ";
    cin >> vltg;
    cout << "Enter the Number of units consumed: ";
    cin >> units;
    if(vltg < 100)
        perUnitCost = 1.20;
    else if(vltg >= 100 && vltg <= 300)
        perUnitCost = 2.00;
    else
        perUnitCost = 3.00;
    Bill_Amount = units * perUnitCost;
    if(Bill_Amount > 400)
    {
        Charges = Bill_Amount * 0.15; // 15% surcharge
    }
    else
    {
        Charges = 0;
    }
    cout<<"Enter Date of Paying Bill: ";
    getline(cin, PayBillDate);
    if(PayBillDate != DueDate)
    {
        Amount_Surcharge = Bill_Amount + Surcharge_per_later;
    }
    else
    {
        Amount_Surcharge = Bill_Amount + 0;
    }
    Total_Bill = Amount_Surcharge + Charges + (Bill_Amount * taxRate);
    cout<<"\n******************************************************";
    cout<<"\n====Azad Jammu & Kashmir Electricity Department====";
    cout<<"\n        Electricity Consumer Bill                  ";
    cout<<"\nName: Ameen UL Husnaat";
    cout<<"\nAddress: Ward no. 18 Cella Bandi MZD";
    cout<<"\nDivision: Muzaffarabad";
    cout<<"\nSUB DIVISION: CITY-2  ZONE : CD4";
    cout<<"\n700109-City-4";
    cout<<"\nBILL MONTH: 01 OCT 2025";
    cout<<"\nREADING DATE: 01 OCT 2025";
    cout<<"\nISSUE DATE: 01 OCT 2025";
    cout<<"\nDUE DATE: 27 OCT 2025";
    cout<<"\n**********************************************************";
    cout<<"\nVoltage: "<<vltg;
    cout<<"\nUnits: "<<units;
    cout<<"\nBill_Amount: "<<Bill_Amount;
    cout<<"\nAmount_Surcharge: "<<Amount_Surcharge;
    cout<<"\nCharges: "<<Charges;
    cout<<"\nTotal_Bill: "<<Total_Bill;
    cout<<"\n**********************************************************";

    
    
}