#include <iostream>
#include <vector>

using namespace std;

int main(){

vector <int> newvector = {1, 2, 3};

cout << newvector[2] << endl; // .front() for first element .back() for last element
cout << newvector.size() << endl;

newvector.push_back(10);
cout << newvector.capacity() << endl; // it dobles once we add a new element

newvector.pop_back(); //it removes the last element 
cout << newvector.size() << endl;
    

newvector.shrink_to_fit(); //it shrinks the capacity of the vector equal to the size


//===========================Insert elements=============================

vector <int> newvector1 = {1, 2, 3, 4};

newvector1.insert(newvector1.begin(), 5);

cout << newvector1[0];

newvector1.erase(newvector1.end());

//iterating through vectors

for (int i = 0; i < newvector1.size(); ++i){
    //cout << newvector1[i] << endl;
}

for (auto itr = newvector1.begin(); itr != newvector1.end(); ++itr){
//cout << *ïtr << endl;
}


return 0;

}