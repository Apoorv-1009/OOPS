#include <iostream>  // Needed for standard input output
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
using namespace std;
void rules();

class Generator
{
    public:
        int balance, var;
        
        Generator()
        {
            cout << "\n\t\t========WELCOME TO CASINO WORLD=======";
        }
        void display()
        {   
            cout<< "\n Created by: \n Apoorv Thapliyal \n Abhi Veda \n Saahil Arya \n Abhaya Shukla \n Anirudh Raghunath";
        }
        ~Generator()
        {
            cout << "\n Thank you for playing this game, we hope you thoroughly enjoyed! \n Your balance is $ " << balance;
        }
};

class player_info
{
    private:
        int *update_rate = new int(10);
    public: 
        int balance; // stores player's balance
        int bettingAmount;
        int guess;
        int dice; // stores the random number
        char choice;
        char add;
        
        friend void display_all(player_info); //friend function INIT

        player_info operator + (Generator const &obj)
        {
            player_info p;
            p.balance += obj.balance;
            return p;
        }

        // Function Overloading     
        int update(int val, int a)
        {
            val = val + *update_rate*bettingAmount;
            //Demonstration of THIS pointer
            cout << "\n\nYou are in luck!! You have won Rs." << this->bettingAmount * 10;   
            return val;
        }
        
        // Function Overloading
        int update(int *val, float a)
        {
            *val -= bettingAmount;
            return *val;
        }
};

// friend function- displays all members
void display_all(player_info p1)
{
     cout << "\nPlayer details: ";
     cout << "\nBalance: " << p1.balance;
     cout << "\nBetting Amount: " << p1.bettingAmount;
}

int main()
{
    Generator g;
    player_info p;
    p.balance = 0;
    string playerName;
    srand(time(0)); // "Seed" the random generator
    g.display();
    cout << "\n\nWhat's your Name : ";
    getline(cin, playerName);
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> g.balance;
    
    // Operator Overloading
    p.balance = p.balance + g.balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << p.balance << "\n";
// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName <<", enter amount to bet : $";
            cin >> p.bettingAmount;
            if(p.bettingAmount > p.balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(p.bettingAmount > p.balance);
// Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> p.guess;
            if(p.guess <= 0 || p.guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(p.guess <= 0 || p.guess > 10);
        p.dice = rand()%10 + 1;
        
        if(p.dice == p.guess)
            p.balance = p.update(p.balance, 1);

        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< p.bettingAmount <<"\n";
            p.balance = p.update(&p.balance, 1.0);
        }
        
        cout << "\nThe winning number was : " << p.dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << p.balance << "\n";
        if(p.balance == 0)
        {
            cout << "\n\nOops! Game Over";
            break;
        }
        
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> p.choice;
        
        // Operator Overloading
        if(p.choice == 'Y' || p.choice == 'y')
        {
            cout << "\n\n-->Do you want to add balance (y/n)? ";
            cin >> p.add;
            if(p.add == 'Y' || p.add == 'y')
            {
                cout << "\n-->Enter the balance to be added: ";
                cin >> g.balance;
                p.balance = p.balance + g.balance;
            }
        }
        
    }while(p.choice =='Y'|| p.choice=='y');
    // cout << "\n\n\n";
    g.balance = p.balance;

    // Use copy constructor to display player statistics 
    player_info cpy_p(p);
    cout << "\n ";

    display_all(cpy_p);
    
    return 0;
}

void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}