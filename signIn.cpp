#include <iostream>
#include <fstream>
using namespace std;

void addUser(string userName, string password);
void storeUser(string userName, string password);
void viewUser();
void loadData();
bool signIn(string userName, string password);
bool isValid (string userName);
string userNames[100];
string passwords[100];
int userCount = 0;

main()
{
    loadData();
    char option;
    string userName;
    string password;
    bool flag1;
    while (option != '0')
    {
        cout << " 1 . add user." << endl;
        cout << " 2 . view user" << endl;
        cout << " 3 . sign in " << endl;
        cout << "Entre option ....";
        cin >> option;
        if (option == '1')
        {
            bool flag2 ; 
            cout << "entre User name...";
            cin >> userName;
            cout << "entre password...";
            cin >> password;
            flag2 =  isValid (userName);
            if(flag2 == true)
            {
            addUser(userName, password);
            storeUser(userName, password);
            cout<<"User added successfully"<<endl;
            }
            else{
                cout<<"userName  already exits " <<endl;
            }

        }
        if (option == '2')
        {
            viewUser();
        }
        if (option == '3')
        {
            cout << "entre User name...";
            cin >> userName;
            cout << "entre password...";
            cin >> password;
            flag1 = signIn(userName, password);
            if (flag1 == true)
            {
                cout << "Valid user" <<endl;
            }
            else
            {
                cout << "Invalid user" <<endl;
            }
        }
    }
}
void addUser(string userName, string password)
{
   
    userNames[userCount] = userName;
    passwords[userCount] = password;
    userCount++;
}
void storeUser(string userName, string password)
{
    fstream file;
    file.open("signIn.txt", ios ::app);
    file << userName << endl;
    file << password << endl;
    file.close();
}
bool signIn(string userName, string password)
{
    bool flag = true;
    for (int idx = 0; idx < userCount; idx++)
    {
        if (userNames[userCount] == userName && passwords[userCount] == password)
        {
            flag = true;
            break;
        }
        else 
        {
            flag == false ;
        }
    }
    return flag;
}
void viewUser()
{
    cout << "UserName \t password" << endl;
    for (int idx = 0; idx < userCount; idx++)
    {
        cout << userNames[idx] << "\t\t" << passwords[idx] << endl;
    }
}
void loadData()
{
    fstream file ;
    string userName ;
    string password;
    file.open("signIn.txt" , ios :: in);
    while(getline(file , userName) && getline(file , password))    
    {
       userNames[userCount] = userName;
       passwords[userCount] = password;
       userCount++ ;
    }
    file.close();
}
bool isValid (string userName)
{
    bool flag = true;
    for(int idx = 0 ; idx< userCount ; idx++)
    {
        if(userNames[idx] == userName)
        {
            flag = false;
            break;
        }
    }
    return flag ;
}