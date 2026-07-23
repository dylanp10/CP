#include<bits/stdc++.h>
using namespace std;


int main() {

    ifstream fin ("lostcow.in");
    ofstream fout ("lostcow.out");

    int bessie, johninitial;
    fin >> johninitial >> bessie;
    int john = johninitial;

    int steps = 0;
    int maxdist = 1;
    int direction = 1;

    while(john != bessie){

        john = john + direction;
        steps++;
        if(john == johninitial + maxdist){
            maxdist = maxdist * -2;
            direction = direction * -1;
        }




    }

    fout << steps;

}