#include "MKL2574.h"
#define pin 9
bool est = true;
int cont = 0;
int pines1[4] = {1, 2, 3, 4};
int pines2[4] = {5, 6, 7, 8};
int num[15][4] =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 1, 1},
        {0, 1, 0, 0},
        {0, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 1},
        {1, 0, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };
int main()
{
    while (1)
    {
        if (pin = est)
        {
            for (int e = 0; e <= 9; e++)
            {
                for (int i = 0; i <= 4; i++)
                {
                    PTA->PSOR |= (num[e][i] u << pines1[i]);
                }
                if (e == 9)
                {
                    e = 0;
                    cont++;
                    for (int i = 0; i <= 4; i++)
                    {
                        PTA->PSOR |= (num[cont][i] u << pines2[i]);
                    }
                }
            }
        }
        else
        {
            for (int e = 9; e >= 0; e--)
            {
                for (int i = 0; i <= 4; i++)
                {
                    PTA->PSOR |= (num[e][i] u << pines1[i]);
                }
                if (e == 0)
                {
                    e = 9;
                    cont--;
                    for (int i = 0; i <= 4; i++)
                    {
                        PTA->PSOR |= (num[cont][i] u << pines2[i]);
                    }
                }
            }
        }
    }
}
