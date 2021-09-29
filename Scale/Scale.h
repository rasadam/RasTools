#include "iObject.h"

#ifndef RAS_SCALE_H
#define RAS_SCALE_H

namespace RAS
{

class Scale :public iObject
{
public:
    Scale ( std::string  ID );

private:
    // const string id (from base class)
    const std::string type; 
    const std::string subType; 
    std::string cardName; 
    std::string provideDate; 
    std::string contractStart;
    std::string contractEnd;
}; //end of class

} //end of namespace

#endif //ifndef