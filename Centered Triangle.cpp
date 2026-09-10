#include <iostream>
#include <conio.h>

using namespace std;

void centered_upside_triangle(int rows, char ch);
void centered_upside_down_triangle(int rows, char ch);

int main ()
{
    int rows, choice;
    char ch;
    cout << "Disclaimer:\tThis program shows the centered upside triangle." << endl;

    cout << endl << "Enter the number of rows you want to see in the triangle: ";
    cin >> rows;
    cout << "Enter the character you want to use in the triangle: ";
    cin >> ch;

    cout << "Choose the type of triangle you want to see" << endl;
    cout << "1. Upside Triangle" << endl;
    cout << "2. Upside Down Triangle" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            centered_upside_triangle(rows, ch);
            break;
        case 2:
            centered_upside_down_triangle(rows, ch);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    cout <<"\nPress any key to exit..." ;
    getch ();

    return 0;
}

void centered_upside_triangle(int rows, char ch)
{
    for(int i = 1 ; i <= rows ; i++)        //No. of Rows
    {
        // Spacing
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Pattern
        for(int j = 1; j <= i*2-1; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void centered_upside_down_triangle(int rows, char ch)
{
    for(int i=rows ; i>=1 ; i--)        //No. of Rows
    {
        // Spacing
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Pattern
        for(int j = 1; j <= i*2-1; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}