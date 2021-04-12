#include <string>


#ifndef INTERFACE_H
#define INTERFACE_H

class Chrono;
namespace  nsDigicode
{
    class Interface
    {
        int nbChiffresAttendus;

    public :

        int saisirCode(void);
        Interface (Chrono*, int, int);
        void statut (std::string);

    }; // Interface

} // nsDigicode



#endif // INTERFACE_H
