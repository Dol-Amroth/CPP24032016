#include <cstdlib>
#include <iostream>

using namespace std;


#include "f1.h"

int main()
{
    int j,k;
    cout<<"������� ������� �������������� � = ";
    cin>>j;
       cout<<"������� ������� �������������� b = ";
    cin>>k;
    // ������� ������ ����� ������
    
    SumRec obj;
    // ������������� (�������� ������)
    obj.setDate(j,k);
    cout<<"������� �������������� = ";
    cout<<obj.sumR()<<endl;

 system("pause");
    return 0;
}
