#include <iostream>

using namespace std;

int main()
{
    cout << "KONVERSI SUHU DARI CELCIUS REAMUR FARENHEIT - MUHAMAD ANDRIANSYAH (NIM 311810297) TI-18 B2" <<endl;

        float c, r, f, k;
        cout<<"masukan besar suhu dalam celcius = ";cin>> c;
        //rumus konversi suhu
        f=1.8*c+32;
        r=0.2*c;
        cout<<"dari suhu" <<c<< "celcius sama dengan \n ===>" <<f<< "farenheit n\ ===>" <<r<< "reamur" <<endl;

    return 0;
}
