
#include <iostream>

using namespace std;

int main()
{
    cout << "enter first time in military format: ";
    int first, second;
    cin >> first;
    cout << "enter second time in military format: ";
    cin >> second;
    
    int hour1 = first / 100;
    int hour2 = second / 100;
    int minute1 = first % 100;
    int minute2 = second % 100;
    
    if (hour1 < hour2)
    {
        cout << "first time comes first";
    }
    else if (hour1 == hour2)
    {
        if (minute1 < minute2)
        {
            cout << "first time comes first";
        }
        else if (minute1 > minute2)
        {
            cout << "second time comes first";
        }
        else
        {
            cout << "times are equal";
        }
    }
    else
    {
        cout << "second time comes first";
    }
    cout << endl;
}
