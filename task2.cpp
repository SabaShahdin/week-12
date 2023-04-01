# include<iostream>
# include<fstream>
using namespace std;
void addStudent();
void file();
void storeStudent();
string name;
string age;
int matric;
int fsc;
main()
{
    file();
    addStudent();
    storeStudent();
    
}
void file()
{
    fstream file;
    file.open("student.txt" , ios :: out);
    file.close();

}
void addStudent()
{
    cout<<"Entre your name ..." ;
    cin>>name;
    cout<<"Entre your age ...";
    cin>>age;
    cout<<"entre matric marks..";
    cin>>matric;
    cout<<"entre your fsc marks..";
    cin>>fsc;
}
void storeStudent()
{
    fstream file;
    file.open ("student.txt" , ios ::app);
    file <<name <<endl;
    file<< age <<endl;
    file <<matric <<endl;
    file<<fsc <<endl;
}