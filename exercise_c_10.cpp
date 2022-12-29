// Checking 3 points are in straight line or not
#include<iostream>
using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3 ,slope;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter x3: ";
    cin >> x3;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter y2: ";
    cin >> y2;
    cout << "Enter y3: ";
    cin >> y3;

    if((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1)){
        cout << "In Straight line";
    }
    else{
        cout << "not";
    }


}
