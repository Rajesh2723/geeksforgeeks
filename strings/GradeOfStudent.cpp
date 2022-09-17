#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string grade_of_student(int input1[]){
    string res="";
    int i=0;
    int sum=0;
    int size=0;
    while(input1[i]!=0){
        size++;
        sum+=input1[i];
        i+=1;
    }
    int average=sum/size;
    if(average>=80){
        return "A";
    }else if(average>=60 and average<=79){
        return "B";
    }else if(average>=40 and average<=59){
        return " C";
    }else{
        return "D";
    }
}
int main(){
    int input1[1000];
    for(int i=0;i<input1[i]!=0;i++)
    cin>>input1[i];
    cout<<grade_of_student(input1)<<endl;
}
