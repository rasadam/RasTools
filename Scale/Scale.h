#include "iObject.h"

#ifndef RAS_SCALE_H
#define RAS_SCALE_H

namespace RAS
{

class Scale :public iObject
{
public:
    Scale ( std::string  id, std::string cardName, std::string provideDate, std::string contractStart, std::string contractEnd );
    inline bool operator== ( const Scale& other ){ return this->id == other.id && this->cardName == other.cardName; }

    inline void SetCardName( std::string cardName ){ this->cardName = cardName; }
    inline void SetProvideDate( std::string provideDate ){ this->provideDate = provideDate; } 
    inline void SetContractStart( std::string contractStart ){ this->contractStart = contractStart; }
    inline void SetContractEnd( std::string contractEnd){ this->contractEnd = contractEnd; }

    inline std::string GetCardName() const { return cardName; }
    inline std::string GetProvideDate() const { return provideDate; }
    inline std::string GetContractStart() const { return contractStart; }
    inline std::string GetContractEnd() const { return contractEnd; }

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