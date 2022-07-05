#include <iostream>

int lookup_fishing_fine(int over)
{
    int outcome;
    if (over <= 0)
    {
        outcome = 0;
        return (0);
    }
    else if ((over > 0) && (over < 10))
    {
        outcome = 180;
        return (180);
    }
    else if ((over >= 10) && (over < 20))
    {
        outcome = 406;
        return (406);
    }
    else if ((over >= 20) && (over < 30))
    {
        outcome = 825;
        return (825);
    }
    else if ((over >= 30) && (over < 45))
    {
        outcome = 1500;
        return (1500);
    }
    else if (over >= 45)
    {
        outcome = 1690;
        return (1690);
    }
    return (outcome);
}