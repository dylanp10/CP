#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin ("blist.in");
    ofstream fout ("blist.out");

    int numcow;
    fin >> numcow;

    vector<int> cowstart(numcow);
    vector<int> cowend(numcow);
    vector<int> cowbuck(numcow);

    for(int i = 0; i < numcow; i++){
        fin >> cowstart[i] >> cowend[i] >> cowbuck[i];
    }

    
    int maxbuck = 0;

    for(int i = 0; i <= 1000; i++){
    int curbuck = 0;

        for(int j = 0; j < numcow; j++){

            if(cowstart[j] <= i && cowend[j] >= i)
                curbuck = curbuck + cowbuck[j];
        }

    maxbuck = max(maxbuck, curbuck);

    }

    fout << maxbuck;

}