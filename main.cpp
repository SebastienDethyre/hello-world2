#include <iostream>

#include "systeme.h"
#include "archivage.h"


using namespace nsDigicode;

enum Couleur {KGreen, KRed};
enum Etat {Allume, Eteint};

using namespace std;

int main()
{
    Archivage unArchivage;
    BD uneBD;
    Systeme unSysteme (& unArchivage, & uneBD);
    cout << "Hello World!" << endl;
    return 0;
}
