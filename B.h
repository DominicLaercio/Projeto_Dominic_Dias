#include <iostream>
using namespace std;

class B{
    private:
        int B1;
        float B2;

    public:
        B(){
            B1 = 0;
            B2 = 0.0;
        }
        void setB1(int entry){
            B1 = entry;
        }
        void setB2(float entry){
            B2 = entry;
        }
        int getB1(){
            return B1;
        }
        float getB2(){
            return B2;
        }
        void MB1(){
            cout << "MB1" << endl;
        }
        void MB2(){
            cout << "MB2" << endl;
        }
        void MB3(){
            cout << "MB3" << endl;
        }
};
