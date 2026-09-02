#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<double>collection={94.06,68.09,78.56,75.08,89.09,56.09};
    int c=0;
    for(auto value:collection){
        cout<<value<<endl;
    }
    for(auto i: collection){
        if(i>=75.00){
            c++;
        }
    }
    cout<<"Number of students with attendace greater than 75: "<<c<<endl;
    return 0;
}