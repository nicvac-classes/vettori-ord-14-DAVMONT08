#include <iostream>
#include <vector>
using namespace std;

int main() {
               int N,i,j,t;
               string s ;
               cout<<"inserisci il numero di studenti"<<endl;
               cin>> N;
               vector<string>nomi(N);
               vector<float>voti(N);
               i=0;
               while(i<N)
               {
                  cout<<"inserisci il nome dello studente"<<endl;
                  cin>> nomi(i);
                  cout<<"inserisci il voto dello studente"<<endl;
                  cin>> voti(i);
                  i=i+1;             
               }
            i=0
            while(i<N)
            {
                j=0;
                while(j<(N-1)-i)
                {
                    if(voti(j)>voti(j+1))
                    {
                        t=voti(j);
                        voti(j)=voti(j+1);
                        voti(j+1)=t;
                        s=nomi(j);
                        nomi(j)=nomi(j+1);
                        nomi(j+1)=s;
                    }
                j=j+1;
                }
            i=i+1;
            }
        i=0;
        while(i<N)
        {
            cout<< nomi(i);
            cout<< voti(i);
            i=i+1;
        }


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
