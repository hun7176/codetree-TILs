#include <iostream>
using namespace std;

int arr[201][201];
int n,m;
int tetris[6][3][3]={
    {
        {1,1,0},
        {0,1,0},
        {0,0,0}

    },
    {
        {0,1,0},
        {1,1,0},
        {0,0,0}

    },
    {
        {1,0,0},
        {1,1,0},
        {0,0,0}

    },
    {
        {1,1,0},
        {1,0,0},
        {0,0,0}

    },
    {
        {1,1,1},
        {0,0,0},
        {0,0,0}

    },
    {
        {1,0,0},
        {1,0,0},
        {1,0,0}

    },
};
int sum_func(int x, int y){
    int result=0;
    int maximum=0;
    for(int k=0;k<6;k++){
        result=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(tetris[k][i][j]){
                    if(x+i>=n || y+j>=m){//레이어 밖으로 넘어갈때 예외처리
                        continue;
                    }
                    else {
                        result+=arr[x+i][y+j];
                    }
                }
            }
        }
    maximum=max(maximum,result);
    }
    return maximum;

}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;
            arr[i][j]=temp;
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result=max(result,sum_func(i,j));
        }
    }
    cout<<result;
    return 0;
}