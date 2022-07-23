#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ArrayList.h"

using namespace std;


void array_list_time_test(int count)
{
    ArrayList* list = NULL;
    clock_t begin,end;

    cout << "ArrayList Time : " << endl;

    begin = clock();
    for(int  i = 0;i < count ;i++)
    {
        array_list_push_back(&list,rand()%10000);
    }
    end  = clock();
    cout<< "Push Back : " << (double)(end-begin)/CLOCKS_PER_SEC << endl;


     begin = clock();
    for(int  i = 0;i < count ;i++)
    {
        array_list_pop_back(&list);
    }
    end  = clock();
    cout<< "Pop Back : " << (double)(end-begin)/CLOCKS_PER_SEC << endl;




    begin = clock();
    for(int  i = 0;i < count ;i++)
    {
        array_list_push_front(&list,rand()%10000);
    }
    end  = clock();
    cout<< "Push Front : " << (double)(end-begin)/CLOCKS_PER_SEC << endl;


    begin = clock();
    for(int  i = 0;i < count ;i++)
    {
        array_list_pop_front(&list);
    }
    end  = clock();
    cout<< "Pop Front : " << (double)(end-begin)/CLOCKS_PER_SEC << endl;

}



int main()
{
    srand(time(NULL));
    array_list_time_test(10000);

    return 0;
}
