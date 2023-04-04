#include <iostream>

/*======================================================PROBLEM 1!

void findrange(int a, int b);

int main() {

  int x, y;

  std::cout << "Enter the first number!" << std::endl;
  std::cin >> x;
  std::cout << "Enter the second number!" << std::endl;
  std::cin >> y;

  findrange(x, y);
}

void findrange(int a, int b) {
  while (a <= b) {
    std::cout << a;
    std::cout << "\n";
    a++;
  }
}
*/

/*======================================================PROBLEM 2!

#include <iostream>
#include <cmath>

void volume(double x, double y);
void area(double x, double y);

int main()
{

    double radius, height;
    char choice;

    std::cout << "Enter the radius!" << std::endl;
    std::cin >> radius;
    std::cout << "Enter the height!" << std::endl;
    std::cin >> height;

    std::cout << "Enter what you want to calculate!" << std::endl;
    std::cout << "Type V for volume, or A for area." << std::endl;

    std::cin >> choice;

    switch (choice)
    {
    case 'A':

        area(radius, height);

        break;

    case 'V':

        volume(radius, height);

        break;

    default:

        std::cout << "You didn't enter a correct choice!" << std::endl;

        break;
    }
}

void volume(double x, double y)
{

    double volume;

    volume = (M_PI)*pow(x, 2) * y;

    std::cout << "The volume is: " << volume;
}

void area(double x, double y)
{

    double area;

    area = (2 * M_PI * x * y) + (2 * M_PI * pow(x, 2));
    std::cout << "The area is: " << area;
}

*/

/*======================================================PROBLEM 3 (sí, literal es código copiado, Alejo me pasó este solamente, enserio perdón :(

)
#include <iostream>
using namespace std;
int maxi=1, mini=0;
void mcm(int);
void mcd(int);
int main() {
  int n1=0, n2=0, n3=0, op=0;
  bool apa=true;
  do{
    cout<<"Ingrese una opción:"<<endl;
    cout<<"1. hallar el mcm"<<endl;
    cout<<"2. hallar el mcd"<<endl;
    cin>>op;
    switch(op){
      case 1:
      mcm(op);
      apa=false;
      break;
      case 2:
      mcd(op);
      apa=false;
      break;
      default:
      cout<<"No existe esa opción"<<endl;
    }
  }while(apa);
}  
void mcd(int n1){
  int cant=0, i=0, num=0, mcod=0, res=0;
  cout<<"Ingrese la cantidad de números: ";
  cin>>cant;
  for(i=1;i<=cant;i++){
    cout<<"Número "<<i<<": ";
    cin>>num;
    if(i==1){
      mcod=num;
    }else{
      do{
        res=mcod%num;
        if(res!=0){
          mcod=num;
          num=res;
        }else{
          mcod=num;
        }
      }while(res!=0);
    }
  }
  cout<<"El mcd es: "<<mcod<<endl;
}
void mcm(int n1){
  int numero;
    int residuo, mcm, i, n;
    int producto;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcm = numero;
            producto = numero;
        }
        else
        {
            producto = mcm * numero;

            do
            {
                residuo = mcm % numero;
                mcm = numero;
                numero = residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
    }

    printf("El mcm es: %d\n", mcm);

    getchar();
    getchar();
}

*/

/* =============================================== PROBLEM 1
#include <iostream>

struct Employed
{

  std::string name;
  std::string address;
  int code;
  double salary;
  std::string Date_of_birth;
};

void Request(Employed list[]);
 void PrintEmployed(Employed list[]);

int main()
{

  Employed list[1];
  Request(list);
  PrintEmployed(list);

  return 0;
};

void Request(Employed list[])
{

  for (int i = 0; i < 1; i++)
  {

    std::cout << "Enter your name " << std::endl;
    std::cin >> list[i].name;

    std::cout << "Enter your address" << std::endl;
    std::cin >> list[i].address;

    std::cout << "Enter your code " << std::endl;
    std::cin >> list[i].code;

    std::cout << "Enter your salary " << std::endl;
    std::cin >> list[i].salary;

    std::cout << "Enter your date of birth " << std::endl;
    std::cin >> list[i].Date_of_birth;
  }
}

void PrintEmployed(Employed list[])
{

  for (int i = 0; i < 1; i++)
  {
    std::cout << list[i].name << std::endl;
    std::cout << list[i].address<< std::endl;
    std::cout << list[i].code << std::endl;
    std::cout << list[i].salary << std::endl;
    std::cout << list[i].Date_of_birth << std::endl;
  }
};

*/

/* *======================================================PROBLEM  2
#include <iostream>
int numberBasketball, numberFootball;
struct Soccer
{
  std::string team_name;
  int wins;
  int loses;
  int Ties;
  int cool_goals;
  int pepega_goals;
  std::string goal_scorer;
  int goals_goal_scorer;

};
 struct Basketball
{
  std::string team_name;
  int wins;
  int loses;
  int ball_loses;
  int rebounds_captured;
  std::string triple_shooter;
  int tripleshooternumber;
};

void showFootballData(Soccer[]);
void showBasketData(Basketball[]);
void requestBasketData(Basketball[]);
void requestFootballData(Soccer[]);

int main()
{

  std::cout << "Enter the amount of Basketball teams!" << std::endl;
  std::cin >> numberBasketball;
  std::cout << "Enter the amount of Fotball teams!" << std::endl;
  std::cin >> numberFootball;

  Soccer list[numberFootball];
  Basketball list2[numberBasketball];

  requestFootballData(list);
  showFootballData(list);
  requestBasketData(list2);
  showBasketData(list2);

      return 0;
};

void requestBasketData(Basketball x[])
{

  for (int i = 0; i < numberBasketball; i++)
  {

    std::cout << "Enter the Basketball team's name" << std::endl;
    std::cin >> x[i].team_name;
    std::cout << "Enter the amount of wins" << std::endl;
    std::cin >> x[i].wins;
    std::cout << "Enter the amount of lost games" << std::endl;
    std::cin >> x[i].loses;
    std::cout << "Enter the amount the teams has lost the ball" << std::endl;
    std::cin >> x[i].ball_loses;
    std::cout << "Enter the amount of rebounds captured" << std::endl;
    std::cin >> x[i].rebounds_captured;
    std::cout << "Enter the player with most triples done" << std::endl;
    std::cin >> x[i].triple_shooter;
    std::cout << "Enter the amount of triples they done" << std::endl;
    std::cin >> x[i].tripleshooternumber;
  }
}

void showBasketData(Basketball x[])
{

  for (int i = 0; i < numberBasketball; i++)
  {

    std::cout << "The team named: " << x[i].team_name << " Has won: " << x[i].wins << " Has lost: " << x[i].loses << " Has lost the ball " << x[i].ball_loses << " times, the amount of rebounds captured was: " << x[i].rebounds_captured << ", " << x[i].triple_shooter << " was the player with most triple shows, with a total of: " << x[i].tripleshooternumber << std::endl;
  }
}

void requestFootballData(Soccer x[])
{

  for (int i = 0; i < numberFootball; i++)
  {
    std::cout << "Enter the Football team's name" << std::endl;
    std::cin >> x[i].team_name;
    std::cout << "Enter the amount of wins" << std::endl;
    std::cin >> x[i].wins;
    std::cout << "Enter the amount of loses" << std::endl;
    std::cin >> x[i].loses;
    std::cout << "Enter the amount of ties" << std::endl;
    std::cin >> x[i].Ties;
    std::cout << "Enter the amount of goals" << std::endl;
    std::cin >> x[i].cool_goals;
    std::cout << "Enter the amount of autogoals" << std::endl;
    std::cin >> x[i].pepega_goals;
    std::cout << "Enter the player with most goals" << std::endl;
    std::cin >> x[i].goal_scorer;
    std::cout << "Enter the amount of goals they made" << std::endl;
    std::cin >> x[i].goals_goal_scorer;
  }
}

void showFootballData(Soccer x[])
{

  for (int i = 0; i < numberFootball; i++)
  {

    std::cout << "The team named: " << x[i].team_name << " Has won: " << x[i].wins << " Has lost: " << x[i].loses << " Has lost tied" << x[i].Ties << " the amount of goals was: " << x[i].cool_goals << ", the amount of autogoals was: " << x[i].pepega_goals << " the player with most goals was: " << x[i].goal_scorer << " with a total of: " << x[i].goals_goal_scorer << std::endl;
  }
}

*/


/*================================================================= PROBLEM 3

#include <iostream>

int size = 10;

struct Player
{

  std::string PlayerName;
  int PlayerHeight;
  int Age;
};

void requestPlayersData(Player[]);
void showPlayersData(Player[]);

int main()
{

  Player list[10];
  requestPlayersData(list);
  showPlayersData(list);

  return 0;
}

void requestPlayersData(Player x[])
{

  for (int i = 0; i < size; i++)
  {

    std::cout << "Enter the name of the player #" << i + 1 << std::endl;
    std::cin >> x[i].PlayerName;
    std::cout << "Enter the height of the player #" << i + 1 << std::endl;
    std::cin >> x[i].PlayerHeight;
    std::cout << "Enter the age of the player #" << i + 1 << std::endl;
    std::cin >> x[i].Age;
  }
}

void showPlayersData(Player x[])
{
  int choice;

  std::cout << "Enter the number to display the information you need!" << std::endl;

  std::cout << "1) For names. 2) For heights. 3) For ages." << std::endl;

  std::cin >> choice;

  switch (choice)
  {
  case 1:

    std::cout << "Here's the name list." << std::endl;

    for (int i = 0; i < 10; i++)
    {

      std::cout << x[i].PlayerName << std::endl;
    }
    break;

  case 2:
    std::cout << "Here's the height list." << std::endl;

    for (int i = 0; i < 10; i++)
    {

      std::cout << x[i].PlayerHeight << std::endl;
    }

    break;

  case 3:
    std::cout << "Here's the age list." << std::endl;

    for (int i = 0; i < 10; i++)
    {

      std::cout << x[i].Age << std::endl;
    }

    break;

  default:
    std::cout << "You didn't enter a correct value." << std::endl;
    break;
  }
}

*/


/*=================================================================PROBLEM 1

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

struct Inventory
{
    std::string NumPart;
    int start;
    int sold;
    int min;
};

int main()
{

    Inventory inv[4];

    std::string newfile = "inventory.txt";
    std::ifstream file(newfile);

    for (int i = 0; i < 4; i++)
    {

        file >> inv[i].NumPart;
        file >> inv[i].start;
        file >> inv[i].sold;
        file >> inv[i].min;
    }

    int actualB[4];

    for (int i = 0; i < 4; i++)
    {

        std::cout << inv[i].NumPart << std::endl;
        actualB[i] = (inv[i].start - inv[i].sold);

        std::cout << "Current balance is:" << actualB[i] << std::endl;
        std::cout << "The remaining to reach the lowest quantity is: " << (inv[i].min - actualB[i]) << std::endl;
    }
}

*/

/*=======================================PROBLEM 2 (Creo que se verá mal, pero igual le tomé screenshot para que observes cómo se me ve a mí.)
  #include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

struct Employ
{

    std::string name;
    double rate;
    int hours;
};

int main()
{

    Employ employes[4];

    std::string newfile = "employers.txt";
    std::ifstream file(newfile);
    double normalPayment[4], ExtraTimePayment[4], LastPayment[4];

    for (int i = 0; i < 4; i++)
    {

        file >> employes[i].name;
        file >> employes[i].rate;
        file >> employes[i].hours;

        normalPayment[i] = (employes[i].rate * employes[i].hours);

        if (employes[i].hours > 40)
        {

            ExtraTimePayment[i] = (employes[i].hours - 40) * (employes[i].rate * 1.5);
        }
        else if (employes[i].hours <= 40)
        {
            ExtraTimePayment[i] = 0;
        }

        LastPayment[i] = normalPayment[i] + ExtraTimePayment[i];
    }

    std::cout << "----Nombre----"   
              << " ----Tarifa---- "
              << " ----Pago regular---- "
              << " ----Pago tiempo extra---- "
              << " ----Pago bruto----" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << employes[i].name << "\t\t";
        std::cout << employes[i].rate << std::setw(14);
        std::cout << normalPayment[i] << std::setw(23);
        std::cout << ExtraTimePayment[i] << std::setw(30);
        std::cout << LastPayment[i] << std::setw(30) << "\n";
    }
}

*/
