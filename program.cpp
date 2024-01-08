#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int random = (rand() % 3) + 1;
    string choosed;
    string rps[4] = {" ", "rock", "paper", "scissors"};
    int choosedNum;

    cout << "Choose by number :" << endl
         << "1.Rock   2.Paper   3.Scissors" << endl;
    cin >> choosedNum;
    for (int i = 1; i < 4; i++)
    {
        if (choosedNum != i)
        {
            continue;
        }
        else
        {
            choosed = rps[i];
        }
    }
    cout << choosed;
}