#include <iostream>
#include<string>
using namespace std;

int sum(int a, int b){
return a+b;
}

int div(int c, int d){
return c/d;
}

void Display(){
cout<<"Learning Display Function"<<endl;
}

int main()
{
	string name="CPP";
        cout << sum(10,20)<<endl;
        Display();	
        return 0;
}
