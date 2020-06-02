#include <iostream>
using namespace std;
int main()
{
    int numberOfTeam;
    cin >> numberOfTeam;
    int arr[numberOfTeam][2];
    for(int i = 0 ; i < numberOfTeam ; i ++ )
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int timeOfHostWearGuest = 0;
    for(int i = 0 ; i < numberOfTeam - 1 ; i++ )
    {
        for(int j = i + 1; j < numberOfTeam ; j++ )
        {
            if(arr[i][0] == arr[j][1])
            {
                timeOfHostWearGuest++ ;
            }
            if(arr[i][1] == arr[j][0])
            {
                timeOfHostWearGuest++;
            }
        }
    }
    cout << timeOfHostWearGuest;
}
