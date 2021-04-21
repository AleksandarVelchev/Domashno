#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,x;
cout << "Wywedete n" << endl;
cin >> n;
int arr[n-1];
if (n > 11 or n < 1){
    cout << "Greshen testov primer" << endl;
}

for(int i=0; i<n; i++){
    cin >> arr[i];
}
cout << "vuvedete x" << endl;
cin >> x;
bool q = false;
for(int i = 0;i<n;i++){
    if(arr[i]==x){
        cout << "yes" << endl;
        q = true;
        break;
    }
}
    if(q == false){
       cout << "No";
    }
return 0;
}

