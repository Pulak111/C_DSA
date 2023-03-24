#include <iostream>
using namespace std;
int main()
{
    float w;
    cout << "Enter the weight in kg:";
    cin >> w;
    while(w < 0)
    {
        cout << "Your entry is invalid." << endl;
        cout << "Enter the weight in kg again:";
        cin >> w;
    }
    double p = w*2.2046226;
    cout << w << " kg is equal to " << p << " pounds." << endl;
}