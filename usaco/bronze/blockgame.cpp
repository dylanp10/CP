#include<bits/stdc++.h>
using namespace std;


int main() {

    ifstream fin("blocks.in");
    ofstream fout("blocks.out");

    int blocks;
    fin >> blocks;
    int letters[26] = {};
    for(int i = 0; i < blocks; i++){

        string word1;
        string word2;
        fin >> word1 >> word2;
        
        int count1[26] = {};
        int count2[26] = {};

        for(int j = 0; j < word1.size(); j++){
            count1[word1[j] - 'a']++;
        }
        for(int j = 0; j < word2.size(); j++){
            count2[word2[j]-'a']++;
        }

        for(int j = 0; j < 26; j++) {
            letters[j] += max(count1[j], count2[j]);
        }
        



    }

    for(int i = 0; i < 26; i++){
        fout << letters[i] << "\n";
    }
}