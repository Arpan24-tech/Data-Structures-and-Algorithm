#include<iostream>

using namespace std;

int max_sum(int arr[3][3], int row, int col){
    int max_sum = 0;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    cout << "Maximum row sum is: " << max_sum(arr, row, col) << endl;
    return 0;
}