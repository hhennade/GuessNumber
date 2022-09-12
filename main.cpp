#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int counter = 0;

int game(int maxnum)
{
    int user_input;
    int min = 1;
    srand(time(0));
    int random_number = rand() % maxnum + min;
    do{
        counter ++;
        cout << "Guess the number between 1-40" << endl;
        cin >> user_input;
    if (random_number > user_input)
        cout << "Number is bigger" <<endl;
    else if (random_number < user_input)
        cout << "Number is smaller" <<endl;
    else
        cout << "Number is correct" << endl;
    }
    while (user_input!=random_number);
    return (counter);
}

int main()
{
    int maxnum = 40;
    counter = game(maxnum);
    cout << "Tries = " << counter <<endl;
}
