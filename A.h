#include <iostream>
using namespace std;

class A{
    private:
        int A1;
        float A2;

    public:
        A(){
            A1 = 0;
            A2 = 0.0;
        }
        void setA1(int entry){
            A1 = entry;
        }
        void setA2(float entry){
            A2 = entry;
        }
        int getA1(){
            return A1;
        }
        float getA2(){
            return A2;
        }
        void MA1(){
            cout << "MA1" << endl;
        }
        void MA2(){
            cout << "MA2" << endl;
        }
};