#include<bits/stdc++.h>
using namespace std;

int main() {

    int points;
    cin >> points;

    vector<int> x(points);
    vector<int> y(points);

    for(int i = 0; i < points; i++){

        cin >> x[i];
    }
    for(int i = 0; i < points; i++){

        cin >> y[i];
    }


    long long maxdist = 0;
    for (int i = 0; i < points; i++){
        long long distance = 0;

        for(int j = i+1; j < points; j++ ){
            distance = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);

            maxdist = max(maxdist, distance);

        }


    }

    cout << sqrt((double)maxdist);




}
