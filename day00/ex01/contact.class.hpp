#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>

class contact {

public:

    int         index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthday;
    std::string favouriteMeal;
    std::string underwearColour;
    std::string darkestSecret;
    int         set;

    contact( void );
    ~contact( void );
    
    void    getPreview( int index );
    void    getAttributes( int index ) const;
    void    setAttributes( int index );
    std::string truncate( std::string str);
};

#endif