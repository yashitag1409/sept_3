// leap year 
#include<iostream>
using namespace std;

int main(){
    int year,leap;

    cout << endl <<"Enter the Year: " ;
    cin >> year;

    leap = year % 4;

    if(leap == 0)
        cout << endl << year << " is a lear year";
    else
        cout << endl << year << " is not a leap year";
    // ans = 2002 % 4;
    // cout << ans;
    return 0;
}