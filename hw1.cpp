#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<string.h>
#include <cstring>
using namespace std;

int leftjus();
int rightjus();
int cenjus();

void countWord(char buffer[], int& wc){
  const int IN = 1;
  const int OUT = 0;

  int j=0; int state = OUT;
  wc = 0;

  for(j=0;buffer[j];j++){
    if(isascii(buffer[j])){
        wc++;
      }
}
}

/*void countWord(char buffer[], int& count){
  count = 0;
  int i=0;
  while(buffer[i]!='\0'){
  for(i=0;buffer[i];i++){
    if(buffer[i]&0x80){
    count = count +1;
  }
}
}
}*/
int main(){
  ifstream infile;
  char buffer[80];
  int method;
  int wc;
  infile.open("hw1.txt",ios::in);
  if(infile.fail()){
    cout<<"error"<<endl; exit(1);
  }
    cout<<"****************************************"<<endl;
    cout<<"1. Left     Justification"<<endl;
    cout<<"2. Right    Justification"<<endl;
    cout<<"3. Centered Justification"<<endl;
    cout<<"4. Terminate"<<endl<<endl;
    cout<<"Enter your choice : "; cin>>method;
    cout<<"12345678901234567890123456789012345678901234567890123456789012345678901234567890"<<endl;
while(1){
    if(method == 1){
      while(infile.getline(buffer, 80)){
      countWord(buffer, wc);
      cout<<buffer;
      for(int i=0; i<(80-(strlen(buffer)+wc)/2); i++){
      cout<<" ";}
    }}
    else if(method == 2){
      while(infile.getline(buffer, 80)){
      countWord(buffer, wc);
      for(int i=0; i<(80-(strlen(buffer)+wc)/2); i++){
      cout<<" ";}
      cout<<buffer;
    }
  }
    else if(method == 3) {
      while(infile.getline(buffer, 80)){
      countWord(buffer, wc);
      for(int i=0; i<((80-(strlen(buffer)+wc)/2))/2; i++){
      cout<<" ";}
      cout<<buffer;
      for(int i=0; i<((80-(strlen(buffer)+wc)/2))/2; i++){
      cout<<" ";}
    }
  }
  else{
    cout<<"error"<<endl;
  }
}
  return 0;
  }
      /*unsigned int pad1 = (80-buffer.size())/2;
      unsigned int pad2 = pad1;
      for (int f = 0; f < pad1; f++)
	  {
	  cout << " ";
	  ++f;
	  }

	 cout << buffer;

          for (int e = 0; e < pad2; e++)
	  {
	  cout << " ";
	  ++e;
	  }

	cout << endl;}
    else{
      break;
    }
  }
  return 0;*/




/*




//////////////////////////////////////////
//Lab3
//Name: 송용욱
//ID : 20170711
//////////////////////////////////////////
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
using namespace std;

#define compare(x,y)(((x)<(y)) ? -1: ((x)==(y)) ? 0: 1)
int binsrch(int list[], int srchnum, int left, int right);
int Rbinsearch(int list[], int srchnum, int left, int right);
void selsort(int list[], int n);
int sqsearch(int list[], int srchnum);

int main(){
  int pos; int number; int method; int size=10;
  int list[10]; int i=0;
  ifstream infile;
  infile.open("input3.txt",ios::in);
  if(infile.fail()){
    cout<<"error"<<endl; exit(1);
  }
  for(int i=0; i<size; i++) infile>>list[i];

  cout << "Numbers in the Data file: "<<endl;
  cout << endl <<"before sort : ";
  for(int i = 0; i<10; i++){cout<<list[i]<<" ";}
  cout<<endl<<endl;

  selsort(list, 10);

  cout<< "Sorted array: ";
  for(int i = 0; i<10; i++){cout<<" "<<list[i]<<" ";}
  cout<<endl<<endl;

  while(1){
    cout<<"Enter methods of Search : 1.Bin-search 2.Recursive search 3.Sequential search :";
    cin>>method;

    cout<<"Enter an integer to search :"; cin>>number;

    if(method == 1) pos=binsrch(list, number,0,9);
    else if(method == 2) pos=Rbinsearch(list, number,0,9);
    else if(method == 3) pos=sqsearch(list, number);
    else{
      cout<<"error"; break;
    }
    if(pos==-1){
      cout<<number<<"is not in the list"<<endl<<endl;
    }
    else{
      pos=pos+1;
      cout<<number<<"is at position"<<pos<<endl<<endl;
    }
  }
  return 0;
}

int sqsearch(int list[], int srchnum){
  for(int i=0; i<10; i++)
    if(srchnum==list[i]) return i;
  return -1;
  }

int binsrch(int list[], int srchnum, int left, int right){

  int mid;
  while(left<=right){
    mid = (left+right)/2;
    switch(compare(list[mid], srchnum)){
      case -1: left=mid +1; break;
      case 0: return mid;
      case 1: right=mid-1;
    }
  }
  return -1;
}

int Rbinsearch(int list[], int searchnum, int left, int right){
  int mid2;
  if(left<=right){
    mid2 = (left+right)/2;
    switch(compare(list[mid2],searchnum)){
      case -1: return Rbinsearch(list, searchnum, mid2+1, right);
      case 0: return mid2;
      case 1: return Rbinsearch(list, searchnum, left, mid2-1);
    }
  }
  return -1;
}

void selsort(int list[], int n){
  int min;
  for(int i=0; i<n-1; i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(list[j]<list[min]) min=j;
    }
    swap(list[i], list[min]);
  }
//  for(int i=0; i<n-1; i++)
//  cout<<list[i]<<" ";
}




//lab3-txt.input
*/
