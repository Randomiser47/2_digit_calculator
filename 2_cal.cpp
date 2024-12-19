#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    char c;
    int s;
    cout<<"Please Enter number 1: "<<endl;
    cin >>a;
    cout<<"Please enter number 2: "<<endl;
    cin>>b;
    cout<<"Select an operator: + - / * % "<<endl;
    cin >> c;
    if(c=='+')
    {
        s=a+b;
    }else if(c=='-')
    {
        s=a-b;
    }else if(c=='*'){
        s=a*b;
    }else if(c=='/')
    {
        s=a/b;
    }else if(c=='%')
    {
        s=a%b;
    }else
    {
        cout<<"WRONG CHOICE TRY AGAIN";
    }
    cout<<s<<endl;
     return 0;
}