#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
    cout << "masukan Panjangnya - ";
    cin >> P;
    cout << "masukan Lebarnya - ";
    cin >> L;

}

void proses(){
    Luas = P*L;
}

void output(){
    cout << "Luasnya - " <<Luasnya;
}

int main (){
    input();
    proses();
    output();
    
}