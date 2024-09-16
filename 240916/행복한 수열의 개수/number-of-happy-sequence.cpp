#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n, m;
int grid[MAX_N][MAX_N];

int seq[MAX_N];

bool is_seq(){
    int count=1;
    int max_count=1;
    for(int i=1;i<n;i++){
        if(seq[i-1]==seq[i]){
            count++;
        }
        else{
            count=1;
        }
        max_count=max(max_count,count);
    }
    return max_count>=m;

}


int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            seq[j]=grid[i][j];
        }
        if(is_seq()){
            result++;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            seq[j]=grid[j][i];
        }
        if(is_seq()){
            result++;
        }
    }
    cout<<result;
}