#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter Day : ";
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    // case 1:
    //     cout << "Monday" << endl;
    //     break;
    case 2:
        cout << "Thusday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thrusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Subday" << endl;
        break;
    
    default:
        break;
    }
}