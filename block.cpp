#include<iostream>
#include<windows.h>
#include<winable.h>
using namespace std;

int main(){
    cout<<"BlockInput"<<endl;
    BlockInput(true);
    Sleep(10000);
    cout<<"UnblockInput"<<endl;
    Sleep(2000);
    return 0;
}