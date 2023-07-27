#include <iostream >
 #include <fstream >
 using namespace std;
 int main ()
 {
 char text [2000];
 fstream file;
 file.open ("example.txt", ios :: out | ios ::in );
 cout << "Write text to be written on file:" << endl;
 cin.getline(text , sizeof(text ));
 
 file << text << endl; // Writing on file
 file >> text; // Reading from file
 cout << endl << "The written text is:" << endl;
 cout << text << endl;
 file.close ();
 return 0;
 }
cin>>a[i]