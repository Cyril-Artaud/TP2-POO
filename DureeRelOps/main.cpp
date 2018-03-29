#include <iostream>
#include <iomanip>         // boolalpha
#include <utility>
#include <vector>

using namespace std;
using namespace rel_ops;

#include "duree.h"

using namespace nsUtil;

#define classdef typedef

namespace
{
    void testDuree (void)
    {
        CDuree d1 (3661);
        CDuree d2 (2661);
        CDuree d3 (3661);

        cout << boolalpha;
        d1.display ();
        cout << " <  ";
        d2.display ();
        cout << " : " << (d1 <  d2) << '\n';

        d2.display ();
        cout << " <  ";
        d1.display ();
        cout << " : " << (d2 <  d1) << "\n\n";

        d1.display ();
        cout << " >  ";
        d2.display ();
        cout << " : " << (d1 >  d2) << '\n';

        d2.display ();
        cout << " >  ";
        d1.display ();
        cout << " : " << (d2 >  d1) << "\n\n";

        d1.display ();
        cout << " <= ";
        d2.display ();
        cout << " : " << (d1 <= d2) << '\n';

        d2.display ();
        cout << " <= ";
        d1.display ();
        cout << " : " << (d2 <= d1) << "\n\n";

        d1.display ();
        cout << " >= ";
        d2.display ();
        cout << " : " << (d1 >= d2) << '\n';

        d2.display ();
        cout << " >= ";
        d1.display ();
        cout << " : " << (d2 >= d1) << "\n\n";

        d1.display ();
        cout << " == ";
        d2.display ();
        cout << " : " << (d1 == d2) << '\n';

        d2.display ();
        cout << " == ";
        d1.display ();
        cout << " : " << (d2 == d1) << "\n\n";

        d1.display ();
        cout << " == ";
        d3.display ();
        cout << " : " << (d1 == d3) << '\n';

        d1.display ();
        cout << " != ";
        d2.display ();
        cout << " : " << (d1 != d2) << '\n';

        d1.display ();
        cout << " != ";
        d3.display ();
        cout << " : " << (d1 != d3) << '\n';

        cout << noboolalpha;

    } // testDuree()

} // namespace anonyme

const unsigned long long KDureeMax (1000000);
typedef vector<CDuree> CVDuree;
typedef CVDuree::const_iterator Iter_t;

void InitVDuree (CVDuree & VDuree)
{
    unsigned size;
    cin >> size;
    VDuree.resize (size);
    for (auto & val : VDuree)
        val = CDuree (rand() % KDureeMax);

}

void ShowCVDuree (const CVDuree & VDuree)
{
    for (Iter_t it (VDuree.begin()); it != VDuree.end () ; ++it)
        it->display ();
}

int main (void)
{
    CVDuree vD;
    InitVDuree (vD);
    ShowCVDuree(vD);
    return 0;

} // main()
