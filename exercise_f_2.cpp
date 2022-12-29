// Using convertion of datatype and using logical operators

#include<iostream>
using namespace std;

int main(){
    int value;
    char val;

    cout << "enter CHARACTER : ";
    cin >> val;
    value = val;

    if(value >= 65 && value <= 90){
        cout << endl<<"UPPERCASE CHARACTER";
    }
    else if(value >= 97 && value <= 122){
        cout << endl<<"LOWERCASE CHARACTER";
    }
    else if(value >= 48 && value <= 57){
        cout << endl<<"0 - 9 NUMBERS";
    }
    else{
        cout << endl<<"SPECIAL SYMBOLS";
    }
    // cout << value;
    return 0;
}
