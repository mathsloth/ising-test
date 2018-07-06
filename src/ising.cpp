#include <iostream>
using namespace std;
#include <cstdlib>
#include "ising.h"


Ising:: Ising(int mm, int nn)
{
		m = mm;
    n = nn;
    lattice = new int [m*n];
}


