#include <iostream>

using namespace std;

int main() {
    int i,no1,no2,temp,gcd,lcm;
    cout<<"\nEnter two nos :- \n";
    cin>>no1>>no2;
    if(no1>no2)
    {
        temp = no1;
        no1 = no2;
        no2 = temp;
    }
    for(i=1;i<=no1;i++)
    {
        if(no1%i==0 && no2%i==0)
            gcd = i;
    }
    lcm = (no1*no2)/gcd;
    cout<<"\nGCD is : "<<gcd;
    cout<<"\nLCM is : "<<lcm;
    return 0;
}