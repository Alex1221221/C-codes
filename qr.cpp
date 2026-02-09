#include <windows.h>
#include <vector>
#include <iostream>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include "qrcodegen.hpp"

using namespace std;
using namespace qrcodegen;

int main(){
    string text;
    cout<<"Introdu textul pentru care vrei sa generezi codul QR: ";
    getline(cin,text);


    const QrCode qr = QrCode::encodeText(text.c_str(), QrCode::Ecc::LOW);

    int size=qr.getSize();
    int scale=10;
    int imgSize=size*scale;
    vector<unsigned char> img(imgSize*imgSize,255);

    for(int y=0;y<size;y++){
        for(int x=0;x<size;x++){
            if(qr.getModule(x,y)){
                for(int dy=0;dy<scale;dy++){
                    for(int dx=0;dx<scale;dx++){
                        img[(y*scale+dy)*imgSize+(x*scale+dx)]=0;
                    }
                }
            }
        }
    }
    stbi_write_png("qrcode.png",imgSize,imgSize,1,img.data(),imgSize);

    cout<<  "Codul QR a fost generat si salvat ca 'qrcode.png'."<<endl;
    return 0;


}