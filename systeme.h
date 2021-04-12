/**
  *
  * @file systeme.h
  * @author M. Laporte
  *
  * @date 12/04/2021
  *
  * @brief declaration de la classe Systeme gestionnaire d'immeuble
  *
  * */


#ifndef SYSTEME_H
#define SYSTEME_H

#include "interface.h"
#include "chrono.h"
#include "porte.h"
#include "alarme.h"
#include "archivage.h"
#include "bd.h"

class Archivage;
class BD;
namespace nsDigicode
{
    class Systeme
    {
        Interface   myInterface;
        Chrono      myChrono;
        Porte       myPorte;
        Alarme      myAlarme;
        Archivage * myArchivage;
        BD        * myBD;

    public :
        Systeme(Archivage, BD);

    }; // Systeme

} // nsDigicode

#endif // SYSTEME_H
