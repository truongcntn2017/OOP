#include <iostream>

using namespace std;

void printXYZ(int multi){
    cout<<"Cap 3 boi cua "<<multi<<endl;

    for (int x=1; x<=multi; x++){
        if (multi % x == 0){
            for (int y=1; y<=multi/x; y++){
                if (multi % (x*y) == 0){
                    cout<<"Cap 3 x, y, z thoa man: "<<x<<" "<<y<<" "<<multi/(x*y)<<endl;
                }
        }
        }
    }
}

int main(){
    int upper_bound = 432*432*424;
    cout<<"Nhap gioi han tren "<<endl;
    cin >> upper_bound;
    for (int multi=16; multi<=upper_bound; multi+=16){
        printXYZ(multi);
    }
    return 0;
}