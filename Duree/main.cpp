#include <vector>
#include <iostream>

#include "duree.h"

using namespace std;
using namespace nsUtil;

int main()
{
    vector <Duree> vDuree;
    for (unsigned long long duree; cin >> duree; )
        vDuree.push_back (duree);
    for (const Duree & duree : vDuree)
    {
        duree.display ();
        cout << endl;
    }

    return 0;
}
