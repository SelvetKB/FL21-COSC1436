// Menu program for Programming Final Project
// Used with Github to ensure that students know the GitHub process.

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2021";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu3Birge();
void menu18Smiley(int);

// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
    int choice;       // To hold a menu choice

    // Constants for the menu choices
    const int MAXCHOICE = 30;
    const int MINCHOICE = 1;
    const int EXIT = 0;

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cout << "Enter your selection (0 to exit): ";
        cin >> choice;

        // Validate the menu selection.
        if (choice == EXIT)
        {
            cout << endl;
            cout << "Thank for using the " << semester << " Menu Program. " << endl;
            cout << "Have a nice day." << endl;
        }
        else
        {
            switch (choice)
            {
            case 1:                 // Akopov - call to function goes here
                break;
            case 2:                 // Belakhoua - call to function goes here
                break;
            case 3:                 // Birge - call to function goes here
                menu3Birge();
                break;
            case 4:                 // Carpenter - call to function goes here
                break;
            case 5:                 // Cervantes - call to function goes here
                break;
            case 6:                 // Chairez - call to function goes here
                break;
            case 7:                 // Coons - call to function goes here
                break;
            case 8:                 // Cutshall - call to function goes here
				break;
            case 9:                 // Gilcrease - call to function goes here
                break;
            case 10:                 // Kaiser - call to function goes here
                break;
            case 11:                 // Mukendi - call to function goes here
                break;
            case 12:                 // Naz - call to function goes here
                break;
            case 13:                 // Ricks - call to function goes here
                break;
            case 14:                 // Rodriguez - call to function goes here
                break;
            case 15:                 // Syed - call to function goes here
                break;
            case 16:                 // Underwood - call to function goes here
                break;
            case 17:                 // Whispell - call to function goes here
                break;
            case 18:                 // Smiley - call to function goes here
                menu18Smiley(11);
                break;
            }
        }
    } while (choice != EXIT);

    return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
    cout << "*******************************************************************" << endl;
    cout << "*   Welcome to the " << semester << " Program!                     *" << endl;
    cout << "*      Make a selection from the list below to see student output *" << endl;
    cout << "*                                                                 *" << endl;
    cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
    cout << "*******************************************************************" << endl;

    cout << "1.  Apokov" << endl;
    cout << "2.  Belakhoua" << endl;
    cout << "3.  Birge" << endl;
    cout << "4.  Carpenter" << endl;
    cout << "5.  Cervantes" << endl;
    cout << "6.  Chairez" << endl;
    cout << "7.  Coons" << endl;
    cout << "8.  Cutshall" << endl;
    cout << "9.  Gilcrease" << endl;
    cout << "10. Kaiser" << endl;
    cout << "11. Mukendi" << endl;
    cout << "12. Naz" << endl;
    cout << "13. Ricks" << endl;
    cout << "14. Rodriguez" << endl;
    cout << "15. Syed" << endl;
    cout << "16. Underwood" << endl;
    cout << "17. Whispell" << endl;
    cout << "18. Smiley" << endl;
    cout << endl;
}

// *****************************************************************************************
// Function Definitions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function documentation updated -REQUIRED!
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

// *****************************************************************************************
// MENU ID:          3
// FUNCTION:         menu3Birge
// DESCRIPTION:      the program is an interactive game where a user inputs a character,
//                      and it tries to get home
// OUTPUT:           User enters Y
//                      Program then starts a race home with the character Y
// *****************************************************************************************
void menu3Birge()
{
    srand(time(0));

    // Length the character runs
    const int length = 60;

    // Prompt User for Race
    cout << endl << endl;
    cout << "Choose a letter to begin the race home, dont fall in a bush!" << endl;

    // User input
    char k;
    cin >> k;

    // This will put the position of the character in the middle
    int position = length / 2; 

    // Bounderies and Spacing/Character outputs
    while(true)
    {
        cout << "|BUSH|";

        for (int i = 0; i < length; i++)
        {
        if (i == position) 
            cout << k;
        else
            cout << " ";
        }
        
        cout << "|HOME|" << endl;

        // Randomizing character movement
        int move = rand() % 3 - 1;
        position = position + move; 

        // Final output result
        if (position < 1)
        {
            cout << endl << endl;
            cout << "Oh no!!! You fell into a bush!" << endl << endl;
            break;
        }
        if (position > length - 1)
        {
            cout << endl << endl;
            cout << "Lucky! You made it home safe!" << endl << endl;
            break;
        }

        // Looper
        for(int sleep = 0; sleep < 1000000; ++sleep);
    }
}

// *****************************************************************************************
// MENU ID:          18
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu18Smiley(int numberOfTimes)
{
    int current = 0;
    int next = 1;
    int nextTerm;

    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

    for (int i = 1; i <= numberOfTimes; i++)
    {

        if (i == 1)                    // Prints the first term
        {
            cout << current;
        }
        else if (i == 2)               // Prints the second term
        {
            cout << next;
        }
        else                          // Prints all subsequent terms
        {
            nextTerm = current + next;
            current = next;
            next = nextTerm;

            cout << nextTerm;
        }

        if ((i + 1) <= numberOfTimes)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << endl;
}
