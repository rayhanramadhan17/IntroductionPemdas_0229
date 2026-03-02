#include <iostream>
using namespace std;

float diagonal1, diagonal2, luas;

void input(){
    cout << "Masukkan diagonal 1 : ";
    cin >> diagonal1 ;
    cout << "Masukkan diagonal 2 : ";
    cin >> diagonal2 ;
}

float LuasBelahKetupat(float diagonal1, float diagonal2){
    return 0.5 * diagonal1 * diagonal2;
}

void output(){
    cout << "LuasKetupat :" <<LuasBelahKetupat(diagonal1, diagonal2);

}
int main(){
    input();
    output();
}