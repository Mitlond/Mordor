#include<iostream>
using namespace std;
// Класс-родитель
class Sauron{
protected:
int Mor;
public:
int Dor;
void set(int M){Mor=5;}
};
// Класс-потомок
class Mordu:public Sauron{
public:
int Witch;
void show(){
cout<<"Mor = "<<Mor<<endl;
cout<<"Dor = "<<Dor<<endl;
cout<<"Witch = "<<Witch<<endl;}
};
int main(){
Mordu obj;
obj.set(0);
obj.Dor=1;
obj.Witch=2;
obj.show();
system("pause");
return 0;}
            
