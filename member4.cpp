#include "parking.h"

// Calculate parking fee
void fee()
{
    string reg;
    int hours;

    cout << "\nRegistration Number: ";
    cin >> reg;

    cout << "Parking Hours: ";
    cin >> hours;

    for (auto &v : vehicles)
    {
        if (v.regNo == reg)
        {
            int totalFee = hours * 30;

            cout << "Parking Fee: Rs."
                 << totalFee << endl;

            return;
        }
    }

    cout << "Vehicle not found!\n";
}