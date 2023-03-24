#include <iostream>
using namespace std;

class Time
{
    int a, b;

public:
    int setTime()
    {
        cout << "Enter the time between 1 to 12 :";
        cin >> a;
        return a;
    }
    int goAhead()
    {
        cout << "How many hours you want to go ahead :";
        cin >> b;
        return b;
    }
};

int main()
{
    int d, e, f;
    Time T;
    d = T.setTime();
    while (d < 1 or d > 12)
    {
        cout << "Invalid Command!" << endl;
        d = T.setTime();
    }
    int g;
    cout << "Press '1' if time is in 'am' else press '2' if time is in 'pm' : ";
    cin >> g;
    while (g != 1 and g != 2)
    {
        cout << "Invalid Command!" << endl;
        cout << "Try again by pressing '1' if time is in 'am' and press '2' if time is in 'pm' : ";
        cin >> g;
    }
    if (g == 1)
    {
        e = T.goAhead();
        f = d + e;
        while (f >= 24)
        {
            f = f - 24;
        }
        if (f > 12)
        {
            f = f - 12;
            cout << f << " pm is new time." << endl;
        }
        else
        {
            cout << f << " am is new time." << endl;
        }
    }
    else if (g == 2)
    {
        e = T.goAhead();
        f = d + 12 + e;
        while (f >= 24)
        {
            f = f - 24;
        }
        if (f > 12)
        {
            f = f - 12;
            cout << f << " is new time." << endl;
        }
        else
        {
            cout << f << " am is new time." << endl;
        }
    }

    cout << "Press '1'if u want to try another time and press any other key if you want to exit : ";
    cin >> g;

    if (g != 1)
    {
        cout << "You are succesfully exit from the program.";
    }

    while (g == 1)
    {
        d = T.setTime();
        while (d < 1 or d > 12)
        {
            cout << "Invalid Command!" << endl;
            d = T.setTime();
        }
        int g;
        cout << "Press '1' if time is in 'am' else press '2' if time is in 'pm' : ";
        cin >> g;
        while (g != 1 and g != 2)
        {
            cout << "Invalid Command!" << endl;
            cout << "Press '1' if time is in 'am' else press '2' if time is in 'pm' : ";
            cin >> g;
        }
        if (g == 1)
        {
            e = T.goAhead();
            f = d + e;
            while (f >= 24)
            {
                f = f - 24;
            }
            if (f > 12)
            {
                f = f - 12;
                cout << f << " pm is new time." << endl;
            }
            else
            {
                cout << f << " am is new time." << endl;
            }
        }
        else if (g == 2)
        {
            e = T.goAhead();
            f = d + 12 + e;
            while (f >= 24)
            {
                f = f - 24;
            }
            if (f > 12)
            {
                f = f - 12;
                cout << f << " pm is new time." << endl;
            }
            else
            {
                cout << f << " am is new time." << endl;
            }
        }

        cout << "Press '1'if u want to try another time and press any other key if you want to exit : ";
        cin >> g;

        if (g != 1)
        {
            cout << "You are exit from the programm.";
            break;
        }
    }
    }