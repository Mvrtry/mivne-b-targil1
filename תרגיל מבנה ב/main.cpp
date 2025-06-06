//Submitter1: name1, id1
//Submitter2: name2, id2
#include "FileSystem.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
    FileSystem fileSystem;
    string inputFilePath;

    // Ask the user for the full path to the input file
    cout << "Enter the full path to the input file:" << endl;
    getline(cin, inputFilePath);

    ifstream inputFile(inputFilePath);

    if (!inputFile) {
        cout << "Error: Could not open the input file!" << endl;
        return 1;
    }

    string operation;
    while (inputFile >> operation) {
        if (operation == "atd") {
            string dirName;
            inputFile >> dirName;
            fileSystem.addTree(new Directory(dirName));
        }
        else if (operation == "atf") {
            string fileName;
            inputFile >> fileName;
            fileSystem.addTree(new File(fileName));
        }
        else if (operation == "ard") {
            string parentDir, dirName;
            inputFile >> parentDir >> dirName;
            fileSystem.addRecord(parentDir, new Directory(dirName));
        }
        else if (operation == "arf") {
            string parentDir, fileName;
            inputFile >> parentDir >> fileName;
            fileSystem.addRecord(parentDir, new File(fileName));
        }
        else if (operation == "del") {
            string recordName;
            inputFile >> recordName;
            fileSystem.deleteRecord(recordName);
        }
        else if (operation == "ps") {
            fileSystem.printFileSystem();
        }
        else if (operation == "app") {
            string fileName, content;
            inputFile >> fileName >> content;
            fileSystem.appendToFile(fileName, content);
        }
        else if (operation == "dff") {
            string fileName, content;
            inputFile >> fileName >> content;
            fileSystem.deleteSubstringFromFile(fileName, content);
        }
        else if (operation == "pf") {
            string fileName;
            inputFile >> fileName;
            fileSystem.printFileContent(fileName);
        }
    }

    inputFile.close();
    return 0;
}

