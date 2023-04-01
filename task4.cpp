#include <iostream>
#include <fstream>
using namespace std;

void counter();

main()
{
    counter();
}
void counter()
{
    fstream file;
    string line;
    char character = 'T';
    char letter;
    int count = 0;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        file >> letter ;
        if (letter != character)
        {
            count++;
        }
    }
    cout << "NUMBER of lines are  " << count;
}