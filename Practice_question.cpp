#include <iostream>
using namespace std;

// void swap(int *a,int *b){

//  int temp=*a;
//    *a=*b;
//    *b=temp;
// int volume(int a){
//     return 4*(3.14*a*a*a)/3;
// }

// }
// int volume(int n){
//     return n*n*n;
// }
// int volume(int r,int h){
//     return 3.14*r*r*h;
// }
// int volume(int l,int b){
//     return 2*(l+b);
// }
// double circum(int r){
//     return 2*(3.14159)*r;
// }
// double area(int s){
//     return 3.14159*(s*s);
// }
// int temptocel(int cel)
// {
//     return (cel * 9.0) / 5.0 + 32;
// }
// float avg(int a,int b,int c,int d){
//     return a+b+c+d/4;

// }
int main()
{
    // Question-1
    // int a;
    // int b;
    // cout<<"Enter First Number"<<endl;
    // cin>>a;
    // cout<<"Enter second Number"<<endl;
    // cin>>b;
    // cout<<"The Sum is "<<a+b<<endl;

    // Question-2

    // int x=5;
    // int y=6;
    // cout<<"the value of x is "<<x<<" and value of y is "<<y<<endl;
    // swap(&x,&y);
    // cout<<"the value of x is "<<x<<" and value of y is "<<y<<endl;

    // Question-3
    //    cout<<"The volume of sphere is "<<volume(6);

    // Question-4
    // cout<<"The volume of cube is "<<volume(5);
    // Question-5
    // cout<<"The volume of cylinder is "<<volume(6,8);
    // Question-6

    // cout<<"The perimeter of rectanle is "<<volume(10,15);
    // Question-7
    //   cout<<"The circum of Circle is "<<circum(5)<<endl;
    //   cout<<"The circum of Circle is "<<area(5)<<endl;
    // Question-8
    // cout<<"The Value of Given Temperature in Celsius is  "<<temptocel(35);
    // Question-9


    //   int a,b,c,d;
    //   cout<<"Enter first Number"<<endl;
    //   cin>>a;
    //   cout<<"Enter second Number"<<endl;
    //   cin>>b;
    //   cout<<"Enter Third Number"<<endl;
    //   cin>>c;
    //   cout<<"Enter Fourth Number"<<endl;
    //   cin>>d;
    //   cout<<"The Average is "<<avg(a,b,c,d);

// Question-10
// wap to print hollow rectangular pattern
// int row,col;
// cout<<"Enter number of Rows"<<endl;
// cin>>row;
// cout<<"Enter Number of Columns"<<endl;
// cin>>col;
// for (int i = 1; i <=row; i++){

//     for ( int j = 1; j <= col; j++)
//     {
//         if (i==1||i==row||j==1||j==col)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         } 
        
//     }
//     cout<<endl;
    


// }
// Question-11
// Wap to print pyranid pattern
// int n;
// cout<<"Enter number "<<endl;
// cin>>n;
// for (int i = n; i >=1; i--){
//     for (int j= 1; j <=i; j++)
//     {
//         cout<<"*";
//     }
    
// cout<<endl;
// Question-12
// Wap to print pyramid at 180 degree rotation
// int n;
// cout<<"Enter a number"<<endl;
// cin>>n;
// for (int i = 0; i <=n; i++)
// {
//     for (int j = 0; j <=n; j++)
//     {
//         if(j<=n-i){
//             cout<<"  ";
//         }
//         else{
//             cout<<"* ";
//         }
//     }
//     cout<<endl;
    // Question-13
    // wap to print half pyramid using numnbers
    // int n;
    // cout<<"Enter number";
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j= 1; j<=i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    // cout<<endl;
    // Question-14
    // wap to print floyd's Triangle
    // int n;
    // int count=1;
    // cout<<"Enter Number";
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // Question-15
    // Wap to print buttedrfly pattern
    // int n;
    
    // cout<<"Enter number";
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
        
    //     }
    //     int space=2*n-2*i;
    //     for (int j = 1; j<=space; j++)
    //     {
    //         cout<<" ";
    //     }
    //       for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
        
    //     }
    //     cout<<endl;

        
    // }
    
    // for (int i = n; i >=1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
        
    //     }
    //     int space=2*n-2*i;
    //     for (int j = 1; j<=space; j++)
    //     {
    //         cout<<" ";
    //     }
    //       for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
        
    //     }
    //     cout<<endl;

        // 2d arrays
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        // cout<<"The matrix is";
             
        
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
            
        }
        
    
    
    





   







    


       


    return 0;
}
