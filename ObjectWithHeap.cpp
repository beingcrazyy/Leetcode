#include<iostream>

using namespace std;

class Student{
    private:
        int age;
        int marks;


    public:
        void setAge(int a){
            age = a;
        }

        void setMarks(int m){
            marks = m;
        }

        int getage(){
            return age;
        }

        int getmarks(){
            return marks;
        }

};
int main(){

            Student *Shru = new Student;

            Shru -> setAge(19);
            Shru -> setMarks(89);
            cout<<Shru -> getage()<<endl;
            cout<<Shru -> getmarks()<<endl;

            delete Shru;
        
}

