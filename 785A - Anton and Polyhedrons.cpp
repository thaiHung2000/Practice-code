#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numberOfCollection;
    cin >> numberOfCollection;
    int totalFace = 0;
    string polyhedrons;
    cin.ignore();
    
    for(int i = 1 ; i <= numberOfCollection ; i++ )
    {
        
        getline(cin,polyhedrons);
        if(polyhedrons == "Tetrahedron" )
        {
            totalFace += 4;
        }
        if(polyhedrons == "Cube" )
        {
            totalFace += 6;
        }
        if(polyhedrons == "Octahedron" )
        {
            totalFace += 8;
        }
        if(polyhedrons == "Dodecahedron" )
        {
            totalFace += 12;
        }
        if(polyhedrons == "Icosahedron" )
        {
            totalFace += 20;
        }
    }
    cout  << totalFace;
    

}
