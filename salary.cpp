#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
  cin>>n;
  vector<double>salary(n);
  for(int i=0;i<n;i++){
    cin>>salary[i];
  }
      cout<<"display the salary"<<endl;
  for(auto i:salary){
    cout<<i<<endl;
  }
  int sum=0;
  for(auto i:salary){
    sum+=i;
  }
  cout<<"total salary of all employees is: "<<sum<<endl;
  int max;
  max=salary[0];
  for(auto i:salary){
    if(i>max){
        max=i;

    }
  }
    cout<<"maximum salary is: "<<max<<endl;
    int c=0;
    for(auto i:salary){
        if(i>50000){
            c++;
        }
    }
    cout<<"number of employees with salary greater than 50000 is: "<<c<<endl;
    int average;
    average=sum/n;
    cout<<"average salary of all employees is: "<<average<<endl;
    return 0;
}