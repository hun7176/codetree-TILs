#include <iostream>
using namespace std;
int arr[101] = { 0, };
int temp[101] = { 0, };
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;

    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (a > i || b < i) {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 1; i < count; i++) {
            arr[i] = temp[i];
    }
    int count2 = 1;
    cin >> a >> b;
    for (int i = 1; i < count; i++) {
        if (a > i || b < i) {
            temp[count2] = arr[i];
            count2++;
        }
    }
    
    cout<<count2-1<<"\n";
    for (int i = 1; i < count2; i++) {
        cout << temp[i]<<"\n";
    }
    return 0;

}