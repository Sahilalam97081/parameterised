#include<iostream>
using namespace std;
class ConstructorTest {
    public:
    ConstructorTest(){
        cout<<"constructor created:";

    }
};
int main(){
    ConstructorTest ob;
    return 0;
}