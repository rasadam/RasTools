#ifndef RAS_I_OBJECT_H
#define RAS_I_OBJECT_H

#include <string> 

namespace RAS
{

class iObject
{

iObject( std::string id ):id( id ){}

private:
    const std::string id;

}; //end of class

} //end of namespace

#endif // RAS_I_OBJECT_H
