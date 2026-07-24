#include<bits/stdc++.h>
using namespace std;


int main(){

    ifstream fin ("diamond.in");
    ofstream fout ("diamond.out");

    int n, k;
    fin >> n >> k;

    vector<int> size(n);
    for(int i = 0; i < n; i++){
        
        fin >> size[i];


    }

    int maxnum = 0;

    for(int i = 0; i < n; i++){

        int start = size[i];
        int counter = 0;

        for(int j = 0; j < n; j++){

            if(   size[j] >= start && size[j] <= start+k    ){
                counter++;
            }
        }
        
        maxnum = max(maxnum, counter);
    }

    fout << maxnum;



}