#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    int count = 0;
    for( char i = 'a' ; i <= 'z' ; i++ )
    {
        for(int j = 0 ; j < sentence.size() ; j ++ )
        {
            if(sentence[j] == i )
            {
                count++;
                break;
            }
        }
        continue;
    }
    cout << count;
}
