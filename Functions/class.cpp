#include <iostream>

using namespace std;

/*

int findmax (int, int)
;
int main() {

int first, second, idk;

  cout << "enter 1" << endl;
  cin>> first;
  cout << "enter 2" << endl;
  cin>> second;

 idk =findmax (first, second);
cout << idk;
  
}

int findmax (int firstn, int secondn)
{
  if (firstn > secondn){
    return firstn;
    
  } else {
    return secondn;
      
  }
}

============================================== */



/* ===============================================

//Default values

int findmax (int, int = 10)
;
int main() {

int first, second, idk;
  
  cout << "enter 1" << endl;
  cin>> first;
 
 idk =findmax (first);
cout << idk;
  
}

int findmax (int firstn, int secondn)
{
  if (firstn > secondn){
    return firstn;
        
  } else {
    return secondn;
          
  }
}

=============================================== */

/* =============================================


int findmax (int, int, int);
int findmax (int, int);

int main() {

int first, second, third, idk;
  
  cout << "enter 1" << endl;
  cin>> first;

    cout << "enter 2" << endl;
  cin>> second;

    cout << "enter 3" << endl;
  cin>> third;
 


  idk = findmax (first, second, third);
 cout << idk;

  
}



int findmax (int x, int y, int z){
  if (x > y && x > z){
return x;
    
    } else if  (y > x && y > z) {
    return y;
    } else if (z > x && z > y){
     return z;
    }
  } 


int findmax (int x, int y){
  if (x > y ) {
    cout << "first number is greater " << endl;
    
  } else {
     cout << "second number is greater " << endl;
    }
  }


==============================================*/
 


/*
void leak (std::string ip);

int main (){

string ip = "";
cout << "enter your ip!" << endl;
  cin >> ip;

leak(ip);
  
}

void leak (std::string ip2){
  cout << "Your ip is: " << ip2 << "!" << endl;
}

==============================================*/



/*

int add (int z, int x);


int main (){

int first = 0, second = 0;
  
  cout << "Enter the first number!" << endl;
  cin >> first;
  cout << "Enter the second number!" << endl;
  cin >> second;

add (first, second);  

  cout << "here is " << add(second,first);
}


int add (int z, int x){

  int sum;
sum = z + x;

  return sum;
  
};

==============================================*/

