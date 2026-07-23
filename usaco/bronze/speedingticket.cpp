#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("speeding.in");
    ofstream fout("speeding.out");

    int numroad;
    fin >> numroad;
    int numbessie;
    fin >> numbessie;

    vector<int> rseg;
    vector<int> rspeed;
    for (int i = 0; i < numroad; i++){
         
        int temp;
        fin >> temp;
        rseg.push_back(temp);
        fin >> temp;
        rspeed.push_back(temp);

    }

    vector<int> bseg;
    vector<int> bspeed;

    for(int i = 0; i < numbessie; i++){

        int temp;
        fin >> temp;
        bseg.push_back(temp);
        fin >> temp;
        bspeed.push_back(temp);
        
    }

    for(int i = 1; i < rseg.size(); i++){
        rseg[i] = rseg[i] + rseg[i-1];
    }

    for(int i = 1; i < bseg.size(); i++){

        bseg[i] = bseg[i] + bseg[i-1];
    }

    int rcurrent = 0;
    int bcurrent = 0;

    int maxspeeddif = 0;
    for (int i = 0; i < 100; i++){

        if(i >= rseg[rcurrent])
            rcurrent++;
        
        if(i >= bseg[bcurrent])
            bcurrent++;

        if(bspeed[bcurrent] > rspeed[rcurrent]){
            maxspeeddif = max(maxspeeddif, bspeed[bcurrent] - rspeed[rcurrent]);
        }
    }

    fout << maxspeeddif;
}