#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main() {

    ifstream fin("teleport.in");
    ofstream fout("teleport.out");

    int a,b,x,y;
    fin >> a >> b >> x >> y;

    int teleporter;

    int starttotel = x-a;
    if(starttotel < 0) 
        starttotel = starttotel*-1;

    int teltoend = y-b;
    if(teltoend <0)
        teltoend = teltoend*-1;
    
    teleporter = starttotel + teltoend;

    int teleporter2;

    int starttotel2 = y-a;
    if(starttotel2 < 0)
        starttotel2 = starttotel2*-1;

    
    int teltoend2 = x-b;
    if(teltoend2 <0)
        teltoend2 = teltoend2*-1;

    teleporter2 = starttotel2 + teltoend2;

    int straight = a - b;
    if(straight < 0)
        straight = straight * -1;

    int answer = min(straight, min(teleporter, teleporter2));


    fout << answer <<'\n';

     
}