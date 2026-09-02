#include <iostream>
using namespace std;
inline int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<add(x,y)<<endl;
    cout<<add(10,20)<<endl;
}