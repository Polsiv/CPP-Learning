#include <iostream>

using namespace std;

int main() {

int TotalG, TotalStud, TotalSub, TotalScore;
double score, AverageSubject, StudentAverage, GroupAverage, SumScore = 0, SumSubject = 0, SumStudent = 0, SumGroup = 0, TotalAverage;


cout << "Insert the  amount of groups" << endl;
cin >> TotalG;
cout << "Insert the  amount of students" << endl;
cin >> TotalStud;
  
cout << "Insert the  amount subjects for each student" << endl;
cin >> TotalSub;
  
cout << "Insert the  amount of score for each student" << endl;
cin >> TotalScore;
  
for ( int i = 1; i <= TotalG; i++) // groups for
{ 

  SumStudent = 0;
  for (int j = 1; j <=TotalStud; j++){ // Students for

    SumSubject = 0;
      for (int k = 1; k <= TotalSub; k++)
      { //Subject for

        SumScore = 0;
        for (int l = 1; l <= TotalScore; l++){  // Score for
          cout << " Insert the score " << l << " Of the Subject " << k << " Of the student" << j << " Of the Group " << i << endl;

          cin >> score;
        SumScore = SumScore + score;    
        }

        AverageSubject = AverageSubject / SumScore;

        cout << " The average of the subject " << k << " Of The student " << j << " Of the group " << i << " is: " << AverageSubject << endl;
SumSubject= SumSubject + AverageSubject ;
        
      }

    StudentAverage = SumSubject / TotalSub;
    cout << " The average of the subject Of The student" << j << " Of the group" << i << " is: " << StudentAverage << endl;

    SumStudent = SumStudent + StudentAverage;
     
    } 
 
  GroupAverage = SumStudent / TotalStud;
     cout << " The average of The students of the group " << i << "is: " << GroupAverage << endl;

  SumGroup = SumGroup + GroupAverage;
  }  

TotalAverage =  SumGroup / TotalG;

  cout << " The total average is " << TotalAverage << endl;
  
  }


