#include "parking.h"

int main()
{
    int choice;

    do
    {
        cout << "\n===== PARKING LOT MANAGEMENT =====\n";
        cout << "1. Display Layout\n";
        cout << "2. Park Vehicle\n";
        cout << "3. Remove Vehicle\n";
        cout << "4. Search Vehicle\n";
        cout << "5. Calculate Fee\n";
        cout << "6. Count Available Slots\n";
        cout << "7. Display Records\n";
        cout << "8. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                display();
                break;

            case 2:
                park();
                break;

            case 3:
                removeVehicle();
                break;

            case 4:
                searchVehicle();
                break;

            case 5:
                fee();
                break;

            case 6:
                countSlots();
                break;

            case 7:
                records();
                break;

            case 8:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}