#include <iostream>
using namespace std;
int main(){
    int arr[21][21]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
    }
    int large=0;
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            large=max(large,arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
        }
    }
    cout<<large;
    return 0;
}