#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int flag = 0;
    for(int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= m; j++ )
        {
            if( i % 2 != 0)
            {
                cout << '#';
            }
            else
            {
                if ( flag == 0 )
                {
                    if(j == m)
                    {
                        cout << '#';
                        flag = 1;
                    }
                    else
                    {
                        cout << '.';
                    }

                    
                }
                else
                {
                    if ( j == 1 )
                    {
                        cout << '#';
                    }
                    else
                    {
                        
                    
                    cout << '.';
                        }
                    if( j == m )
                    {
                        flag = 0;
                    }

                }
            }


        }
        cout << endl;
    }
}

