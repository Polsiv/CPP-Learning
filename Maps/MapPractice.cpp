//Iterating through maps

#include <iostream>
#include <map>

using namespace std;
int main(){

/*
map<char, int> NewMap = {
    {'T', 2}, // <- that's a pair
    {'A', 3},
    {'H', 5},
};

for (auto itr = NewMap.begin(); itr != NewMap.end(); ++itr){
    cout << itr->first << endl;
}*/

string test = "OMG IHIHIHIHIHIHIHIIHI OMH THIS ISS ATRING ";

map <char, int > newMap;

for (int i = 0; i < test.length(); ++i){
    char letter = test[i];
    
    if (newMap.find(letter) == newMap.end()){
        newMap[letter] = 0;
    }
    
    newMap[letter]++;
    //cout << newMap[letter] << ", " << letter << endl;

    }

    for (auto itr = newMap.begin(); itr != newMap.end(); ++itr){

        cout << itr->first << ": " << itr->second << endl;
    }

}