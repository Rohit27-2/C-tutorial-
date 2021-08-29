#include<iostream>
using namespace std;

int main(){
// Rectangle.

/*
    int row;
    int col;
    cin>>row>>col;

    for(int i=1; i<=row;i++){
        for(int j=1; j<=col;j++){
            cout<<"@ ";
        }
        cout<<endl;
    }

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//hollow rectangle

/*
int row,col;
cin>>row>>col;

for(int i = 1; i<=row; i++){
    for(int j=1; j<=col; j++){
        if (i == 1 || i == row || j==col || j == 1){
            cout<<"^";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
}

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inverted Half Pyramid: 

/*
int n;
cin>>n;
for(int i= n; i>=1; i--){
    for(int j=1; j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Right Pyramid
/*
int n ;
cin>>n;

for(int i =1; i<=n;i++){
    for(int j=1; j<=n;j++){
        if (j<= n-i){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;
}

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Half Pyramid using Numbers

/*
int n;
cin>>n;

for(int i = 1; i<=n;i++){
    for(int j=1; j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Floyd's  Triangle

int n;
cin>>n;
int count =1;

for(int i=1;i<=n;i++){
    for(int j=1; j<=i;j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}

    return 0;
}