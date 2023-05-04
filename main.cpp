#include "play.h"
#include "menu.h"

using namespace std;

int main()
{
    do{
    menu();
    char op = getch();
    if (op == '1') play();
    else if (op == '2') instruction();
    else if (op == '3') exit(0);

    }
    while(1);
    return 0;
}


