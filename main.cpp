#include <iostream>

using namespace std;

/*int main()
{
    int arr[10];
    string nama[10];
    int a,n;

    cout <<"Input N : " ; cin >> n;
    cout << endl;

    for (a=0;a<n;a++){
        cout << "Nama peserta ke-"<<a+1 <<" : ";
        cin >> nama[a];
        cout << "Jumlah rambutan yang dipetik" <<" : ";
        cin >> arr[a];
        cout << endl;
    }

    int maks=arr[0];
    string namapemenang;
    for (a=1;a<n;a++){
        if(arr[a]>maks){
            maks=arr[a];
            namapemenang=nama[a];
        }
    }

    cout << "Pemenang : " << namapemenang<< endl;
    cout << "Rambutan utk Kak Ros : " << maks;
    */

struct peserta{
        string nama;
        int buah;
};

int main(){
        int jml_index;

        cout << "Input N : " ; cin >> jml_index;

        peserta psrt[jml_index];

        for (int a=0; a<jml_index;a++){

            cout << "Nama peserta ke-"<<a+1<<" : " ;cin >> psrt[a].nama;
            cout << "Jumlah Rambutan dipetik: ";cin >> psrt[a].buah;
            cout << endl;
        }

        int maks=psrt[0].buah;
        string namapemenang;
        for (int a=1;a<jml_index;a++){
            if( psrt[a].buah>maks){
                maks= psrt[a].buah;
                namapemenang=psrt[a].nama;
            }
        }

        cout << "Pemenang : " << namapemenang<< endl;
        cout << "Rambutan utk Kak Ros : " << maks;

    return 0;
}
