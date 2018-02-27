#include <iostream>
#include <string>

using namespace std;

int main( )
{

    string a = "Good Morning Vietnam";

    // Print c character-by-character.
    cout << "c is: \n" ;
    for( int i = 0; i < a.length( ) ; i++ )
            cout << a[i] << "\n" ;
        cout << endl;
    return 0;

}
