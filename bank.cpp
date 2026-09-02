#include <iostream>
using namespace std;
class bankaccount{
    private:
    int balance;
    public:
    int setbalance(int b){
        balance=b;
        return balance;
    }
    int deposit(int d){
        balance+=d;
        return balance;
    }
    int withdraw(int w){
        if(w>balance){
            cout<<"insufficient balance"<<endl;
        }
        else{
            balance-=w;
        }
        return balance;
    }
int ammount(){
    return balance;
}
    

};
int main(){
    bankaccount b;
 cout<<"initial balances"<< b.setbalance(10000)<<endl;
cout<<"after deposit"<<b.deposit(5000)<<endl;
cout<<"after withdraw"<<b.withdraw(2000)<<endl;
cout<<"final balance"<<b.ammount()<<endl;
return 0;
}