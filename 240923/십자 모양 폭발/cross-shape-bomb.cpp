#include <iostream>
using namespace std;

int arr[201][201];
int update_arr[201][201];
int n;

void make_zero(int a, int b){
    a--;
    b--;
    int temp=arr[a][b];
    for(int i=-(temp-1);i<=temp-1;i++){
        if(a-i<0 || b-i<0 || a-i>=n || b-i>=n) continue;
        arr[a-i][b]=0;
        arr[a][b-i]=0;
    }
}


int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int a,b;
    cin>>a>>b;
    make_zero(a,b);


    int count=n-1;
    for(int j=0;j<n;j++){
        count=n-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i][j]==0){
                continue;
            }
            else{
                update_arr[count][j]=arr[i][j];
                count--;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<update_arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}