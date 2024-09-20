#include <iostream>
using namespace std;
int main(){
    int arr1[201];
    int arr2[201];
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>arr1[i];
    }
    for(int i=1;i<=n;i++){
        cin>>arr2[n-i+1];
    }
    for(int i=0;i<t;i++){
        int temp1=0;
        int temp2=0;
        temp1=arr2[1];
        temp2=arr1[n];
        for(int j=1;j<n;j++){
            arr2[j]=arr2[j+1];
            arr1[n-j+1]=arr1[n-j];
        }
        arr1[1]=temp1;
        arr2[n]=temp2;
    }

    for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
        cout<<arr2[n-i+1]<<" ";
    }

}