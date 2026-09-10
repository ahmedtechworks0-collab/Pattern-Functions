// Header files
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

// Function declaration
void draw_asterisk_bottomleft(char pattern, int length);
void draw_asterisk_topleft(char pattern, int length);
void draw_asterisk_topright(char pattern, int length);
void draw_asterisk_bottomright(char pattern, int length);

// Main Function
int main()
{
    char character;
    int limit,choice;

    cout << "This program draws right-angled patterns." << endl << endl;
    cout << "Enter a character that will be used to draw pattern:" ;
    cin >> character ;
    cout << "Enter a limit of the pattern:" ;
    cin >> limit ;

    cout << "Choose orientation of the Pattern:" << endl;
    cout << "1. Top Left" << endl;
    cout << "2. Top Right" << endl;
    cout << "3. Bottom Left" << endl;
    cout << "4. Bottom Right" << endl;
    cin >> choice;
    cout << endl;

    // Function Call
    if(choice == 1)
        draw_asterisk_topleft(character, limit);
    else if(choice == 2)
        draw_asterisk_topright(character, limit);
    else if(choice == 3)
        draw_asterisk_bottomleft(character, limit);
    else if(choice == 4)
        draw_asterisk_bottomright(character, limit);
    else
        cout << "Invalid choice!" << endl;
    
    cout << "Press any key to exit...";
    getch();

    return 0;
}

// Function Definitions
void draw_asterisk_topleft(char pattern, int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length; j >= i; j--)
        {
            cout << pattern;
        }
        cout << endl;
    }
}

void draw_asterisk_bottomleft(char pattern, int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << pattern;
        }
        cout << endl;
    }
}

void draw_asterisk_topright(char pattern, int length)
{
    for (int i = 1; i <= length; i++)
    {
        int space = 1;
        cout << setw(space) << " ";
        for (int j = length; j >= i; j--)
        {
            cout << pattern;
        }
        cout << endl;
    }
}

void draw_asterisk_bottomright(char pattern, int length)
{
    for (int i = 1; i <= length; i++)
    {
        int space = 1;
        cout << setw(space) << " ";
        for (int j = 1; j <= i; j++)
        {
            cout << pattern;
        }
        cout << endl;
    }
}