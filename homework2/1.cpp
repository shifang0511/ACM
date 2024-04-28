#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int line=0;
    char message[80];string filename;
    cout<<"Please enter the path of the short article"<<endl;
    cin>>filename;
    ofstream outfile(filename.c_str(),ios::out);
    cout<<"Please enter the short article"<<endl;
    while(cin.getline(message,80))
    {
        outfile<<message<<endl;
        line++;
    }
    outfile.close();
    ifstream infile(filename.c_str(),ios::in);
    if(!infile)
    {
        cout<<"file open failed"<<endl;
    }
    else{
        while(infile.getline(message,80))
        {
            cout<<message<<endl;
        }
    }
    system("pause");
    return 0;
}