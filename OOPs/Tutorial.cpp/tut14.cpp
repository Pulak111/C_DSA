// ****** Structure ******* Union ******** Enum ********
#include <iostream>
using namespace std;
struct employee
{ // we can also use typedef struct employee;
    int eId;
    char favcha;
    float salary;

}; // }ep;

// ******** Union is better for memory optamising ****** (for example int take 4 byte char take 1 byte float take 4 byte overall union take only 4 byte memory)
union money
{
    int rice;
    char car;
    float pound;
};
// ****** Enum *******
enum meal
{
    fast,
    lunch,
    dinner
};

int main()
{
    /* struct employee Priyanshu; //ep Priyanshhu;
    struct employee Ujjwal;
    struct employee Ritik;
    Priyanshu.eId =23;
    Priyanshu.favcha ='J';
    Priyanshu.salary =123000000;
    cout<<"The eId of Priyanshu is "<<Priyanshu.eId<<"."<<endl;
    cout<<"The fav. character  of Priyanshu is "<<Priyanshu.favcha<<"."<<endl;
    cout<<"The salary of Priyanshu is "<<Priyanshu.salary<<"."<<endl; */

    /* union money m1;
    m1.rice=34;
    m1.car='g';
    cout<<m1.car<<endl; */

    cout << fast << endl;
    cout << (lunch == 1) << endl;
    cout << (dinner < 2) << endl;

    return 0;
}
