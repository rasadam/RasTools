#ifndef RAS_I_OBJECT_H
#define RAS_I_OBJECT_H

#include <string> 
#include <chrono>

namespace RAS
{

class iObject
{

public: 
    iObject( std::string id ):id( id ){}
    inline virtual bool operator==( const iObject& other ){ return this->id == other.id; }


protected:
    const std::string id;
    
}; //end of class

} //end of namespace

#endif // RAS_I_OBJECT_H
