#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char message[80];string filename;
    cout<<"请输入短文的路径"<<endl;
    cin>>filename;
    ifstream infile(filename.c_str());
    if(!filename)
    {

    }
}