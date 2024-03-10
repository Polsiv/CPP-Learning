#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class InputManager {
    public:
    vector<string> read_file(string file_name){        

        vector <string> passwords;
        string password;
        ifstream read;

        read.open(file_name);
        while (read >> password){
            passwords.push_back(password);
        }
        passwords.erase(passwords.begin());
        return passwords;
    }
};

class ResultPrinter{
  public:
    void show_results(){
    std::cout << "sup";
    }
};

class PassWordValidator{
  public:
  vector <string> validate_password(vector <string> passwords){
    vector <string> verifiedPasswords;

    for (auto password: passwords){
        


    }
    return vector <string> {};
    }
};

class System{
    public: 
        string fileName;
        InputManager reader;
        vector <string> passwords;
        PassWordValidator validator;
        vector <string> verified;
        ResultPrinter resultPrinted;

    System(){
        fileName = "input.txt";
        passwords = reader.read_file(fileName);
        verified = validator.validate_password(passwords);
        }
        
    void show(){
        for (auto password: passwords){
            cout << password << endl;
        }
    }
};
    
int main(){
  System system;
  system.show();
}