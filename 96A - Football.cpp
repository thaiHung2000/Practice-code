#include <iostream>
using namespace std;
int main()
{
    string note;
    cin >> note;
    int  a = note.size();
     int count = 0;
     int flag = note[0];
     for (int i = 0; i < a; i++ )
     {
         if(note[i] == '0')
         {
             if(flag == 1 )
             {
                 count = 0;
             }
             flag = 0;
             count++;
             if( count >= 7 )
             {
                 break;
             }
             continue;
         }
         if(note[i] == '1' )
         {
             if( flag == 0 )
             {
                 count = 0;
             }
             flag = 1;
             count++;
             if( count >= 7 )
             {
                 break;
             }
             continue;
         }

     }
     if (count >= 7)
     {
         cout << "YES";
     }
     else
     {
         cout << "NO";
     }

}
