#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
    cout << "masukan Panjangnya - ";
    cin >> P;
    cout << "masukan Lebarnya - ";
    cin >> L;
}

double proses(){
    return P*L;

}

double proses2(double a, double b){
    return a*b;

}

void output(){
    cout << "Luasnya - " << proses();
    cout << "\nLuasnya ke 2 - " << proses2(P,L);
}
int main(){
    input();
    output();
}