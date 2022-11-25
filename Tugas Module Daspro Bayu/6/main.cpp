#include <iostream>

using namespace std;

int main()
{
    string b = "input\t: ";
    int y;

    cout << b;
    cin >> y;
    int ma = y;
    int mi = y;

    while(y != -99){
        cout << b;
        cin >> y;

        if(y >= ma && y != -99){
            ma = y;
        }
        if(y <= mi && y != -99){
            mi = y;
        }
    }

     cout <<"\nNilai Maksimal\t: " << ma << "\nNilai Miimal\t: "<< mi << endl;
    return 0;
}
