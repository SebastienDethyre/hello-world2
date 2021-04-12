#ifndef PORTE_H
#define PORTE_H
#include "chrono.h"

namespace  nsDigicode
{
    class Porte
    {

    public :

        Porte (Chrono, int);
        void ouvrir();
        void fermer();

    }; // Porte

} // nsDigicode


#endif // PORTE_H
