#include <iostream>
using namespace std;

int main(){
    int arr1[201];
    int arr2[201];
    int arr3[201];
    int n,t;
    cin>>n>>t;
    for(int j=0;j<n;j++)
        cin>>arr1[j];
    for(int j=0;j<n;j++)
        cin>>arr2[j];
    for(int j=0;j<n;j++)
        cin>>arr3[j];

    for(int i=0;i<t;i++){
        int temp1,temp2,temp3;
        temp1=arr1[n-1];
        temp2=arr2[n-1];
        temp3=arr3[n-1];
        for(int j=0;j<n-1;j++){
            arr1[n-1-j]=arr1[n-j-2];
            arr2[n-1-j]=arr2[n-j-2];
            arr3[n-1-j]=arr3[n-j-2];
        }
        arr1[0]=temp3;
        arr2[0]=temp1;
        arr3[0]=temp2;
    }


    for(int j=0;j<n;j++)
        cout<<arr1[j]<<" ";
    cout<<"\n";
    for(int j=0;j<n;j++)
        cout<<arr2[j]<<" ";
    cout<<"\n";
    for(int j=0;j<n;j++)
        cout<<arr3[j]<<" ";

    return 0;
}