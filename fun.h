#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;
class Flow {
public:
    static void OpenF(string path);
    static void CloseF(string path);
    static void Name(string filename);
    void Openfile();
    void EndOfFile(string path, char b);
    void Newl(string path, string S);
    void IntF(string path, int x);
    void FloatF(string path, float y);
};