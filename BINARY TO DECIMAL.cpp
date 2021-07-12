#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
using namespace std;

int main()
{
    cout << "ENTER A BINARY NUMBER TO CONVERT IT TO A DECIMAL : ";
    string b;
    cin >>b;


int HK=0;
    for (int i=b.length()-1;i>-1;i--){

int k=(b.length()-(i+1));
stringstream str;
str<<b[i];int x;str>>x;

      HK+=x*pow(2,k);
}



 cout<<" "<<endl;

    cout<<"THE DECIMAL NUMBER IS: "<<HK<<endl;
    cout<<"THE MOST SIGNIFICANT BIT WOULD BE "<<b[0];

 cout<<" "<<endl;
    return 0;
}
