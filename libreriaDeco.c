#include "libreriaDeco.h"
#include "MKL2574"

int num[15][8] =
{
  { 1, 1, 1, 1, 1, 1, 0, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1, 0 }, // 2
  { 1, 1, 1, 1, 0, 0, 1, 0 }, // 3
  { 0, 1, 1, 0, 0, 1, 1, 0 }, // 4
  { 1, 0, 1, 1, 0, 1, 1, 0 }, // 5
  { 1, 0, 1, 1, 1, 1, 1, 0 }, // 6
  { 1, 1, 1, 0, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1, 0 }, // 8
  { 1, 1, 1, 0, 0, 1, 1, 0 } // 9
  { 1, 1, 1, 0, 1, 1, 1, 0 }
  { 0, 0, 1, 1, 1, 1, 1, 0 }
  { 1, 0, 0, 1, 1, 1, 0, 0 }
  { 0, 1, 1, 1, 1, 0, 1, 0 }
};
int pines[8] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int Deco(char pin1){
    switch (pin1)
    {
    case '0'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[0][i]u<<pines[i]);
    }
        break;
    case '1'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[1][i]u<<pines[i]);
    }
        break;
    case '2'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[2][i]u<<pines[i]);
    }
        break;
    case '3'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[3][i]u<<pines[i]);
    }
        break;
    case '4'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[4][i]u<<pines[i]);
    }
        break;
    case '5'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[5][i]u<<pines[i]);
    }
        break;
    case '6'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[6][i]u<<pines[i]);
    }
        break;
    case '7'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[7][i]u<<pines[i]);
    }
        break;
    case '8'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[8][i]u<<pines[i]);
    }
        break;
    case '9'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[9][i]u<<pines[i]);
    }
        break;
    case 'A'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[A][i]u<<pines[i]);
    }
        break;
    case 'B'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[B][i]u<<pines[i]);
    }
        break;
    case 'C'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[C][i]u<<pines[i]);
    }
        break;
    case 'D'
    for(int i = 0; i <= 8; i++){
        PTA -> PSOR|=(num[D][i]u<<pines[i]);
    }
        break;
    default:
        break;
    }
}