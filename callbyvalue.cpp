#include <iostream>
using namespace std;
class data{
    public:
    void display(int a){
        a=10;

    }
    void number(int &a){
     a=20;
    }
};
int main(){
int x=5;
data d;
d.display(x);
cout<<"value of x after call by value:"<<x<<endl;
d.number(x);
cout<<"value of x after call by reference:"<<x<<endl;
return 0;
}