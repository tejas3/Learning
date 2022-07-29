#include <iostream>
#include<string>
using namespace std;
<<<<<<< HEAD
int sum(int a,int b) 
{
return a+b;
}

int main()
{
         cout<<sum(10,20)<<endl;
	return 0;
}
=======

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

void Print(){
cout<<"Learning Print Function"<<endl;
}

int main()
{
        cout << "Hello World"<<endl;
        cout<<multiplication(10,10)<<endl;
        cout <<sum(10,20)<<endl;
        cout<<div(20,10)<<endl;
        cout <<sub(10, 20);
        Display();
	Print();
        return 0;
}
>>>>>>> 93013940af12b3181f5ea6b2f5adbe2c935c7b5d
