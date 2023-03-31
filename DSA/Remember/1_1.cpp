// Vectors
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vector1)
{
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
}

int main(){
    // Key Points
        /*
            vector empty bhi ho sakta hai
            uska size change ho sakta hai
        */

    //declaration of vector
        vector<int> vector2;
        cout << "empty vector ka size kya hai -> " << vector2.size() << endl;

    // Initialisation of Vector
        int arr[] = {1, 2, 3, 4, 5};
        int n = sizeof(arr) / sizeof(arr[0]);
        vector<int> vector1(arr, arr + n);
        //vector<int> vector1{1, 2, 3, 4};
        cout <<"Initial size of Vector1 : " << vector1.size() << endl; // gives the size of vetor

        vector1.push_back(100); // vector will become -> {1, 2, 3, 4, 100}
        cout << "New size of Vector1: " << vector1.size() << endl;  
        cout << "New Vector after push_back : ";
        print(vector1); // print koi function nhi hai vo humne khud se upar se define kiya hai

        reverse(vector1.begin() , vector1.end()); //vector ko reverse karegea
        cout << "New Vector push_back after reverse : ";
        print(vector1);

        //2d array using vector

    
        //vector<vector<int>>

        

        


 //       to return reverse of the vector without using reverse function

        // method1 -> return reverse(vector.begin(), vector.end())
        // make a new vector and reverse

 /*       BEFORE :
        vec1 = {1, 2, 3, 4};
        vec2 = {};

        AFTER :
        vec1 = {1, 2, 3, 4};
        vec2 = {4, 3, 2, 1};  */


    //How to reverse a vector/string/array without using space and reverse function

/* vector<int> vector2 = {1, 2, 3, 4};
    int s = 0;
    int e = vector2.size() - 1;

    while (s < e){
        swap(vector2[s++], vector2[e--]);
    }
    */

    //
    return 0; 

}