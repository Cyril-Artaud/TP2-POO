#include <iostream>
#include <iomanip>

#include "duree.h"

using namespace std;

#define DUREE nsUtil::CDuree

void DUREE::normaliser (void)
{
    mySeconds = myDuree % 60;
    myDays = myDuree / 86400;
    myHours = (myDuree % 86400) / 3600;
    myMinuts = (myDuree % 3600) / 60;

} // normaliser ()

DUREE::CDuree (unsigned long long duree) : myDuree (duree)
{
    normaliser ();
    display ();
    cout << "créé" << endl;

} // Duree ()

DUREE DUREE::operator + (const CDuree & duree) const
{
    return DUREE (getDuree () + duree.getDuree ());

} // operator + ()

DUREE DUREE::operator - (const CDuree & duree) const
{
    if (getDuree () < duree.getDuree ())
        return 0;
    else
        return DUREE (getDuree () - duree.getDuree ());

} // operator - ()

bool DUREE::operator < (const DUREE & duree) const
{
    return (getDuree () < duree.getDuree ());

} //operator > ()

bool nsUtil::CDuree::operator ==(const nsUtil::CDuree &duree) const
{
    return (getDuree () == duree.getDuree ());

} // operator == ()

unsigned long long DUREE::getDuree (void) const
{
    return myDuree;

} // getDuree ()


void DUREE::display (void) const
{
    cout << '[' << setw (10) << myDays << ':'
         << setfill ('0') << setw (2) << myHours << ':'
                          << setw (2) << myMinuts << ':'
                          << setw (2) << mySeconds << ']'
         << setfill (' ') << endl;

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


#undef DUREE
