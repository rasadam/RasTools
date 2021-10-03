#include <Scale.h>
#include <iostream> 

using namespace RAS; 
using namespace std; 

void InitScales( iObject* scales[] ){
    scales[0] = new Scale( "11853701", "עידן הקצבים מעלה אדומים", "מודל בסיס משקלי KH II 800", "27/01/21", "27/01/21", "27/01/22" );
    scales[2] = new Scale( "11853701", "עידן הקצבים מעלה אדומים", "מודל בסיס משקלי KH II 800", "27/01/21", "27/01/21", "27/01/22" );
    scales[1] = new Scale( "11789214", "הקצביה של אריה", "מודל בסיס משקלי KH II 800", "26/08/20", "26/08/20", "26/08/21" );
}

void TestGetID( iObject* scales[], int size ){
    for (size_t i = 0; i < size; ++i )
    {
        cout << scales[i]->GetID() << endl;
    }
}

void CompareScales( iObject* scale1, iObject* scale2 ){
    if ( scale1->operator==( *scale2 ) ) {
        cout << "0 && 1 are the same" << endl;
    } else {
        cout << "0 && 1 are NOT the same" << endl;
    }
}

int main(int argc, char const *argv[])
{
    iObject* scales[3];

    InitScales( scales );
    TestGetID( scales, 3 );

    CompareScales( scales[0], scales[1] );
    CompareScales( scales[2], scales[1] );
    CompareScales( scales[0], scales[2] );
    
    return 0;
}

