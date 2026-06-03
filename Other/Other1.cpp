#include <iostream>
using namespace std;

int main(){
  int w,h,bmi;
  cin >> w >> h;
  
  bmi = (w/h*h);
  
  if ( bmi <= 18.5) {
    cout<<"Underweight";
  }
  else if (bmi <= 25.0) {
    cout<<"Normal";
  }  
  else if (bmi <= 30.0) {
    cout<<"Overweight";
  }
  else if (bmi > 30) {
    cout<<"Obese";
  }
  
  return bmi;
}