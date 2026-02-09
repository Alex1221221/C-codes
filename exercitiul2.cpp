#include <iostream>
#include <filesystem>
using namespace std;
namespace fs=std::filesystem;

int main(){
    fs::path fisier="C:\\Users\\alexa\\Downloads\\filefortest\\TestFS";
    for(auto &entry : fs::directory_iterator(fisier)){
        cout<<entry.path().filename()<<endl;
    }
    

}