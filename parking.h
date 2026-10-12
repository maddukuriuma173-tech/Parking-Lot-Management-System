#ifndef PARKING_H
#define PARKING_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int R = 3;
const int C = 4;

struct Vehicle
{
    string regNo;
    string owner;
    string type;
    int row;
    int col;
};

// Shared data
extern int parking[R][C];
extern vector<Vehicle> vehicles;

// Member 1
void display();
void countSlots();

// Member 2
void park();
void removeVehicle();

// Member 3
void searchVehicle();
void records();

// Member 4
void fee();

#endif