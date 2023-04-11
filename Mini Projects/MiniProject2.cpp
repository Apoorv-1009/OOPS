#include <iostream>  // Needed for standard input output
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <string> // Needed for string operations
using namespace std;

class operations
{
    public:
        string name;
        int balance;

        void get_name()
        {
            cout << "\n Enter your name: ";
            cin >> name;
        }

        void get_balance()
        {
            cout << "\n Enter balance: ";
            cin >> balance;
        }

        void display_balance()
        {
            cout << "\n Current balance: ";
        }

        int update_balance(int bal, int bet, int update_rate)
        {
            return bal + bet*update_rate;
        }

        void welcome_statement()
        {
            cout<< "\n Casino Game created by: \n Apoorv Thapliyal \n Abhi Veda \n Saahil Arya \n Abhaya Shukla \n Anirudh Raghunath \n";
        }

        void thankyou_statement()
        {
            cout << "\n Thank you for playing " << name << "!";
            cout << "\n Your final balance is: " << balance << "\n";
        }

        void offer_choices()
        {
            cout << "\n Which game would you like to play?";
            cout << "\n 1) Guess the number";
            cout << "\n 2) BlackJack";
            cout << "\n 3) Exit";
            cout << "\n Enter your choice: ";
        }

        int get_bettingAmount(int balance)
        {
            int bettingAmount;
            do
            {
                cout << "Enter amount to bet: ";
                cin >> bettingAmount;
                if(bettingAmount > balance)
                    cout << "Betting balance can't be more than current balance!\n"
                        <<"\nRe-enter balance\n ";
            }while(bettingAmount > balance);
            return bettingAmount;
        }

        int get_playerguess(int balance)
        {
            int guess;
            do
            {
                cout << "Guess any betting number between 1 & 10 :";
                cin >> guess;
                if(guess <= 0 || guess > 10)
                    cout << "\n Incorrect input, Re-enter number:\n ";
            }while(guess <= 0 || guess > 10);
            return guess;
        }


};


// Inherit class operations publically
class GuessTheNumber: public operations
{
    public:
    int bettingAmount;
    int guess;
    int dice; // stores the random number

    int randnum(int n)
    {   
        // Returns random number between 0 to n
        return rand()%n + 1;
    }

    int GTN(int balance)
    {
        cout << "\n*****************************************\n";
        cout << "      WELCOME TO GUESS THE NUMBER";
        cout << "\n\n\n";

        // Get betting amount
        bettingAmount = get_bettingAmount(balance);

        // Get player guess
        guess = get_playerguess(balance);
        dice = randnum(10);

        // Compare the guesses
        if(guess == dice)
        {
            cout << "\n Congratulations! You have guessed correctly.";
            balance = update_balance(balance, bettingAmount, 1);
        }
        else 
        {
            cout << "\n Oops! Wrong guess";
            cout << "\n You have lost: " << bettingAmount;
            balance = update_balance(balance, bettingAmount, -1);
        }
        cout << "\n Correct number was: " << dice;
        cout << "\n Current balance is: " << balance;
        cout << "\n****************************************";
        cout << "\n\n\n";

        return balance;
    }
};

class BlackJack: public GuessTheNumber
{
    public:
    int BLJK(int balance)
    {
        int CardValue = 0;
        int DealerCard;
        char choice;

        cout << "\n*****************************************\n";
        cout << "      WELCOME TO BLACK JACK";
        cout << "\n\n\n";

        bettingAmount = get_bettingAmount(balance);

        // Get players card value
        cout << "\n Your current Card Value is: " << CardValue << "\n";
        do
        {
            cout << "\n Dealer played a card...";
            DealerCard = randnum(7);
            cout << "\n Dealer played card with value: " << DealerCard;
            CardValue += DealerCard;
            cout << "\n Your current Card Value is: " << CardValue;

            if(CardValue > 21)
            {
                cout << "\n Oops! Card Value exceeded 21";
                cout << "\n You have lost: " << bettingAmount;
                balance = update_balance(balance, bettingAmount, -1);
                choice = 'n';
            }
            else
            {
                cout << "\n Would you like to receive a card?(y/n): ";
                cin >> choice;
            }
            cout << "\n";
        } while (choice != 'n');

        if(CardValue <= 21)
        {
            cout << "\n Finally, dealer chooses a card...";
            DealerCard = randnum(21);
            cout << "\n Dealer is played with card value: " << DealerCard;

            if(CardValue > DealerCard)
            {
                cout << "\n Congratulations! You have won against the dealer";
                cout << "\n You have won: " << 2*bettingAmount;
                balance = update_balance(balance, bettingAmount, 2);
            }
        }
        cout << "\n Current balance is: " << balance;
        cout << "\n****************************************";
        cout << "\n\n\n";

        return balance;
    }
};

int main()
{
    operations ops;
    GuessTheNumber gtn;
    BlackJack bljk;

    int choice = 1;

    ops.welcome_statement();
    ops.get_name();
    ops.get_balance();

    do 
    {
        restart:
        try
        {
            ops.offer_choices();
            cin >> choice;

            if(choice > 3 || choice < 1)
                throw choice;
        }

        catch (int choice)
        {
            cout << "\n Error! Enter only given choices \n";
            goto restart;
        }

        switch(choice)
        {
            case 1: ops.balance = gtn.GTN(ops.balance);
                    break;

            case 2: ops.balance = bljk.BLJK(ops.balance);
                    break;
        }

        if(ops.balance == 0)
        {
            cout << "\n\n Oops! You have run out of balance";
            cout << "\n Game will finish now.";
            choice = 3;
        }

    }while(choice != 3);

    ops.thankyou_statement();

    return 0;

}