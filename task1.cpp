# include<iostream>
# include<fstream>

using namespace std;

main()
{
    char character;
    char letter;
    cout<< "entre character you want to check";
    cin>> letter;
    fstream file ; 
    file.open ("task1.txt" , ios ::in );
    int count = 0;
    while(!file.eof())
    {
        file >> character;
        if(character == letter)
        count++;
    file.close();
    cout<< letter <<"come " <<count <<"times";
}
}