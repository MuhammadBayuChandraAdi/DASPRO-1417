#include <iostream>

using namespace std;

int main()
{
    int x = 20;
    int hasil = 0;

    for(int i=1 ; i <= x; i++){
        hasil = hasil + i;
    }
    cout << hasil / x << endl;
    return 0;
}
