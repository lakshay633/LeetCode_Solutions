#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
    if(n<1)
        return false;
    if(n==1)
        return true;
    if(n%3!=0)
        return false;
    if(n%9==0)
        return isPowerOfThree(n/9);
    return isPowerOfThree(n/3); 
}
int main()
{
    cout << isPowerOfThree(27);
    return 0;
}