#include <iostream>
using namespace std;
class employee{
    private:
    string name;
    double employeeid;
    double salary;
    public:
   void input();
   void display();
};
 void employee :: input(){
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the employeeid"<<endl;
        cin>>employeeid;
        cout<<"enter the salary"<<endl;
        cin>>salary;
    }
     void employee :: display(){
        cout<<"name"<<name<<endl;
        cout<<"employeeid"<<employeeid<<endl;
        cout<<"salary"<<salary;
    }
int main(){
    employee e;
  
   e.input();
   e.display();
   return 0;
}
