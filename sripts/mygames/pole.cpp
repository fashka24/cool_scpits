/*
    author: ktfk/fashka24
    to run:
        clang++ POLE.CPP -o EXES/POLE.EXE
        OR
        clang++ POLE.CPP -o EXES/POLE.O
        ./EXES/POLE


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
    
    
        
        
        cout << pole[0] << " | "<< pole[1] << " | "<< pole[2] << endl;
        cout << pole[3] << " | "<< pole[4] << " | "<< pole[5] << endl;
        cout << pole[6] << " | "<< pole[7] << " | "<< pole[8] << endl;
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
