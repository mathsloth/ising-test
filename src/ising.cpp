#include <iostream>
using namespace std;
#include <cstdlib>
#include "ising.h"


Ising:: Ising(int mm, int nn)
{
		m = mm;
    n = nn;
    lattice = new int [m*n];

		for (int i = 0; i < m*n; i++)
		{
			lattice[i] = 0;
		}
}


