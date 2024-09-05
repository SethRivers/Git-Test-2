
#include <iostream>

using namespace std;

int sum(int n){
  int sum=0; 
  for (int i = 1; i<=n; i++){
    sum += i; 
  }
  return sum; 
}

int product(int n){
  int product=1; 
  for (int i = 1; i<=n; i++){
    product *= i; 
  }
  return product; 
}

int main() {
  int n;
  cout<<"Please type in a number: ";
  cin>>n;
  cout<<"The sum of all the numbers from 1 to "<<n<<" is "<<sum(n)<<", while the product of all the numbers from 1 to "<<n<<" is "<<product(n)<<endl; 
  return 0;
}
