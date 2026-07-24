#include<bits/stdc++.h>
using namespace std;


int main(){

    int flowers;
    cin >> flowers;

    vector<int> petals(flowers);
    for(int i = 0; i < flowers; i++){
        cin >> petals[i];

    }
    int counter = 0;
    for(int i = 0; i < flowers; i++){
        for(int j = i; j < flowers; j++){

            int total = 0;
            for(int k = 0; k < j-i+1; k++){
                total = total + petals[i+k];
            }
            double avg = total/(double)(j-i+1);

            bool found = false;
            for(int k = 0; k < j-i+1; k++){
                if(avg == petals[i+k])
                    found = true;
            }

            if(found)
                counter++;

        }
    }

    cout << counter;


}

