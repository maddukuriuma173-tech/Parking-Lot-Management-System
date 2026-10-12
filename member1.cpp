#include "parking.h"

// Display parking layout
void display()
{
    cout << "\nParking Layout:\n";

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (parking[i][j] == 0)
                cout << "[A] ";
            else
                cout << "[X] ";
        }

        cout << endl;
    }

    cout << "A = Available, X = Occupied\n";
}


// Count available slots
void countSlots()
{
    int count = 0;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (parking[i][j] == 0)
                count++;
        }
    }

    cout << "\nAvailable Slots: " << count << endl;
}