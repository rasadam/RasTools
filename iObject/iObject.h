#ifndef RAS_I_OBJECT_H
#define RAS_I_OBJECT_H

#include <string> 

namespace RAS
{

class iObject
{

public: 
    iObject( std::string id ):id( id ){}
    virtual bool operator==( const iObject* ) = 0;


private:
    const std::string id;

}; //end of class

} //end of namespace

#endif // RAS_I_OBJECT_H
