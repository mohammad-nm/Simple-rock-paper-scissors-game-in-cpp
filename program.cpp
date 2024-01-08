#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int cScore;
int hScore;
int main()
{
    while (true)
    {
        if (hScore == 3)
        {
            cout << "You win the game congratulations!!!";
            break;
        }
        else if (cScore == 3)
        {
            cout << "I Won the game!!!";
            break;
        }

        srand(time(NULL));                // to make new seeds
        int randomNum = (rand() % 3) + 1; // a random number bitween 1, 2, 3.
        string randomChoosed;
        string choosed;

        string rps[4] = {" ", "rock", "paper", "scissors"};
        int choosedNum;
        for (int i = 1; i < 4; i++) // recognizing what computer choice is and saving it into randomChoosed.
        {
            if (randomNum != i)
            {
                continue;
            }
            else
            {
                randomChoosed = rps[i];
            }
        }
        cout << "Choose by number :" << endl
             << "1.Rock   2.Paper   3.Scissors" << endl;
        cin >> choosedNum;
        for (int i = 1; i < 4; i++) // recognizing what human choice is adn saving it into choossed.
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
        // cout << choosed << endl;
        // cout << randomNum << endl;
        // cout << randomChoosed << endl;
        if (choosed == rps[1]) // rock
        {
            if (randomChoosed == rps[1])
            {
                cout << "Your ROCK  vs  My ROCK!!!" << endl
                     << "Draw!" << endl;
            }
            else if (randomChoosed == rps[2])
            {
                cout << "Your ROCK  vs  My PAPER!!!" << endl
                     << "I win! :)" << endl;
                cScore++;
            }
            else if (randomChoosed == rps[3])
            {
                cout << "Your ROCK  vs  My CSISSORS!!!" << endl
                     << "You win! :(" << endl;
                hScore++;
            }
        }
        else if (choosed == rps[2]) // paper
        {
            if (randomChoosed == rps[1]) // rock
            {
                cout << "Your PAPER  vs  My ROCK!!!" << endl
                     << "You win! :(" << endl;
                hScore++;
            }
            else if (randomChoosed == rps[2]) // paper
            {
                cout << "Your PAPER  vs  My PAPER!!!" << endl
                     << "Draw!" << endl;
            }
            else if (randomChoosed == rps[3]) // scissors
            {
                cout << "Your PAPER  vs  My CSISSORS!!!" << endl
                     << "I win! :)" << endl;
                cScore++;
            }
        }
        else if (choosed == rps[3]) // csissors
        {
            if (randomChoosed == rps[1]) // rock
            {
                cout << "Your CSISSORS  vs  My ROCK!!!" << endl
                     << "I win! :)" << endl;
                cScore++;
            }
            else if (randomChoosed == rps[2]) // paper
            {
                cout << "Your CSISSORS  vs  My PAPER!!!" << endl
                     << "You win! :(" << endl;
                hScore++;
            }
            else if (randomChoosed == rps[3]) // scissors
            {
                cout << "Your CSISSORS  vs  My CSISSORS!!!" << endl
                     << "Draw!" << endl;
            }
        }
        cout << "Your score: " << hScore << endl;
        cout << "My score: " << cScore << endl;
    }
}