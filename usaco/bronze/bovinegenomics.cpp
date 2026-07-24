#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin ("cownomics.in");
    ofstream fout ("cownomics.out");

    int n, m;
    fin >> n >> m;

    vector<string> cows(2*n);
    for(int i = 0; i < 2*n; i++){
        fin >> cows[i];
    }

    int answer = 0;

    for(int pos = 0; pos < m; pos++){
        vector<char> genomesspot;

        for(int i = 0; i < n; i++){
            genomesspot.push_back(cows[i][pos]);
        }

        vector<char> genomesnospot;

        for(int i = n; i < 2*n; i++){
            genomesnospot.push_back(cows[i][pos]);
        }

        bool possible = true;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){


                if(genomesspot[i] == genomesnospot[j]){
                    possible = false;
                }
            }
        }

        if(possible)
            answer++;

        
    }

    fout << answer;
}  