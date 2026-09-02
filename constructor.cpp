#include <iostream>
using namespace std;
class student{
public:
void display(string name){
    cout<<"enter the name"<<endl;
    cout<<name<<endl;
}
void display(int rollnumber){
    cout<<"enter the rollnumber"<<endl;
    cout<<rollnumber<<endl;
}
};
int main(){
    student s;
    s.display("rimjhim");
    s.display(456);
return 0;
}