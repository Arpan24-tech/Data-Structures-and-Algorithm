#include<iostream>

using namespace std;

int digonal_sum(int arr[3][3], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
            if(i == j){
                sum += arr[i][j];
            }
           else if(j==col-1-i){
                sum += arr[i][j];
            }   
    }
   
}
 return sum;
}

int optimal_digonal_sum(int arr[3][3], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        sum += arr[i][i];
        if(i != col-1-i){
            sum += arr[i][col-1-i];
        }
    }
    return sum;
}
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    cout << "Digonal sum is: " << digonal_sum(arr, row, col) << endl;
    cout << "Optimal Digonal sum is: " << optimal_digonal_sum(arr, row, col) << endl;
    return 0;
}
