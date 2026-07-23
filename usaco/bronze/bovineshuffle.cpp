#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("shuffle.in");
    ofstream fout("shuffle.out");

    int numcow;
    fin >> numcow;

    vector<int> shuffle(numcow);
    for (int i = 0; i < numcow; i++) {
        fin >> shuffle[i];
    }

    vector<int> cows(numcow);
    for (int i = 0; i < numcow; i++) {
        fin >> cows[i];
    }

    for (int k = 0; k < 3; k++) {
        vector<int> prev(numcow);

        for (int i = 0; i < numcow; i++) {
            prev[i] = cows[shuffle[i] - 1];
        }

        cows = prev;
    }

    for (int i = 0; i < numcow; i++) {
        fout << cows[i] << '\n';
    }
}