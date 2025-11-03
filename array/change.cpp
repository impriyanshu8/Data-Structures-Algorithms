#include<iostream>
using namespace std;
void update(int arr [], int n){
    arr[0] = 120;
    cout<<"After update"<<" ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
return ;
}

int main(){
int arr[3] = {12,14,17};
update (arr,3);
cout<<endl<<"arr in main function : ";
for(int i=0;i<3;i++)
{
    cout<<arr[i]<<" ";

}
return 0;
}