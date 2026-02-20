#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool linearSearch(int arr[][3], int target, int row, int col){
    for (int i = 0;i<row;i++){
        for (int j = 0;j<col;j++){
            if (arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

void rowSum(int arr[][3], int i, int j){
    
    for (int row = 0;row<i;row++){
        int sum = 0;
        for (int col = 0;col<j;col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void colSum(int arr[][3], int i, int j){
    
    for (int row = 0;row<i;row++){
        int sum = 0;
        for (int col = 0;col<j;col++){
            sum += arr[col][row];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int a[][3], int row, int col){
    int maxi = INT_MIN;
    for (int i = 0;i<row;i++){
        int sum = 0;
        for (int j = 0;j<col;j++){
            sum += a[i][j];
        }
        maxi = max(maxi,sum);
    }
    return maxi;
}

int binarySearch(vector<vector<int>>& arr, int target){
    int rows = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = rows*col - 1;

    int mid = start + (end - start )/2;
    while(start<=end){
        int element = arr[mid/col][mid%col];

        if (element == target){
            return true;
        }

        if (element < target){
            start = mid + 1;
        }

        if (element > target){
            end = mid - 1;
        }

        mid = start + (end - start )/2;

    }
    return false;
}
int main(){

    int a[3][3] = {{1,2,4},{5,32,43},{23,80,100}};

    vector<vector<int>> arr;

    


    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            cout << "Enter value for [" << i << "][" << j << "] = " << endl;
            cin >> arr[i][j];
        }
    }

    cout << "Your Output = " << endl;
    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


/*
    cout << "Enter element to find : " << " ";
    cin >> target;
    if (linearSearch(a, target , 3 , 3)){
        cout << "Element found " << endl;
    }
    else{
        cout << "Not found" << endl;
    }
*/
    cout << "Sum of rows : " << endl;
    rowSum(a,3,3);
    cout << "Sum of Columns : " << endl;
    colSum(a,3,3);
    int large = largestRowSum(a,3,3);
    cout << "largest row sum = " << large << endl;
}