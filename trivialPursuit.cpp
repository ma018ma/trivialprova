#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
using namespace std;

int main(){
    ifstream fileQuestAnswer("domandeRisposte.txt");
    if (fileQuestAnswer.is_open())
    {
        cout<<"fileOk"<<endl;
        }
    else{
        cout<<"noFile"<<endl;
    }
    string questAnswer;
    while(getline(fileQuestAnswer,questAnswer))
    {
        cout<< questAnswer <<endl;
    }

}