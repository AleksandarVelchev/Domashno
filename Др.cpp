#include<iostream>
using namespace std;
int leap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}
int main(){
    long long den,mesec,godina;
    bool vg = false, km = false;
    cin >> den >> mesec >> godina;
    vg = leap(godina);
    switch (mesec)
    {
        case 1:
            if(den + 1 == 32) cout << "1.02." << godina; km = true;
            break;
        case 2:
            if(vg == false){
                if(den + 1 == 29) cout << "1.03." << godina; km = true;

            } else if(den + 1 == 30) {
                cout<< "1.03." << godina; km = true;
            }
            break;
        case 3:
            if(den + 1 == 32){
                cout << "1.04." << godina; km = true;
            }
            break;
        case 4:
            if(den + 1 == 31){
                cout << "1.05." << godina; km = true;
            }
            break;
        case 5:
            if(den + 1 == 32){
                cout << "1.06." << godina; km = true;
            }
            break;
        case 6:
            if(den + 1 == 31){
                cout << "1.07." << godina; km = true;
            }
            break;
        case 7:
            if(den + 1 == 32){
                cout << "1.08." << godina; km = true;
            }
            break;
        case 8:
            if(den + 1 == 32){
                cout << "1.09." << godina; km = true;
            }
            break;
        case 9:
            if(den + 1 == 31){
                cout << "1.10." << godina; km = true;
            }
            break;
        case 10:
            if(den + 1 == 32){
                cout << "1.11." << godina; km = true;
            }
            break;
        case 11:
            if(den + 1 == 31){
                cout << "1.12." << godina; km = true;
            }
            break;
        case 12:
            if(den + 1 == 32){
                cout << "1.01." << godina + 1; km = true;
            }
            break;
    }
    if(km == false) {
        cout << den + 1 << "." << mesec << "." << godina;
    }

    return 0;
}

