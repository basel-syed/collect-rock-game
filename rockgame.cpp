/* Rock collecting game
    Objective: Play against the computer, and collect rocks. Whoever is the last
    to collect rocks is the loser
    
    By: Basel Syed
 */

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(0));
    int numberOfRocks = (rand() % 100) + 1;
    string name;
    bool playerTurn = true;
    cout << "Welcome to the rock collecting game, what is your name?" << endl;
    cin >> name;
    while(numberOfRocks != 0){
        cout << "\n----------There are now " << numberOfRocks << "----------" << endl; 
        int numberOfCollectable = ceil(numberOfRocks / 2.0);
        if(playerTurn){
            int userRocks = 0;
            while (userRocks > numberOfCollectable || userRocks == 0)
            {
                cout << name << " it is now your turn, you can collect upto " << numberOfCollectable << " rocks\nHow many will you collect?";
                cin >> userRocks;
            }
            numberOfRocks -= userRocks;
            playerTurn = false;
        }
        else if(!playerTurn){
            int computerRocks = (rand() % numberOfCollectable) + 1;
            cout << "The computer took "<< computerRocks << " rocks"<< endl;
            numberOfRocks -= computerRocks;
            playerTurn = true;
        }
            
        }
    if (playerTurn){
        cout << "*********** WINNER " << name << "***********" << endl;
    }
    else{
        cout << "*********** WINNNER COMPUTER***********" << endl;
    }
    }
