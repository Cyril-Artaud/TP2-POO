#ifndef DUREE_H
#define DUREE_H
namespace nsUtil
{
    class Duree
    {
        unsigned long long myDuree;
        unsigned long long myDays;
        unsigned short myHours;
        unsigned short myMinuts;
        unsigned short mySeconds;


        void normaliser (void);

    public :
        Duree (unsigned long long duree);
        Duree (const Duree & duree);
        ~Duree (void);

        Duree operator + (const Duree & duree);
        Duree operator - (const Duree & duree);

        unsigned long long getDuree (void) const;
        void display (void) const;

        void incr (unsigned long long delta);
        void decr (unsigned long long delta);

    }; // Duree

} // nsUtil

#endif // DUREE_H
