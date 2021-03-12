//////////////////////////////////////////
//Lab1-2
//Name: 송용욱
//ID : 20170711
//////////////////////////////////////////


#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
using namespace std;
void countWord(char buffer[], int& wc);



int main(){
  ifstream infile;
  char buffer[80];

  infile.open("lab1_22", ios::in);
  if(infile.fail()){cout<<"error"<<endl;
  exit(1);}

  While(infile.getline(buffer, 80)){
    cout<<buffer<<endl;
    countWord(buffer, wc);
    cout << "The number of words: "<< wc << endl;
    total = total + wc;

  }
  cout << endl << endl << "The total number of words: "<< total << endl << endl;


void countWord(char buffer[], int& wc){
  const int IN = 1;
  const int OUT = 0;

  int i=0; int state = OUT;
  wc = 0;

  while(buffer[i]!='\0'){
    if(ioalpha(buffer[i]))(
      if(state==OUT){
        ++wc;
        state = IN;
      }
    )
    else if(buffer[i] == ' ')
    state = OUT;
    i++;
  }
}
