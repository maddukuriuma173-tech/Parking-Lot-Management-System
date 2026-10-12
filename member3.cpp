#include "parking.h"

// Search vehicle
void searchVehicle()
{
    string reg;

    cout << "\nEnter Registration Number: ";
    cin >> reg;

    for (auto &v : vehicles)
    {
        if (v.regNo == reg)
        {
            cout << "\nVehicle Found!\n";
            cout << "Registration Number: " << v.regNo << endl;
            cout << "Owner: " << v.owner << endl;
            cout << "Type: " << v.type << endl;

            cout << "Slot: R"
                 << v.row + 1
                 << " C"
                 << v.col + 1
                 << endl;

            return;
        }
    }

    cout << "Vehicle not found!\n";
}


// Display all records
void records()
{
    if (vehicles.empty())
    {
        cout << "\nNo vehicles parked.\n";
        return;
    }

    cout << "\n===== PARKING RECORDS =====\n";

    for (auto &v : vehicles)
    {
        cout << "Registration: " << v.regNo
             << " | Owner: " << v.owner
             << " | Type: " << v.type
             << " | Slot: R"
             << v.row + 1
             << " C"
             << v.col + 1
             << endl;
    }
}