#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> newset = {1, 2, 3, 4, 4, 1};
    
    //inserting new elements
    newset.insert(10);
    
    //erasing elements
    newset.erase(4);

    //finding elements

    if(newset.find(2) != newset.end()){

        cout << "Couldn't find 2" << endl;
    } else {
        
        cout << "2 has been found" << endl;
    }

    for (auto itr = newset.begin(); itr != newset.end(); ++itr){
        cout << *itr << endl; // it doesn't add an element that already exist
    }

    
    
    return 0;

}