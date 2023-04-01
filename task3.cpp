#include <iostream>
#include <fstream>
using namespace std;
main()
{
    fstream file;
    string name[3];
    string admissionNumber[3];
    int percentage[3];
    file.open("student1.txt", ios ::in);
    while (!file.eof())
    {
        for (int idx = 0; idx < 3; idx++)
        {
            file >> name[idx];
            file >> admissionNumber[idx];
            file >> percentage[idx];
        }
    }
    for (int idx = 0; idx < 3; idx++)
    {
        cout << name[idx] << endl;
        cout << admissionNumber[idx] << endl;
        cout << percentage[idx] << endl;
    }
    file.close();
    fstream file2;
    file2.open("topperStudent1.txt", ios::out);
    for (int idx = 0; idx < 3; idx++)
    {
        int temp;
        temp = percentage[idx];
        percentage[idx] = percentage[idx + 1];
        percentage[idx + 1] = temp;
        if(percentage[idx] > 65)
        {
        file2 << name[idx] << endl;
        file2 << admissionNumber[idx] << endl;
        file2 << percentage[idx] << endl;
        }
    }
    file2.close();
}