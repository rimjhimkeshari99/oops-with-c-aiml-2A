#include <iostream>
using namespace std;
class student{
    public:
    string name;
    double rollnumber;
    int marks;
void input(){
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"enter the rollnumber"<<endl;
    cin>>rollnumber;
    cout<<"enter the marks"<<endl;
    cin>>marks;
}
void display(){
    cout<<"name:"<<name<<endl;
    cout<<"rollnumber:"<<rollnumber<<endl;
    cout<<"marks:"<<marks<<endl;
}
};
int main(){
    student s;
    s.input();
    s.display();
    return 0;
}