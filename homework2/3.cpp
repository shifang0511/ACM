#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    vector<string> passage;string path;
    cout<<"Please enter the path of the cpp"<<endl;
    cin>>path;
    ifstream inputFile(path.c_str());
    if (!inputFile.is_open()) {
        cout << "Failed to open the input file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        // Check if the line contains a comment
        size_t commentStart = line.find("//");
        size_t blockCommentStart = line.find("/*");
        if (blockCommentStart != string::npos) {
            size_t blockCommentEnd = line.find("*/", blockCommentStart);
            if (blockCommentEnd != string::npos) {
                line.erase(blockCommentStart-1, blockCommentEnd - blockCommentStart + 2);
            }
        }
        if (commentStart != string::npos) {
            line.erase(commentStart);
        }
        passage.push_back(line);
    }
    //creat the new file
    inputFile.close();
    ofstream outputFile(path.c_str());
    if (!outputFile.is_open()) {
        cout << "Failed to create the output file." << endl;
        return 1;
    }
    for (const string& line : passage) {
        if(!line.empty())outputFile << line << endl;
    }
    outputFile.close();
}