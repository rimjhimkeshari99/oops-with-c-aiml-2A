#include <iostream>
using namespace std;
int add(int a,int b){

    int c=a+b;
    return c;
}
int subtract(int &a,int &b){
    a=60;
    b=10;
    int c=a-b;
    return c;
}
int main(){
int x,y;
cout<<"enter two numbers:"<<endl;
cin>>x>>y;
cout<<"sum:"<<add(x,y)<<endl;
cout<<"difference:"<<subtract(x,y);
return 0;
}