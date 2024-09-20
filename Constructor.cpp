#include<iostream>
using namespace std;
class DestructorTest{
    public:
    DestructorTest(){
        cout<<"constructor created:\n";

    }
    ~ DestructorTest(){
        cout<<"destructor created";
    }
};
int main(){
    DestructorTest ob;
    return 0;
}