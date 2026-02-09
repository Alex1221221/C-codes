#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fisier("C:\\Users\\alexa\\Downloads\\filefortest\\TestFS\\ceva.txt");
    if(!fisier){
        cout<<"Nu se poate deschide fisierul!"<<endl;
        return 1;

    }

    string linie;
    while(getline(fisier,linie)){
        cout<<linie<<"\n";
    }

    fisier.close();
    return 0;

}