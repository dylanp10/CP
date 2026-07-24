#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin ("pails.in");
    ofstream fout ("pails.out");

    int x, y, m;
    fin >> x >> y >> m;

    int maxm = 0;

    for(int i = 0; i < m/x + 1; i++){
        int current = i*x;
        int diff = m - current;
        current = current + (diff/y) * y;

        maxm = max(maxm, current);

    }

    fout << maxm;


}