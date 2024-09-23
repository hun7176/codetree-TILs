#include <iostream>
using namespace std;

int arr[201][201];
int update_arr[201][201];
int n;

void make_zero(int a, int b){
    a--;
    b--;
    int move=arr[a][b]-1;
    for(int i=-move;i<=move;i++){
        if(a+i<0 || a+i>200) continue;
        arr[a+i][b]=0;
    }
    for(int i=-move;i<=move;i++){
        if(b+i<0 || b+i>200) continue;
        arr[a][b+i]=0;
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

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     std::cout<<"\n";
    // }    

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
//    std::cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<update_arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}