#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess = 0;

   


    while (guess != secretNumber) {
        cout << "Guess the number 1-100 : "; //<<secretNumber;
        cin >> guess;


        if (guess > secretNumber)
        {
            cout << "number is to high:\n ";
            

        }
        else if (guess == secretNumber)
        {
            cout << "Guess is right\n";
        }
        else
        {
            cout << "number is to low:\n ";

        }
    }
    return 0;
}
