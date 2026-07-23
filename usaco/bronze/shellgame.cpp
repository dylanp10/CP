#include<bits/stdc++.h>
using namespace std;


int main() {

    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int swaps;
    fin >> swaps;




    vector<int> swap1;
    vector<int> swap2;
    vector<int> guess;

    for (int i = 0; i < swaps; i++){

        int a, b, g;
        fin >> a >> b >> g;
        swap1.push_back(a);
        swap2.push_back(b);
        guess.push_back(g);

    }




    int best = 0;

    for(int start = 0; start < 3; start++){
        vector<int> shells = {0, 0, 0};
        shells[start] = 1;

        int score1 = 0;

        for (int i = 0; i < swaps; i++){



            int intermediate =   shells[swap1[i] - 1];
            shells[swap1[i] - 1] = shells[swap2[i] - 1];
            shells[swap2[i] - 1] = intermediate;


            if(shells[guess[i] - 1] == 1)
                score1++;

        }

        best = max(best,score1);


    }




    fout << best;

}