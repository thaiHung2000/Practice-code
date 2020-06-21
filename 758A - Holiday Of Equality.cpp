#include <iostream>
using namespace std;
int main()
{
    int numberOfCitizen;
    cin >> numberOfCitizen;
    int arr[numberOfCitizen];
    int count = 0;
    for(int i = 0; i < numberOfCitizen; i++ )
    {
        cin >> arr[i];
    }
    int max = 0;
    for(int i = 0; i < numberOfCitizen; i++ )
    {
        if( max < arr[i] )
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < numberOfCitizen; i ++  )
    {
        count += (max - arr[i]);
    }
    cout << count;
}
