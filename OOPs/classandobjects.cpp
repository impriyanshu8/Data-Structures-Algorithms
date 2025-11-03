#include<iostream>
#include<string>
using namespace std;
class Students{
public:
string name ;
int roll_no;
string branch;
int rank;
void print (){
    cout<<"Name :"<<this->name<<endl;
    cout<<"Roll no :"<<this->roll_no<<endl;
    cout<<"Branch :"<<this->branch<<endl;
    cout<<"Rank :"<<this->rank<<endl;

}

};
int main()
{
    Students s1;
    s1.name = "priyanshu";
    s1.roll_no = 34;
    s1.branch = "CSE";
    s1.rank = 28000;
    s1.print();
    


}