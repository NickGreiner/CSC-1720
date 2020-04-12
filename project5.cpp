//Program that implements a card guessing game

/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 11/27/19
Path: /home/students/ngreiner/csc1720/project5/
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <string>

using namespace std;

void menu(deque<string>& deckOfCards);
void create_deck(deque<string>& deckOfCards);
void deck_value(deque<string>& deckOfCards);
void deck_suit(deque<string>& deckOfCards);
void deck_both(deque<string>& deckOfCards);
void printDeck(deque<string>& deckOfCards);

int main()
{
    deque<string> deck1;

    create_deck(deck1);

    menu(deck1);

    return 0;
}

//Main menu function to re-call the menu when needed
void menu(deque<string>& deckOfCards)
{
    int selection;

    cout << "Do you want to: " << endl;
    cout << "[1] Guess the suit of the top card" << endl;
    cout << "[2] Guess the face value of the top card" << endl;
    cout << "[3] Guess both the face value and suit of the top card" << endl;
    cout << "[4] Print the top and bottom cards" << endl;
    cout << "[5] Shuffle deck" << endl;
    cout << "[6] Exit" << endl;
    cout << "Enter your selection (1-6): ";
    cin >> selection;
    cout << endl;

    if (selection == 1)
    {
        deck_suit(deckOfCards);
    }

    else if (selection == 2)
    {
        deck_value(deckOfCards);
    }

    else if (selection == 3)
    {
        deck_both(deckOfCards);
    }

    else if (selection == 4)
    {
        printDeck(deckOfCards);
    }

    else if (selection == 5)
    {
        random_shuffle(deckOfCards.begin(), deckOfCards.end());
        menu(deckOfCards);
    }

    else if (selection == 6)
    {
        abort();
    }

    else if (!cin)
    {
        cin.clear();
        cin.ignore();
        cout << "Invalid input, please try again." << endl;
        menu(deckOfCards);
    }

    else
    {
        cout << "Invalid input, please try again." << endl;
        menu(deckOfCards);
    }
}

//Create deck function to create the deck of cards
void create_deck(deque<string>& deckOfCards)
{
    string card;

    card = "ace of clubs";
    deckOfCards.push_back(card);

    for (int i = 2; i < 11; i++)
    {
        card = to_string(i) + " of clubs";
        deckOfCards.push_back(card);
    }

    card = "jack of clubs";
    deckOfCards.push_back(card);

    card = "queen of clubs";
    deckOfCards.push_back(card);

    card = "king of clubs";
    deckOfCards.push_back(card);

    card = "ace of diamonds";
    deckOfCards.push_back(card);

    for (int i = 2; i < 11; i++)
    {
        card = to_string(i) + " of diamonds";
        deckOfCards.push_back(card);
    }

    card = "jack of diamonds";
    deckOfCards.push_back(card);

    card = "queen of diamonds";
    deckOfCards.push_back(card);

    card = "king of diamonds";
    deckOfCards.push_back(card);

    card = "ace of hearts";
    deckOfCards.push_back(card);

    for (int i = 2; i < 11; i++)
    {
        card = to_string(i) + " of hearts";
        deckOfCards.push_back(card);
    }

    card = "jack of hearts";
    deckOfCards.push_back(card);

    card = "queen of hearts";
    deckOfCards.push_back(card);

    card = "king of hearts";
    deckOfCards.push_back(card);

    card = "ace of spades";
    deckOfCards.push_back(card);

    for (int i = 2; i < 11; i++)
    {
        card = to_string(i) + " of spades";
        deckOfCards.push_back(card);
    }

    card = "jack of spades";
    deckOfCards.push_back(card);

    card = "queen of spades";
    deckOfCards.push_back(card);

    card = "king of spades";
    deckOfCards.push_back(card);

    random_shuffle(deckOfCards.begin(), deckOfCards.end());
}

//Quiz function for guessing the value of the top card
void deck_value(deque<string>& deckOfCards)
{
    string guess;

    cout << "Enter your guess for the face value of the top card: ";
    cin >> guess;
    cout << endl;

    if ((guess == "1") || (guess == "Ace"))
        guess = "ace";

    if ((guess == "11") || (guess == "Jack"))
        guess = "jack";

    if ((guess == "13") || (guess == "Queen"))
        guess = "queen";

    if ((guess == "13") || (guess == "King"))
        guess = "king";

    string top = deckOfCards.front();

    if (top.find(guess) != string::npos)
    {
        char again;

        cout << "Correct! The card was a " << top << "." << endl;
        cout << "Do you want to play again? Y/N: ";
        cin >> again;
        cout << endl;

        if ((again == 'y') || (again == 'Y'))
            menu(deckOfCards);
    }

    else
    {
        cout << "Incorrect, try again." << endl;
        random_shuffle(deckOfCards.begin(), deckOfCards.end());
        deck_value(deckOfCards);
    }
}

//Quiz function for guessing the suit of the top card
void deck_suit(deque<string>& deckOfCards)
{
    string guess;

    cout << "Enter your guess for the suit of the top card: ";
    cin >> guess;
    cout << endl;

    string top = deckOfCards.front();

    if (top.find(guess) != string::npos)
    {
        char again;

        cout << "Correct! The card was a " << top << "." << endl;
        cout << "Do you want to play again? Y/N: ";
        cin >> again;
        cout << endl;

        if ((again == 'y') || (again == 'Y'))
            menu(deckOfCards);
    }

    else
    {
        cout << "Incorrect, try again." << endl;
        random_shuffle(deckOfCards.begin(), deckOfCards.end());
        deck_suit(deckOfCards);
    }
}

//Quiz function for guessing both the suit and the value of the top card
void deck_both(deque<string>& deckOfCards)
{
    string guessValue;
    string guessSuit;

    cout << "Enter your guess for the face value of the top card: ";
    cin >> guessValue;
    cout << endl;

    if ((guessValue == "1") || (guessValue == "Ace"))
        guessValue = "ace";

    if ((guessValue == "11") || (guessValue == "Jack"))
        guessValue = "jack";

    if ((guessValue == "12") || (guessValue == "Queen"))
        guessValue = "queen";

    if ((guessValue == "13") || (guessValue == "King"))
        guessValue = "king";

    cout << "Enter your guess for suit of the top card: ";
    cin >> guessSuit;
    cout << endl;

    string top = deckOfCards.front();

    if ((top.find(guessValue) != string::npos) && (top.find(guessSuit) != string::npos))
    {
        char again;

        cout << "Correct! The card was a " << top << "." << endl;
        cout << "Do you want to play again? Y/N: ";
        cin >> again;
        cout << endl;

        if ((again == 'y') || (again == 'Y'))
            menu(deckOfCards);
    }

    else
    {
        cout << "Incorrect, try again." << endl;
        random_shuffle(deckOfCards.begin(), deckOfCards.end());
        deck_both(deckOfCards);
    }
}

//Print function for displaying the top and bottom cards of the deck
void printDeck(deque<string>& deckOfCards)
{
    string topValue, bottomValue;
    string topSuit, bottomSuit;
    string topOffset = " ";
    string bottomOffset = " ";
    string top = deckOfCards.front();
    string bottom = deckOfCards.back();

    if (top.find("ace") != string::npos)
    {
        topValue = "A";
    }

    for (int i = 2; i < 11; i++)
    {
        if (top.find(to_string(i)) != string::npos)
        {
            topValue = to_string(i);
            if (i == 10)
                topOffset = "";
        }
    }

    if (top.find("jack") != string::npos)
    {
        topValue = "J";
    }

    if (top.find("queen") != string::npos)
    {
        topValue = "Q";
    }

    if (top.find("king") != string::npos)
    {
        topValue = "K";
    }

    if (top.find("club") != string::npos)
    {
        topSuit = "♣";
    }

    if (top.find("diamond") != string::npos)
    {
        topSuit = "♦";
    }

    if (top.find("heart") != string::npos)
    {
        topSuit = "♥";
    }

    if (top.find("spade") != string::npos)
    {
        topSuit = "♠";
    }

    if (bottom.find("ace") != string::npos)
    {
        bottomValue = "A";
    }

    for (int i = 2; i < 11; i++)
    {
        if (bottom.find(to_string(i)) != string::npos)
        {
            bottomValue = to_string(i);
            if (i == 10)
                bottomOffset = "";
        }
    }

    if (bottom.find("jack") != string::npos)
    {
        bottomValue = "J";
    }

    if (bottom.find("queen") != string::npos)
    {
        bottomValue = "Q";
    }

    if (bottom.find("king") != string::npos)
    {
        bottomValue = "K";
    }

    if (bottom.find("club") != string::npos)
    {
        bottomSuit = "♣";
    }

    if (bottom.find("diamond") != string::npos)
    {
        bottomSuit = "♦";
    }

    if (bottom.find("heart") != string::npos)
    {
        bottomSuit = "♥";
    }

    if (bottom.find("spade") != string::npos)
    {
        bottomSuit = "♠";
    }

    cout << "Top:           Bottom:" << endl;
    cout << "┌─────────┐    ┌─────────┐" << endl;
    cout << "|" << topValue << topOffset << "       |    |" << bottomValue << bottomOffset << "       |" << endl;
    cout << "|         |    |         |" << endl;
    cout << "|         |    |         |" << endl;
    cout << "|    " << topSuit << "    |    |    " << bottomSuit << "    |" << endl;
    cout << "|         |    |         |" << endl;
    cout << "|         |    |         |" << endl;
    cout << "|       " << topOffset << topValue << "|    |       " << bottomOffset << bottomValue << "|" << endl;
    cout << "└─────────┘    └─────────┘" << endl;
    cout << endl;

    menu(deckOfCards);
}
