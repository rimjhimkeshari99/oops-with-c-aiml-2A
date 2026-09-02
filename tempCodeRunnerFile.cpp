#include <iostream>
using namespace std;
class student{
public:

void display (string name){ 
    cout<<"enter the name"<<endl;
  cout<<name<<endl;
}
void display(string name,int rollnumber){
    cout<<"enter the fullname"<<endl;
    cout<<name<<endl;
    cout<<"enter the rollnumber"<<endl;
    cout<<rollnumber<<endl;
}
void display(int grade){
     cout<<"enter the grade"<<endl;
    cout<<grade<<endl;
    if(grade>=90 && grade<100){
        cout<<"first division"<<endl;
    }
    else if(grade>=70 && grade<90){
        cout<<"second division"<<endl;
    }
    else if(grade>=50 && grade< 70){
        cout<<"third divison"<<endl;
    }
    else{
        cout<<"fail";
    }
}
};
int main(){
student s;
s.display("rimjhim");
s.display("rimjhimkeshari",456);
s.display(98);
return 0;
}
