//Define a program to find out whether a given number is even or odd.
#include<iostream>
using namespace std;
 int num;
void Chack()
{

    if(num%2==0)

        cout<<"This is a even number.";

    else

        cout<<"This is a odd number.";

}


int main()
{

cout<<"Enter your number : ";
cin>> num;
system("CLS");
cout<<"your given number is : "<<num <<endl;
cout<<endl;
cout<<endl;

Chack();
cout<<endl;
cout<<endl;
    return 0;
}
