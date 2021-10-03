#include "iObject.h"
#include "Scale.h"
#include <string>

using namespace std; 

namespace RAS
{

Scale::Scale ( std::string  id, std::string cardName, std::string description, std::string provideDate, std::string contractStart, std::string contractEnd )
        : iObject(id), cardName( cardName ), description( description ), provideDate( provideDate ), contractStart( contractStart ), contractEnd( contractEnd ), 
          type( "משקלים" ), subType( "משקלים" ) {
    
}

} // end of namespace