#include <iostream>
#include <vector>

using namespace std;

int dupli_arr(vector<int> &arr, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() 
{
    vector<int> arr {1, 2, 3, 4, 5, 6, 7, 8, 9, 2};
    int n = arr.size();
    int duplicates = dupli_arr(arr, n);
    cout << "Number of duplicate elements in the array: " << duplicates << endl;
    return 0;
}
