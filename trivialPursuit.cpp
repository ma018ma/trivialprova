#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fileQuestAnswer("domandeRisposte.txt");
    ifstream fileRisposteGiuste("risposteEsatte.txt");
    ofstream fileGiaUscite("domandeGiaUscite.txt");
    if ((fileQuestAnswer.is_open()) && (fileRisposteGiuste.is_open()))
    {
        cout << "fileOk" << endl;
    }
    else
    {
        cout << "noFile" << endl;
    }
    srand(time(NULL));
    bool giaUscite[30];
    for (int y = 0; y < 30; y++)
    {
        giaUscite[y] == false;
    }
    int indiceDomanda = 0;
    int rigaDomanda = 0;
    indiceDomanda = rand() % 30;
    rigaDomanda = indiceDomanda * 5;
    cout << indiceDomanda << endl;
    cout << rigaDomanda << endl;
    while (giaUscite[indiceDomanda] == true)
    {
        indiceDomanda = rand() % 30;
        rigaDomanda = indiceDomanda * 5;
        cout << indiceDomanda << endl;
        cout << rigaDomanda << endl;
    }
    cout << indiceDomanda << endl;
    cout << rigaDomanda << endl;
    string questAnswer;
    string risposteGiuste;
    int contatore = 0;
    while(getline(fileRisposteGiuste,risposteGiuste))
    //risposta; // string int bho
    while (getline(fileQuestAnswer, questAnswer))
    {
        contatore++;
        for(int i=1;i<6;i++){
        if (contatore == rigaDomanda + i){
            cout<< questAnswer << endl;
            }
        }
       // cout<< "scrivi as-aa-11 per risposta giusta" << endl;
       // cin >> risposta << endl;//risposta - lettera - numero
       while(getline(fileRisposteGiuste,risposteGiuste))
       {
        if(risposta == risposteGiuste){
            cout<< "giusto!" << endl;
        }
       }
    }        
}


