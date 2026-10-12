#include "parking.h"

// Park vehicle
void park()
{
    Vehicle v;

    cout << "\nRegistration Number: ";
    cin >> v.regNo;

    // Check duplicate registration number
    for (auto &x : vehicles)
    {
        if (x.regNo == v.regNo)
        {
            cout << "Vehicle already parked!\n";
            return;
        }
    }

    cout << "Owner Name: ";
    cin >> v.owner;

    cout << "Vehicle Type: ";
    cin >> v.type;

    cout << "Enter Row (1-" << R << "): ";
    cin >> v.row;

    cout << "Enter Column (1-" << C << "): ";
    cin >> v.col;

    // Convert to array index
    v.row--;
    v.col--;

    // Check valid slot
    if (v.row < 0 || v.row >= R ||
        v.col < 0 || v.col >= C)
    {
        cout << "Invalid slot!\n";
        return;
    }

    // Check whether slot is occupied
    if (parking[v.row][v.col] == 1)
    {
        cout << "Slot already occupied!\n";
        return;
    }

    parking[v.row][v.col] = 1;

    vehicles.push_back(v);

    cout << "Vehicle parked successfully!\n";
}


// Remove vehicle
void removeVehicle()
{
    string reg;

    cout << "\nEnter Registration Number: ";
    cin >> reg;

    for (int i = 0; i < (int)vehicles.size(); i++)
    {
        if (vehicles[i].regNo == reg)
        {
            // Make slot available
            parking[vehicles[i].row][vehicles[i].col] = 0;

            vehicles.erase(vehicles.begin() + i);

            cout << "Vehicle removed successfully!\n";
            return;
        }
    }

    cout << "Vehicle not found!\n";
}