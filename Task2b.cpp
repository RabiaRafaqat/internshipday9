//Sum OF Even AND odd with while Loop: 
//Write a program to calculate the sum of even and odd numbers up to a given number n using a while loop.


#include<iostream>
using namespace std;
int main()
{
    int r, sumeven=0,sumodd=0,i=1;
    cout<<"enter positive integer"<<endl;
    cin>>r;
    while(i<=r){
        // Check if the current number i is even
        if(i % 2 == 0){
    sumeven += i; //add the even number to sumeven
        } else {
            sumodd += i; // Add the odd number to sumOdd 
            }
    i++; // Increment i by 1 for the next iteration
    }
cout<<"sum of even numbers"<<sumeven<<endl;
cout<<"sum of odd numbers"<<sumodd<<endl;
return 0;
}