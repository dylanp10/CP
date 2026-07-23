#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("promote.in");
    ofstream fout("promote.out");

    int bb, ba, sb, sa, gb, ga, pb, pa;
    fin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;

    int goldtoplat = pa - pb;
    int silvertogold = ga - gb + goldtoplat;
    int bronzetosilver = sa - sb + silvertogold;

    fout << bronzetosilver << "\n" << silvertogold << "\n" << goldtoplat << "\n";
    



}