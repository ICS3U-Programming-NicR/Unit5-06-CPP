// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program figures out the mailing address

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>

using std::cin;
using std::cout;
using std::stof;
using std::stoi;
using std::string;

int decimalRound(float &number, int &place) {
    // rounds a decimal

    // process
    number = number * pow(10, place) + 0.5;
    number = static_cast<int>(number);
    number = number / pow(10, place);
}

int main() {
    // input the radius and height
    float numberFromUser;
    int placeFromUser;
    string numberString;
    string decimalString;

    // input
    while (true) {
        try {
            // input
            cout << "Enter a number, preferably one with decimals: ";
            cin >> numberString;
            numberFromUser = stof(numberString);
            cout << "Enter how many decimal places to round: ";
            cin >> decimalString;
            placeFromUser = stoi(decimalString);
            if (placeFromUser < 0) {
                cout << "Invalid input.\nTry again.\n" << std::endl;
            } else {
                decimalRound(numberFromUser, placeFromUser);
                break;
            }
        } catch (...) {
            cout << "\nInvalid input.\nTry again.\n" << "\n";
        }
    }

    // output
    cout << "The rounded number is " << numberFromUser << "\n";
}
