#include <iostream>
using namespace std;

int n,m;
int arr[21][21];

int cal_grid_cost(int k){
    int sum=0;
    sum=k*k+(k+1)*(k+1);
    return sum;
}
int cal_gold_cost(int i, int j, int k){
    int count_one=0;
    for(int x=i-k;x<=i+k;x++){
        if(x<1 || x>20) continue;
        int sub_count=abs(k-abs(i-x));
        for(int y=j-sub_count;y<=j+sub_count;y++){
            if(y<1 || y>20) continue;
            if(arr[x][y]==1){
               // cout<<"좌표 arr["<<x<<"]["<<y<<"]"<<"에서 코인을 발견!"<<"\n";
                count_one++;
            }
        }
    }
    return count_one;
}

//111 넣었다고 가정!


int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int grid_cost=0;
    int gold_cost=0;
    int tot_cost=0;
    int max_gold=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //cout<<"현재좌표 : arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"\n";
            for(int k=0;k<=2*(n-1);k++){
            //    cout<<"현재 k : "<<k<<" ";
                grid_cost=cal_grid_cost(k);
             //   cout<<"grid cost는 "<<grid_cost<<"\n";
                gold_cost=cal_gold_cost(i,j,k);
             //   cout<<"gold cost는 "<<gold_cost<<"\n";
                if(m*gold_cost-grid_cost>=0){
                    max_gold=max(max_gold,gold_cost);
            //        cout<<"max_gold 는 "<<max_gold<<"\n";
                }
            }
        }
    }
    cout<<max_gold;
    return 0;
}