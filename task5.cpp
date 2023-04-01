#include <iostream>
#include <fstream>
using namespace std;
void display_word();
main()
{
    display_word();
}
void display_word()
{
    fstream file;
    string word;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        file >> word;
        if (word.size() < 4)
        {
            cout << word << endl;
        }
    }
    file.close();
}