#include <iostream>
#include <iomanip>

#include "duree.h"

using namespace std;

#define DUREE nsUtil::Duree

void DUREE::normaliser (void)
{
    mySeconds = myDuree % 60;
    myDays = myDuree / 86400;
    myHours = (myDuree % 86400) / 3600;
    myMinuts = (myDuree % 3600) / 60;

} // normaliser ()

DUREE::Duree (unsigned long long duree) : myDuree (duree)
{
    normaliser ();
    display ();
    cout << "créé" << endl;

} // Duree ()

DUREE::Duree (const Duree & duree) : myDuree (duree.myDuree)
{
    normaliser ();
    display ();
    cout << "créé par copie" << endl;

} // Duree ()

DUREE::~Duree (void)
{
    display ();
    cout << "détruit" << endl;

} // ~Duree ()

unsigned long long DUREE::getDuree (void) const
{
    return myDuree;

} // getDuree ()


void DUREE::display (void) const
{
    cout << '[' << setw (10) << myDays << ':'
         << setfill ('0') << setw (2) << myHours << ':'
                          << setw (2) << myMinuts << ':'
                          << setw (2) << mySeconds << ':'
         << setfill (' ');

} // display ()

void DUREE::incr (unsigned long long delta)
{
    myDuree += delta;
    normaliser ();

} // incr ()

void DUREE::decr (unsigned long long delta)
{
    myDuree -= delta > myDuree ? myDuree : delta;
    normaliser ();

} // decr ()

Duree DUREE::operator + (const Duree & duree)
{
    return myDuree + duree
}

#undef DUREE
