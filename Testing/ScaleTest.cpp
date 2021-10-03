#include <Scale.h>
#include <iostream> 

using namespace RAS; 
using namespace std; 

int main(int argc, char const *argv[])
{
    iObject* scales[3];
    scales[0] = new Scale( "11853701", "עידן הקצבים מעלה אדומים", "מודל בסיס משקלי KH II 800", "27/01/21", "27/01/21", "27/01/22" );
    scales[2] = new Scale( "11853701", "עידן הקצבים מעלה אדומים", "מודל בסיס משקלי KH II 800", "27/01/21", "27/01/21", "27/01/22" );
    scales[1] = new Scale( "11789214", "הקצביה של אריה", "מודל בסיס משקלי KH II 800", "26/08/20", "26/08/20", "26/08/21" );

    for ( auto &&i : scales ) {
        cout << i->GetID() << endl;
    }

    if ( scales[0]->operator==( *scales[1] ) ) {
        cout << "0 && 1 are the same" << endl;
    } else {
        cout << "0 && 1 are NOT the same" << endl;
    }
    
    if ( scales[2]->operator==( *scales[1] ) ) {
        cout << "2 && 1 are the same" << endl;
    } else {
        cout << "2 && 1 are NOT the same" << endl;
    }

    if ( scales[0]->operator==( *scales[2] ) ) {
        cout << "0 && 2 are the same" << endl;
    } else {
        cout << "0 && 2 are NOT the same" << endl;
    }
    
    return 0;
}

