#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    int bucket1, amount1, bucket2, amount2, bucket3, amount3;
    fin >> bucket1 >> amount1 >> bucket2 >> amount2 >> bucket3 >> amount3;

    for(int i = 0; i < 100; i++){

        if(i%3 == 0){

            if(amount1 + amount2 > bucket2){
                int leftover = amount1 + amount2 - bucket2;
                amount2 = amount1+amount2 - leftover;
                amount1 = leftover;

            } else {
                amount2 = amount1+amount2;
                amount1 = 0;
            }

                
        }

        if(i%3 == 1){

            if(amount2 + amount3 > bucket3){
                int leftover = amount2 + amount3 - bucket3;
                amount3 = amount2+amount3 - leftover;
                amount2 = leftover;

            } else {
                amount3 = amount2+amount3;
                amount2 = 0;
            }

                
        }
        if(i%3 == 2){

            if(amount3 + amount1 > bucket1){
                int leftover = amount3 + amount1 - bucket1;
                amount1 = amount3+amount1 - leftover;
                amount3 = leftover;

            } else {
                amount1 = amount3+amount1;
                amount3 = 0;
            }

                
        }
    }

    fout << amount1 << "\n" << amount2 << "\n" << amount3;

}