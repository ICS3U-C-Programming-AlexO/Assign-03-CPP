// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : November 9, 2026
// This program is a choose your adventure story
// that asks the user for at least 2 different inputs
// and provides the user with 4 different outcomes.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Intro
    cout << "Welcome to the Mysterious Island Adventure!" << endl;
    cout << "You wake up on a lonely beach. The jungle is ahead of you." << endl;
    cout << "Do you want to go 'left' toward the rocky cliffs or 'right' towards the dense trees?" << endl;

    // First input prompt for user
    string choice1;
    cout << "Type 'left' or 'right': ";
    cin >> choice1;

    if (choice1 == "left") {
        cout << "\nYou walk toward the rocky cliffs and find a dark cave." << endl;
        cout << "Do you want to 'enter' the cave or 'walk' past it?" << endl;

        // Second input prompt for user
        string choice2;
        cout << "Type 'enter' or 'walk': ";
        cin >> choice2;

        if (choice2 == "enter") {
            cout << "\nOutcome 1: You find a hidden pirate treasure chest! You win!" << endl;

        } else if (choice2 == "walk") {
            cout << "\nOutcome 2: You walk past the cave, slip on loose rocks, and fall, crashing down back onto the beach. You are trapped." << endl;

        } else {
            cout << "\nInvalid choice."
            "You wander around aimlessly and get lost. Game over." << endl;
        }
    }

    else if (choice1 == "right") {
        cout << "\nYou walk into the jungle and hear a loud rustling sound." << endl;
        cout << "Do you want to 'hide' behind a bush or 'investigate' the sound?" << endl;

        // Third input prompt for user
        string choice2;
        cout << "Type 'hide' or 'investigate': ";
        cin >> choice2;

        if (choice2 == "hide") {
            cout << "\nOutcome 3: A friendly villager finds you and takes you back to safety. You escaped!" << endl;

        } else if (choice2 == "investigate") {
            cout << "\nOutcome 4: It is a wild monkey that steals your shoes and runs away, leaving you stranded. Game over!" << endl;

        } else {
            cout << "\nInvalid choice. You freeze in place and are swallowed by the forest after sunset. Game over." << endl;
        }
    }

    else {
        cout << "\nInvalid direction. You stay on the beach forever and your story is over before it could even start. Game over." << endl;
    }
}
