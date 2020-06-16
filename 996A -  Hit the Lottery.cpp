#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int numb = 0;
    numb = numb + n / 100;
    n = n % 100;
    numb = numb + n / 20;
    n = n % 20;
    numb = numb + n / 10;
    n = n % 10;
    numb = numb + n / 5;
    n = n % 5;
    numb = numb + n / 1;
    n = n % 1;


    cout << numb;



}
