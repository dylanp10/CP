#include<bits/stdc++.h>
using namespace std;



int main() {

    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");

    int rows, cols, scale;
    fin >> rows >> cols >> scale;

    vector<string> unscaled;

    for(int i = 0; i < rows; i++){

        string row;
        fin >> row;
        unscaled.push_back(row);

    }

    vector<string> scaled;
    for(int i = 0; i < unscaled.size(); i++){
        string enlarged;

        for(int j = 0; j < cols; j++){

            for(int k = 0; k < scale; k++){
                enlarged += unscaled[i][j];
            }



        }

        scaled.push_back(enlarged);

    }
    
    for(int i = 0; i < scaled.size(); i++){
        for(int j = 0; j < scale; j++) {

            fout << scaled[i] << "\n";
        }
    }




}