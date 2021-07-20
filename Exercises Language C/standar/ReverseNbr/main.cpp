#include <iostream>

using namespace std;

int reverse(int n ,int r = 0){
    if(n>0)
    return reverse(n/10,r * 10 + (n%10));
    else return r;
}

int main()
{

    cout<<reverse(1234);

    cout<< endl;


    return 0;
}
