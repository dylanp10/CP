#include<bits/stdc++.h>
using namespace std;

int main() {

    int cows;
    cin >> cows;
    
    vector<char> direction(cows);
    vector<int> amount(cows);

    for(int i = 0; i < cows; i++){
        cin >> direction[i] >> amount[i];
    }

    int maxtrue = 0;
    for(int i = 0; i < cows; i++){
        int temptrue = 0;
        if(direction[i] == 'G'){
            for(int j = 0; j < cows; j++){

                if(direction[j] == 'G' && amount[j] <= amount[i]){
                    temptrue++;
                }
                if(direction[j] == 'L' && amount[j] >= amount[i]){
                    temptrue++;
                }


            }


        }

        if(direction[i] == 'L'){
            for(int j = 0; j < cows; j++){


                if(direction[j] == 'G' && amount[j] <= amount[i]){
                    temptrue++;
                }
                if(direction[j] == 'L' && amount[j] >= amount[i]){
                    temptrue++;
                }
            }
        }
        maxtrue = max(maxtrue, temptrue);
    }

    cout << cows - maxtrue;


}