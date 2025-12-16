#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <cctype>
#include <vector>
#include <array>

using namespace std;

struct Datum{
    int m_ar;
    int m_manad;
    int m_dag;
};

struct Person{
    string m_namn;
    Datum m_fodelsedatum;
};

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

vector<Person> tomtenissar(vector<Person> v){
    vector<Person> tomtenissar{};
    for(size_t i = 0; i < v.size(); ++i){
        if(v[i].m_fodelsedatum.m_dag == 24 && v[i].m_fodelsedatum.m_manad == 12){
            tomtenissar.push_back(v[i]);
        }
    }
    return tomtenissar;
}

void Tenta20241210IN(){
    char a = 0;
    cout << a;
}
