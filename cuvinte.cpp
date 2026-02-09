
//joculet de tip ghiceste numarul secret

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


int main(){

    srand(time(NULL));
    int secret=rand()%100+1;
    int guess;
    cout<<"Ghiceste numarul secret intre 1 si 100: ";
    cin>>guess;
    int tries=1;
    

    while(guess!=secret){
        if(guess<secret){
            cout<<"numarul secret este mai mare . Incearca din nou: ";
            cin>>guess;
            tries++;
        }
        else{
            cout<<"numarul secret este mai mic . Incearca din nou: ";
            cin>>guess;
            tries++;
        }

}
    if(tries<5){
        cout<<"esti bun!"<<endl;

    }
    else if(tries<10){
        cout<<"foarte bineeee"<<endl;

    }
    else{
        cout<<"bravo!"<<endl;
    }
    cout<<"ai ghicit in "<<tries<<" incercari,felicitari!"<<endl;

}
