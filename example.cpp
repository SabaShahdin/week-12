# include <iostream>
# include<fstream>
using namespace std;

main()
{
   /* string name = "SabaShahdin";
    int num = 4;
    char character = 'R';
    fstream file ;
    file.open ("example.txt" , ios :: in);
    file >>num;
    file.close();
    cout<<"The word is ...." <<num ;*/
    string line ;
    char character ;
    fstream file ;
    file.open("example.txt" , ios:: in);
    int count = 0;
    while(!file.eof())
    {
        file>> character ; 
        count++ ;

    }
    file.close();
    cout<<" lines on the file are ...." <<count ;
}