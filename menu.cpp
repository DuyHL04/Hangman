#include "menu.h"

using namespace std;


void menu()
{
    system("cls");
    cout << "1.Start Game." << endl;
    cout << "2.Instruction." << endl;
    cout << "3.Exit." << endl;
    cout << "Select your option: " << endl;
}
void instruction()
{
    system("cls");
    cout << "Instruction" << endl << endl;
    cout << "Guess the letters in the secret word to solve the puzzle." << endl;
    cout << "You can guess a letter by typing it on the keyboard." << endl;
    cout << "If you guess wrong, a part of the hanging figure will be drawn." << endl;
    cout << "The condition to win is that you must guess the secret word before the hanging man figure is completed." << endl;
    cout << "Good luck!" << endl << endl;
    cout << "Press any key to go back menu" << endl;

    getch();
}

