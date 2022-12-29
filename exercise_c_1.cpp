#include<iostream>
using namespace std;

int main(){
    int c_price,s_price,margin;

    cout << "Enter the Cost price " << endl;
    cin >> c_price;

    cout << endl << "Enter the Selling Price "<< endl;
    cin >> s_price;

    if(s_price > c_price){
        margin = s_price - c_price;
        cout << endl << "Seller has made Profit : " << margin << endl;
    }
    else{
        margin = c_price - s_price;
        cout << endl << "Seller has incurred loss : " << margin << endl;
    }
    return 0;
}