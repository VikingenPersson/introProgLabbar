#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <cctype>
#include <vector>
#include <array>

using namespace std;

string taggstrang1(int numberOfhash){
    string hash = "";
    for(int i = 0; i < numberOfhash; ++i){
        hash += "#";
    }
    return hash;
}

string taggstrang2(int numberOfhash){
    string hash = "";
    for(int i = 0; i < numberOfhash; ++i){
        hash += "# ";
    }
    hash.pop_back();
    return hash;
}

int antalInomIntervall(const vector<int>& vek, int a, int b){
    int count = 0;
    for(size_t i = 0; i < vek.size(); ++i){
        if(vek[i] >= a && vek[i] < b){
            count += 1;
        }
    }
    return count;
}



void Tenta20241210IN(){
    vector<int> v = {1,2,3,4,5,6};
    cout << antalInomIntervall(v,1,6);
}
