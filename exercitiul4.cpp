#include <iostream>
#include<fstream>
#include <string>
using namespace std;


int main(){

    ofstream fisier("C:\\Users\\alexa\\Downloads\\filefortest\\TestFS\\ceva.txt");
    if(!fisier){
        cout<<"Nu se poate crea fisierul!"<<endl;
        return 1;
    }


        fisier<<"Linia"<<"\n";

    
    

}