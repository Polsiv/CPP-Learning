#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <regex>
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

class PassWordValidator{
  public:
    vector <string> validate_password(vector <string> passwords){
        vector <string> verifiedPasswords;
        regex uppercase("[A-Z]");
        regex lowercase("[a-z]");
        regex numbers("[0-9]");
        regex symbols("[!-/]");
        regex absense("[^A-Za-z0-9!-/]");

        for (auto password: passwords){ 
            string is_valid = " false";
            bool has_length = password.length() > 16 || password.length() < 8;
            string length = has_length ? " length" : "";
            bool has_uppercase = !regex_search(password, uppercase);
            string upper_case = has_uppercase ? " upper_case" : "";
            bool has_lowercase = !regex_search(password, lowercase);
            string lower_case = has_lowercase ? " lower_case" : "";
            bool has_number = !regex_search(password, numbers);
            string number = has_number ? " number" : "";
            bool has_symbol = !regex_search(password, symbols);
            string symbol = has_symbol ? " special_symbol": "";
            bool has_out_of_scope = regex_search(password, absense);
            string out_of_scope = has_out_of_scope ? " invalid" : "";

            if (!(has_length || has_uppercase || has_lowercase || has_number || has_symbol || has_out_of_scope )){
                is_valid = " true";
            }
            verifiedPasswords.push_back(is_valid + length + upper_case + lower_case + number + symbol + out_of_scope);
            }
        return verifiedPasswords;
    }
};

class ResultPrinter{
  public:
    void show_results(vector <string> passwords, vector <string> verified){
        for (int i = 0; i < passwords.size() && i < verified.size(); ++i) {
            cout << passwords[i] << verified[i] << endl;
        }
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
        
    void show(vector<string> Passwords, vector<string> Verified){
       resultPrinted.show_results(Passwords, Verified);
    }
};

int main(){
    System system;
    vector <string> passwords = system.passwords;
    vector <string> verified = system.verified;
    system.show(passwords, verified);
    return 0;
}