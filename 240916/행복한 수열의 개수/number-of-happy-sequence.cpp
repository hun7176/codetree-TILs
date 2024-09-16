#include <iostream>
using namespace std;
int main(){
    int arr[101][101]={0};
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
    }
    int result=0;
    int count=1;
    for(int i=0; i<n; i++){
        count=1;
        for(int j=0; j<n-1; j++){
            if(arr[i][j]==arr[i][j+1]){
                count++;
            }
            else{
                count=1;
            }
        }
        if(count>=m){
            result++;
        }
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n-1;j++){
            if(arr[j][i]==arr[j+1][i]){
                count++;
            }
            else{
                count=1;
            }
        }
        if(count>=m){
            result++;
        }
    }

    cout<<result;
    return 0;
}