#include <iostream>
using namespace std;

class D{
    private:
        int D1;
        int D2;

    public:
        D(){
            D1 = 0;
            D2 = 0.0;
        }
        void setD1(int entry){
            D1 = entry;
        }
        void setD2(int entry){
            D2 = entry;
        }
        int getD1(){
            return D1;
        }
        int getA2(){
            return D2;
        }
        void MD1(){
            cout << "MD1" << endl;
        }
        void MD2(){
            cout << "MD2" << endl;
        }
        void MD3(){
            cout << "MD3" << endl;
        }
        void MD4(){
            cout << "MD4" << endl;
        }
};
