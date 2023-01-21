//source video: https://www.youtube.com/watch?v=7mwgA9XFIEQ&list=PLzMcBGfZo4-lmGC8VW0iu6qfMHjy7gLQ3&index=17&t=1066s&ab_channel=TechWithTim

#include <iostream>
#include <map>

using namespace std;
int main(){

map<char, int> NewMap = {
    {'T', 2}, // <- that's a pair
    {'A', 3},
    {'H', 5},
};

//Adding new item to the map=================

NewMap['G'] = 9;

//Adding new keys to the map===============

NewMap.insert(pair<char, int>('S', 29));

//Another way=============================

pair<char, int> pair1('K', 19);

NewMap.insert(pair1);

cout << NewMap['K'] << endl;

//Pair atributes ========================== 

cout << pair1.first << endl;
cout << pair1.second << endl;

//Deleting keys from maps======

NewMap.erase(pair1.first);

cout << NewMap['K'] << endl;

//Clearing the Map =============

/*NewMap.clear();

Then check if the map is empty

NewMap.empty(); return 1 if true, else 0

=============================*/

cout << NewMap.size(); //Gives the amount of pairs

return 0;
}