#include <string>
#include <iostream>
#include "function-4-1.h"

BusCounter::BusCounter(int cap)
{
    int capacity = cap;
    bus_count = 0;
}

void BusCounter::board()
{
    if (bus_count < capacity)
    {
        bus_count++;
    }
    else
    {
        bus_count = capacity;
    }
}

void BusCounter::exit()
{
    if(bus_count > 0)
    {
        bus_count--;
    }
}

int BusCounter::get_count()
{
    return (bus_count);
}