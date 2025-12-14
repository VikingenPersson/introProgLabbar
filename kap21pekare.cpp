#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <cctype>
#include <vector>
#include <array>

using namespace std;

void ovaPaPekarnotation(){
    double x = 1.0;

    double* pX = &x;
    double** ppX = &pX;
    double*** pppX = &ppX;

    ***pppX = 2;

    cout << "X är nu " << x;
}

void bytVarden(int* pA, int* pB){
    int x = *pA;
    *pA = *pB;
    *pB = x;
}

void pekareIN(){

}
