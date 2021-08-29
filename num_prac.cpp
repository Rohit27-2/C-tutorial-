#include<iostream>
#include<cmath>
using namespace std;

int main(){


// !Prime or not
//int n;
//cout<<"Please enter a number: "<<endl;
//cin>>n;
//bool flag=0;

//for(int i=2; i<=sqrt(n); i++){
  //  if(n%i==0){
    //    cout<<"Not a Prime Number...";
      //  flag=1;
        //break;
    //}

//}
//if (flag==0){
  //  cout<<"Prime Number";
//}
//cout<<endl;

// Reversing a number.
/*
int n;
cin>>n;
int reverse=0;

while (n>0){
    int lastNum = n%10;
    reverse = reverse*10 + lastNum;
    n=n/10;
}
cout<<reverse<<endl;
*/

// Check if a number is Armstrong number

#include<math.h>

int n;
cin>>n;

int sum=0;
int original = n;
while(n>0){
  int num = n%10;
  sum += pow(num,3);
  n=n/10;
}
if(sum == original){
  cout<<"Armstrong number";
}
else{
  cout<<"Not An Armstrong";
}



    return 0;
}