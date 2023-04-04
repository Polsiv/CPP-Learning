#include <iostream>
using namespace std;
int main() {

//Setting Variables==================================

int bogota = 150000, medellin = 200000, cartagena = 300000, raw, column, counter = 1, totalchairs = 48, customerschairs, question;  

  string normalname = " ", normallastname = " ";
  int normalid;
  
  string name=" ", lastname =" ";
  int id;

  int vipUser, trip, common, total;
 
  string VipUserInfo[3][3];


  string Chair[14][5] = 
{ 
  
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "e", "e", "p", "e", "e",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "o", "o", "p", "o", "o",
  "e", "e", "e", "e", "e"
  
  };
  
  int opc;

  

//Main program======================================
  do {

    cout << "=============================\n";
    cout << "---Welcome to Avianza Air!---\n";
    cout << "1. VIP Clients \n";
    cout << "2. Air Tickets selling \n";
    cout << "3. Exit\n";
    
    
    cout << "Choice any option you want!\n";
    cout << "=============================\n";
    cin >> opc;
    
    
    switch(opc){
        
      case 1: cout << "Welcome to the VIP section!, Enter the total vip members you want.\n";

    cin >> vipUser;

for (int i = 0 ; i < vipUser ; i++){

  cout << "Enter your name" << endl;
  cin >> name;

 VipUserInfo[i][0]=name;
  
  cout << "Enter your last name " << endl;
  cin >> lastname;

   VipUserInfo[i][1]=lastname;

  
  cout << "Enter your ID Number" << endl;
  cin >> id;
     VipUserInfo[i][1]=id;
  
}
       break;

//Vip section done ==================================

      
      case 2: cout << "Air Tickets\n";

        cout << "The current offers we have: " << endl;
        cout << "Keep in mind there's 2 types, 1 is for a simple trip, 2 is for back and forth and that means the total amount of the tickets doubles." << endl;

        cout << " 1) Cali-Bogotá = $150.000" << endl;
         cout << " 2) Cali-Medellín = $200.000" << endl;
         cout << " 3) Cali-Cartagena = $300.000" << endl;

        cout << "Choose the option you want : " << endl;
cin >> trip;

       if (trip == 1) {
         cout << "Want it to be type 1 or type 2?" << endl;

        cin >> common;
         switch (common){
           case 1: 
           break;
           case 2: total = bogota * 2; 
           
         }
       }
       else if (trip == 2) {
         cout << "Want it to be type 1 or type 2?" << endl;

        cin >> common;
         switch (common){
           case 1: {
           break;
           case 2: total = medellin * 2; 

         }
       
       if (trip == 3) {
         cout << "Want it to be type 1 or type 2?" << endl;

        cin >> common;
         switch (common)case 1: 
           break;
           case 2: total = cartagena * 2;       
         }
       }

cout << "Here´s a preview of the chairs " << endl;

          for (int fil = 0; fil < 14; fil ++){8_* &
    cout << "\n";
    for (int col = 0; col < 5; col ++){
      cout << Chair [fil][col] << " ";
     
        
          }   
      }  cout << endl;  

// Chair section================================= 

        cout << "Enter the total people who goint to travel, rememeber there's only 48 spots!" << endl;
cin >> customerschairs;
        
      
        do{
        cout<<"Choose your chair!"<<endl;
      cout<<"Choose your raw"<<endl;
      cin>>raw;
      cout<<"Choose your column"<<endl;
      cin>>column;
      if(Chair[raw][column]=="x"){
      cout<<"Chair already busy!"<<endl;
      }  else if(Chair[raw][column]=="e"){
        cout<<"This is an emergency exit!"<<endl;
      }    else if(Chair[raw][column]=="p"){
        cout<<"This is the Hallway"<<endl;
      }    else{
        Chair[raw][column]="x";
        counter++;
      }
        for(int fil=0; fil<14; fil++){
        cout<<"\n";
        for(int col=0; col<5; col++){
          cout<<Chair[fil][col];
        }  
      }cout<<endl;
      }while(counter<=customerschairs);
        
      
          
  break;
// End chair section=================================         
        
     
cout << "Are you a VIP member?" << endl;

cout << "1 for No, 2 for Yes" << endl;

      cin >> question;
      
     switch (question){

       case 1: {

      cout << "What's your name " << endl;
       cin >> normalname;
       
      cout << "What's your last name " << endl;
       cin >> normallastname;
       
      cout << "What's id" << endl;
       cin >> normalid;
       
     cout << "The amount of money to pay is: " << customerschairs*common;
           } 

      case 3: cout << "Successfully\n"; 
      opc = 0;
      break;
      
    } 
    
  } while ( opc != 0);

  return 0;
}
