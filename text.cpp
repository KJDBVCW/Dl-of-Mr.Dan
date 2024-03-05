#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    


    char data[100];

   // mo mot file trong che do write.
   ofstream outfile;
   outfile.open("text.txt");

   cout << "Ghi du lieu toi file!" << endl;
   cout << "Name of teacher: " ; 
   cin.getline(data, 1000);

   // ghi du lieu da nhap vao trong file.
   outfile << data << endl;

   cout << "Name of student: "; 
   cin >> data;
   cin.ignore();
   
   // ghi du lieu da nhap vao trong file.
   outfile << data << endl;

   // dong file da mo.
   outfile.close();

   // mo mot file trong che do read.
   ifstream infile; 
   infile.open("text.txt"); 
 
   cout << "\n===========================\n" ;
   cout << "Doc du lieu co trong file!" << endl; 
   infile >> data; 

   // ghi du lieu tren man hinh.
   cout << data << endl;
   
   // tiep tuc doc va hien thi du lieu.
   infile >> data; 
   cout << data << endl; 

   // dong file da mo.
   infile.close();

   return 0;
}