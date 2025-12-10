#include <iostream>
using namespace std;
class Student{
    private:
        string nume;
        string facultate;
        int varsta;
        //encapsulare
        //cod simplu pentru implementarea unei clase unui constructor si unei metode de afisare
        //initializam constructorul
    public:
        Student(string _nume,string _facultate,int _varsta){
            nume=_nume;
            facultate=_facultate;
            varsta=_varsta;
        }//initializam constructorul
        //metoda de afisare
        void afisare(){
    cout<<"Numele studentului este: "<<nume<<endl;
    cout<<"Facultatea studentului este: "<<facultate<<endl;
    cout<<"Varsta studentului este: "<<varsta<<endl;
};
};


int main()
{
    Student s1("Andrei","CSIE",20);
    s1.afisare();//apelam metoda de afisare    
    Student s2("Mihai","CSIE",19);
    s2.afisare();
    
};
