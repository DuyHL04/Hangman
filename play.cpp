#include "play.h"

using namespace std;


void play()
{
    system("cls");
    srand(time(0));
    string word = chooseWord();
    string guessed = string (word.length(),'-');
    int tries = 7;

    do{
            render(guessed,tries);
    char guess = readAGuess();
    if (contains(word,guess))
        guessed = update(guessed, word, guess);
    else tries--;

    } while (tries > 0 && word != guessed);

    render(guessed,tries);
    if (tries > 0){
        cout << endl;
			cout <<" ----------------- " << endl;
			cout <<"|     You won!     |"<< endl;
			cout <<" ----------------- " << endl;
    }
    else {
            cout << endl;
			cout <<" ----------------- " << endl;
			cout <<"|     You lost!    |"<< endl;
			cout <<" ----------------- " << endl;
			cout << "The correct word is " << word << endl << endl;
    }
    cout << "Press any key to go back menu." << endl;
    getch();
}


