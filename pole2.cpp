/*
    author: ktfk/fashka24
    to run:
        clang++ POLE2.CPP -o EXES/POLE2.EXE
        OR
        clang++ POLE2.CPP -o EXES/POLE2.O
        ./EXES/POLE2


*/


#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
bool pole[] = {
    0,0,0,
    0,0,0,
    0,0,0,
};
int main() {
    int cur = 0;
    system("cls");
    while (true)
    {
        pole[cur] = true;
    
    
        
        
        cout << pole[8] << " | "<< pole[7] << " | "<< pole[6] << endl;
        cout << pole[5] << " | "<< pole[4] << " | "<< pole[3] << endl;
        cout << pole[2] << " | "<< pole[1] << " | "<< pole[0] << endl;
        pole[cur] = false;
        if (cur == 8)
        {
            cur = 0;            /* code */
        }
        else{
            cur++;
        }
        
    
    Sleep(400);
    system("cls");
    }
}