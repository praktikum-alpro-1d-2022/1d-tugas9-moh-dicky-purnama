#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void tentukan_zodiak();
struct zodiak
{
string nama;
int tanggal_mulai;
int tanggal_selesai;
};

    const int jumlah_zodiak = 12;
    zodiak daftar_zodiak[jumlah_zodiak] =
    {
    {"ARIES", 21, 3},
    {"TAURUS", 21, 4},
    {"GEMINI", 21, 5},
    {"CANCER", 21, 6},
    {"LEO", 21, 7},
    {"VIRGO", 21, 8},
    {"LIBRA", 21, 9},
    {"SCORPIO", 21, 10},
    {"SAGITTARIUS", 21, 11},
    {"CAPRICORN", 21, 12},
    {"AQUARIUS", 21, 1},
    {"PISCES", 21, 2}
    };
    int tanggal_lahir, bulan_lahir, tahun_lahir;

int main(){

    cout << "Masukkan tanggal lahir\t : ";
    cin >> tanggal_lahir;
    cout<< "Masukan bulan lahir\t : ";
    cin>> bulan_lahir;
    cout<< "Masukan tahun lahir\t : ";
    cin>>tahun_lahir;
    cout<<"Tanggal lahir anda [tgl-bln-thn] :" <<tanggal_lahir<<"-"<<bulan_lahir<<"-"<<tahun_lahir<<endl;
    tentukan_zodiak();
    return 0;
}
void tentukan_zodiak(){

for (int i = 0; i < jumlah_zodiak; i++)
{
    if (bulan_lahir == daftar_zodiak[i].tanggal_selesai)
    {
        if (tanggal_lahir >= daftar_zodiak[i].tanggal_mulai)
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[i].nama << endl;
            break;
        }
        else if (i == 0)
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[11].nama << endl;
            break;
        }
        else
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[i - 1].nama << endl;
            break;
        }
    }
}}
