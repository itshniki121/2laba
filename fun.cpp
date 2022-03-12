#include "fun.h"

void Flow::OpenF(string path) {
    path = "file.txt";
    ofstream fout;
    fout.open(path,fstream::app);
    cout<<" File open"<<endl;
}
void Flow::CloseF(string path) {
    path = "file.txt";
    ofstream fout;
    fout.open(path,fstream::app);
    cout<<" File close"<<endl;
}

void Flow::Name(string filename) {
    filename = "file";
    ofstream file;
    file.open(filename + ".txt");
    cout<<" File name = ";
    cout<<filename<<endl;

}
void Flow::Openfile(){
    ifstream file ("file.txt");

    if (file.is_open()) // вызов метода is_open()
        cout << "file is open" << endl;
    else
    {
        cout << "file close" << endl;
    }
}

void Flow::EndOfFile(string path,char b) {
    path = "file.txt";
    ifstream fout;
    fout.open(path,fstream::app);
    while(fout.get(b)){
    cout<<b<<' ';
    }
    cout<<" end of file"<<endl;
}
void Flow::Newl(string path, string S){
    path = "file.txt";
    ofstream fout;
    fout.open(path,fstream::app);
    cout<<"Vvedite stroky"<<endl;
    cin>>S;
    cout<<"Vacha stroka = "<<S<<endl;
    fout<<S<<endl;

}
void Flow::IntF(string path, int x){
    path = "file.txt";
    ofstream fout;
    fout.open(path,fstream::app);
    cout<<"Vvedite chislo tipa int"<<endl;
    cin>>x;
    cout<<"Vache chislo = "<<x<<endl;
    fout<<x<<endl;

}
void Flow::FloatF(string path, float y){
    path = "file.txt";
    ofstream fout;
    fout.open(path,fstream::app);
    cout<<"Vvedite chislo tipa float"<<endl;
    cin>>y;
    cout<<"Vache chislo= "<<y<<endl;
    fout<<y<<endl;


}
