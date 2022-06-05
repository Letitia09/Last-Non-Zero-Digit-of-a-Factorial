#include <iostream>
using namespace std;
int fact(int n){
   int fact=1;
   while(n!=0){
        fact=fact*n;
        n-=1;
    }
    return fact;
}
int LNZD_FACTORIAL(int res){
   while(res!=0){
        if (res%10!=0){
            return res%10;
            break;
        }
        res=(int)res/10;
    } 
}
int main()
{
    int n=5;
    int res=fact(n);
    cout<<"Last Non-Zero Digit of "<<n<<"Factorial is "<<LNZD_FACTORIAL(res);

    return 0;
}
