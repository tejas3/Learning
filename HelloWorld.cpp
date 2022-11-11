#include <iostream>
#include<string>
using namespace std;

int multiplication(int a,int b){
   return a*b;
}

int sum(int a, int b){
return a+b;
}

int sub(int a, int b){
return a-b;
}

int div(int c, int d){
return c/d;
}

void Display(){
cout<<"Learning Display Function"<<endl;
}

void show()
{
cout<<"show.."<<endl;
}

int main()
{
        cout << "Hello World"<<endl;
        cout<<multiplication(10,10)<<endl;
        cout <<sum(10,20)<<endl;
        cout<<div(20,10)<<endl;
        cout <<sub(10, 20);
        Display();
        show();
        return 0;
}
