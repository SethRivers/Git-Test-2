
#include <iostream>

using namespace std;

int sum(int n){
  int sum=0; 
  for (int i = 1; i<=n; i++){
    sum += i; 
  }
  return sum; 
}

int main() {
  int n;
  cout<<"Please type in a number: ";
  cin>>n;
  cout<<"The sum of all the numbers from 1 to "<<n<<" is: "<<sum(n)<<endl; 
  return 0;
}
