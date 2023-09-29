

#include <iostream>
#include <math.h>
using namespace std;

void HanoTower(int m, char A, char B, char C)
{ 
    
    
    if (m > 0)
    {
        HanoTower(m - 1, A, C, B);
        cout << m << A << "   from" << "   to" << B << endl;    
        HanoTower(m - 1, C,B,A );
    }    
}
int main()
{
   
    int towernumber;
    cout << "Enter your towernumber";
    cin >> towernumber;
    HanoTower(towernumber, 'A', 'B', 'C');
    cout << pow(2, towernumber) - 1 << endl;
}

