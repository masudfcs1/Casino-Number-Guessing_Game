#include<bits/stdc++.h>

using namespace std;

void drawline(int n, char symbol);
void rules();

int main()
{
    string playername;
    int amount;            //hold player's balance game
    int betting_amount;
    int guess;
    int dice;              //hold computer generated number
    char choice;

    srand(time(0));

    drawline(45,'_');
    cout<<"\n\n\n\t\t CASINO GAME\n\n\n\n";
    drawline(45,'_');

    cout<<"\n\nEnter Your Name : ";
    getline(cin,playername);

    cout<<"\n\nEnter Deposit amount to play game :$";
    cin>>amount;


    do
    {
        system("cls");
        rules();
        cout<<"\n\nYour Current balance is $ "<<amount<<"\n";

                  //Get player's betting amount

        do
        {
            cout<<playername<<", enter money to bet :$";
            cin>>betting_amount;
            if(betting_amount>amount)
                cout<<"Your betting amount is more than your current balance\n"
                         <<"\nRe-enter data\n";
        }
        while(betting_amount>amount);
               //Get player's number



    }



}

