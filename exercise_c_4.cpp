#include<iostream>
using namespace std;

int Gregorian_calander(int k,int month , int year, int century){
    double w;

    // w = ((k + (2.6*month - 0.2)-2*century + year+ (year/4) + (century/4)) % 7);
    return w;
}

int main(){
    double date, month , year, century,weekday;
    string day[] = {"Sunday","Monday","Tuesday","Wednesday","Thusday","Friday","Saturday"};
    cout << "Enter date :" <<endl;
    cin >> date;
    cout << "Enter month :" <<endl;
    cin >> month;
    cout << "Enter year :" <<endl;
    cin >> year;
    cout << "Enter century :" <<endl;
    cin >> century;

    weekday = Gregorian_calander(date,month,year,century);

    cout << day[(int)weekday];
    return 0;
}