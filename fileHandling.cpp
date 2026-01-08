#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

  //Create and open a Text File
  ofstream myFile("filename.txt");
  //Write to the file
  myFile << "Files can be tricky, but fun enough ";
  //close file: considered as a good Practice
  myFile.close();

  //Read a file

  //create a Text string, which is used to output the text file
  string myText;
  //read from a text file
  fstream MyReadFile("filename.txt");
  //use a while loop together with getline()
  while(getline (MyReadFile, myText )){
    cout << myText;
  }
  //close a file
  MyReadFile.close();

  return 0;
}
