#include <iostream>
#include <fstream>
#include <sstream> //istringstream
#include <string>

using namespace std;

int main()
{
        string line, word;
    ifstream newfile;

    newfile.open("newfile.txt");

    istringstream iss;

   
    while (!newfile.eof()) // eof stands for end of file and it returns true when we reach the end of the file
    {

        getline(newfile, line);

        if (newfile.good()) // it means that we read the line from the file with succes. it returns false when we reach the end.
        {
            // cout << line << endl; //line by line

            iss.clear(); // clear out state
            iss.str(line);
            while (iss.good())
            {
                iss >> word;
                // cout << word << endl; //word by word

                for (char c : word)
                {
                    cout << c << endl; // char by char
                }

                for (int i = 0; i < word.length(); i++)
                {
                    cout << word[i] << endl;
                }
            }
        }
    }

    newfile.close();

    return 0;
}