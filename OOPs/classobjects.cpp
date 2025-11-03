#include<iostream>
using namespace std;
//creation of  class
class hero{

    //properties 
    int health;
    int rank;
public:
hero (int health , int rank ){
    this-> health = health;
    this-> rank = rank;
        
    }
    void print(){
        cout<<"health  "<<this->health<<endl;
        cout<<"rank   "<<this->rank<<endl;
    }

//     void sethealth(int x){
//         health = x;
//     }
//     void setrank(int y){
//         rank = y;
//     }

    int gethealth()
    {
        return health;
    }
    int getrank(){
        return rank;
  }

     

};
int main(){
//creation of objects
// copy constructor 
hero arun(299,5);
hero yash(arun);
cout<<yash.gethealth()<<" "<<yash.getrank()<<endl;
cout<<arun.gethealth()<<" "<<arun.getrank()<<endl;
arun.print();
yash.print();

// cout<<sizeof(h1)<<endl;
// // implication of getters and setter for private properties 
// cout<<"THE HEALTH IS : "<< h1.gethealth()<<endl;
// cout<<"THE RANK IS "<<h1.getrank()<<endl;
// h1.sethealth(90);
// h1.setrank(14);
// cout<<"THE NEW HEALTH IS : "<< h1.gethealth()<<endl;
// cout<<"THE NEW RANK IS "<<h1.getrank()<<endl;


}

