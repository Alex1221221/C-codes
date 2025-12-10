#include <iostream>
using namespace std;


class Student{
    private:
        string nume;
        string facultate;
        int anstudiu;
        int nrnote;
        int* note;//alocare dinamica
        
        //folosim unul din principiile de baza ale oop Encapsularea
    public:
        Student(){
            nume="";
            facultate="";
            anstudiu=0;
            nrnote=0;
            note=nullptr;
            
        };
        Student(string _nume,string _facultate,int _anstudiu,int _nrnote,int* _note){
            nume=_nume;
            facultate=_facultate;
            anstudiu=_anstudiu;
            nrnote=_nrnote;
            note=new int[nrnote];
            for(int i=0; i<nrnote;i++){
                note[i]=_note[i];
            };
        };//am implementat
    //implementam o metoda de afisare IN interiorul clasei.  
    void afisare()
    {
        cout<<"numele studentului 1 este: "<<nume<<endl;
        cout<<"facultatea studentului este: "<<facultate<<endl;
        cout<<"anul de studiu al studentului este: "<<anstudiu<<endl;
        cout<<"numarul de note este: "<<nrnote<<endl;
        cout<<"notele studentului sunt: ";
        for(int j=0;j<nrnote;j++){
            cout<<note[j]<<" ";
        }
    
    }

    //destructor pentru ca am folosit new(alocare dinamica), daca nu am folosi delete[] si am avea 1000 de studenti am ocupa memorie ram inutil si previne memory leaks.
    ~Student(){
    if(note != nullptr){
        delete[] note;
    }
    }  
};


int main()
{
    Student s1("Gigel","ASE",2,3,new int[3]{1,2,3});
    s1.afisare();
    Student s2("Andrei","CSIE",3,4,new int[4]{5,6,7,8});
    s2.afisare();
}
