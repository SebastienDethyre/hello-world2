#include <iostream>
#include <iomanip>
#include <string>

#include "interface.h"
#include "chrono.h"

using namespace std;
using namespace nsDigicode;

#define INTER nsDigicode::Interface::

void nsDigicode::Interface::statut (string s)
{
    cout << endl     << "VERT"  << setw (4) // << leVoyantVert.getStatut ()
         << setw (7) << "ROUGE" << setw (4) // << leVoyantRouge.getStatut ()
         << setw (24) << s << flush;
}

int INTER saisirCode(void)
{
    int code;
    cout << "veuillez saisir le Code : " << endl;
    cin >> code;
    cout << endl;
    return code;
}

Interface (Chrono* , int, int)
{




}
