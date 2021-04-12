/* * /
#ifndef OBJETTEMPO_H
#define OBJETTEMPO_H

class Chrono;
namespace  nsDigicode
{
    class ObjetTempo
    {

        int Delai;
    protected:
        int Attente;

    public :
        void finTempo();
        ObjetTempo (Chrono*, int);
        Chrono getChrono();
        int getDelai();
    };
} /* ns_Digicode */

//#endif // OBJETTEMPO_H
/* */



#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "chrono.h"

namespace nsDigicode {

    class ObjetTempo
    {
    public:
        Chrono* getChrono() {}
        void finTempo() {}
        int getDelai() {}
    };

} /* ns_Digicode */

#endif /* _OBJETTEMPO */





