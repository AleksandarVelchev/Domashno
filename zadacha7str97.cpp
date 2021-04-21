#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main(){
     SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
long long n, fac=1;
cout<<"Моля въведете n"<<endl;
cin>>n;
cout<<"Сумата е:"<<endl;
cout<<n*(n+1)/2<<endl;
cout<<"Произведението е:"<<endl;
for(int i=1;i<=n;i++){
    fac=fac*i;
}
cout<<fac;
return 0;
}
