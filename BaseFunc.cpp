
#include "BaseFunc.h"

using namespace std;



string chooseWord()
{
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}

void render(string guessed, int tries)
{
    system("cls");
    cout << DrawMan[tries] << endl;
    cout << guessed << endl;
    cout << "Number of attempts: " << tries << endl;

}

char readAGuess()
{
    char c;
    cout << "Your guess: " << endl;
    cin >> c;
    return c;

}

bool contains(string word, char c)
{
    return (word.find_first_of(c) != string::npos);
}
string update(string guessed, string word,char guess)
{
    for (int i = 0;i < word.length();i++){
        if (word[i] == guess) guessed[i] = guess;
    }
    return guessed;
}
