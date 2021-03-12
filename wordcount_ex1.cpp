//
//  wordcount_ex1.cpp
//  c_structure
//
//  Created by YongUk Song on 2021/03/09.
//

#include <stdio.h>

using namespace std;
void countWord(char buffer[], int& wc);

void main(){
    ifstream infile;
    char buffer[80]; int wc; int total = 0;
    infile.open("input_1.txt", ios::in);
    if(infile.fail()){cout<< "can't open""<<endl;exit(1);}
}
