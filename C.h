#include <iostream>
using namespace std;

class C{
    private:
        string C1;
        int C2;

    public:
        C(){
            C1 = "";
            C2 = 0;
        }
        void setC1(int entry){
            C1 = entry;
        }
        void setC2(float entry){
            C2 = entry;
        }
        string getC1(){
            return C1;
        }
        float getC2(){
            return C2;
        }
        void MC1(){
            cout << "MC1" << endl;
        }
        void MC2(){
            cout << "MC2" << endl;
        }
        void MC3(){
            cout << "MC3" << endl;
        }
};
