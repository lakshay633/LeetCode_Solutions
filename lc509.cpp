// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     int a = 0, b = 1, c = 0;
//     if (n == 0)
//     {
//         return a;
//     }
//     if (n == 1)
//     {
//         return b;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return c;
// }
// int main()
// {
//     cout<< fib(10);
//     return 0;
// }
class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return fib(n-1)+fib(n-2);
    }
};
