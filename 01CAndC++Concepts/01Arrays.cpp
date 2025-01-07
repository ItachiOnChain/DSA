#include<iostream>

using namespace std;

int main(){
    // int A[5]={2,4,6,8,10};
    // int A[]={2,4,6,8,10,12,14};
    // int A[10]={2,4,6,8,10,12,14};
    // A[0]=12; // an integer takes 4 bytes to store
    // A[1]=15;
    // A[2]=25;

    // cout<<sizeof(A)<<endl;
    // cout<<A[8]<<endl; //for c++
    // printf("%d\n",A[9]); //for C 

    int n;
    cout<<"Enter Size";
    cin>>n;
    // int A[n];
    // A[0]=2;

    int A[n] = {1,2,3,4,5};

    // for (int i=0; i<10; i++){
    //     cout<<A[i]<<endl;
    // }

    //for each loop in c++
    for (int x:A){
        cout<<x<<endl;
    }

    return 0;
}