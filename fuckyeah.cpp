//
//  fuckyeah.cpp
//  c_structure
//
//  Created by YongUk Song on 2021/03/09.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int findMin(int data[], int size);
int findMax(int data[], int size);

int pos = 1;


int main(){
    int minnum, maxnum, size = 10;
    ifstream infile; int data[10]; int i = 0;
    
    infile.open("input.txt", ios::in);
    if(infile.fail()){
        cout<<"error!"<<endl; exit(1);
    }
    
    for(int i = 0; i<size; i++){
        cout<<"data["<<i <<"]:"<<data[i]<<endl;
    }
    
    minnum = findMin(data,size);
    cout << "Minimum is" << minnum << "at position" << pos << endl;
    
    pos = 1;
    maxnum = findMax(data,size);
    cout<< "Maximum is" << maxnum << "at position" << pos << endl;
    infile.close();
    return 0;
}

int findMin(int data[], int n){
    int min = data[0];
    for(int i = 1; i<n; i++)
    if(data[i]<min){min=data[i]; pos=i+1;}
    return min;
}

int findMax(int data[], int n){
    int max = data[0];
    for(int i = 1; i < n; i++)
    if(data[i]>max){max=data[i]; pos = i+1;}
    return max;
}
