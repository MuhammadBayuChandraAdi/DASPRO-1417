#include <iostream>

using namespace std;

int main()
{
    //number 2 mencetak angka 100 hingga 1 tetapi tetapi hanya yg genap saja
    for(int i=100 ; i > 0; i--){
            //jika integer i ganjill lewati.
        if(i % 2 !=0){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
