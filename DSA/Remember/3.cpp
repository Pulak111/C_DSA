#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }cout << endl;
}
vector<int> myfunc(int n){
    vector<int> ans;//agar me vector<char> return karoonga to error ayega 
    for (int i = 0; i < n; i++){//kyki upar defuine kiya hai ki return type of func hai ek 
        ans.push_back(i);//vector jo ki int store kar rhai lekin mai ek vector jo ki
    }                      //char store kar raha hai use return karne ki koshish kar rha hu
    return ans;
} 
int main(){
    
    vector<int> a = myfunc(3);//maine khud se koi vector intit banaya hai
    print(a);                 //par fir bhi a ke andar {0, 1, 2} agya kykuki myfunc ek 
    print(myfunc(5));         //vector return kar rha ahi
}