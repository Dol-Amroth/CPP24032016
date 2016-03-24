#include <cstdlib>
#include <iostream>

using namespace std;


#include "f1.h"

int main()
{
    int j,k;
    cout<<"Введите сторону прямоугольника а = ";
    cin>>j;
       cout<<"Введите сторону прямоугольника b = ";
    cin>>k;
    // создаем объект этого класса
    
    SumRec obj;
    // устанавливаем (передаем данные)
    obj.setDate(j,k);
    cout<<"Площадь прямоугольника = ";
    cout<<obj.sumR()<<endl;

 system("pause");
    return 0;
}
