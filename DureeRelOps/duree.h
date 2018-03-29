#ifndef DUREE_H
#define DUREE_H
namespace nsUtil
{
    class CDuree
    {
        unsigned long long myDuree;
        unsigned long long myDays;
        unsigned short myHours;
        unsigned short myMinuts;
        unsigned short mySeconds;


        void normaliser (void);

    public :
        CDuree (unsigned long long duree = 0);

        CDuree operator + (const CDuree & duree) const;
        CDuree operator - (const CDuree & duree) const;
        bool operator < (const CDuree & duree) const;
        bool operator == (const CDuree & duree) const;

        unsigned long long getDuree (void) const;
        void display (void) const;

        void incr (unsigned long long delta);
        void decr (unsigned long long delta);

    }; // Duree

} // nsUtil

#endif // DUREE_H
