#include <iostream>
using namespace std;
class bankaccount{
    private:
    double accountnumber;
    double balance;
    friend class comparebalance;
};
class comparebalance{
    public:
    void compare(bankaccount b1,bankaccount b2){
        if(b1.balance>b2.balance){
            cout<<b1.accountnumber<<"has higher balance"<<endl;
        }
        else if(b2.balance
            >b1.balance){
            cout<<b2.accountnumber<<"has higher balance"<<endl;
        }
        else{
            cout<<"both have same balance"<<endl;
        }
    }
};
int main(){
    bankaccount b3(101,50000);
    bankaccount b4(201,60000);
    
    comparebalance c1;
    c1.compare(b3,b4);
    
}