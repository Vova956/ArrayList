#include "ArrayList.h"
#include <iostream>

void array_list_realloc(ArrayList** head)
{
    if(*head == NULL)
    {
        *head = new ArrayList;
        (*head)->arr = new int[10];
        (*head)->capacity = 10;
        (*head)->count = 0;
    }
    else
    {
        int* buff = new int[(*head)->capacity*2];

        for(int i = 0;i < (*head)->count;i++)
        {
            buff[i] = (*head)->arr[i];
        }
        delete[] (*head)->arr;
        (*head)->arr = buff;
        (*head)->capacity = (*head)->capacity*2;

    }

};


void array_list_push_back(ArrayList** head ,int data)
{
    if(*head == NULL || (*head)->capacity == (*head)->count)
    {
        array_list_realloc(head);
    }

    (*head)->arr[(*head)->count] = data;
    (*head)->count = (*head)->count + 1;

}



void array_list_push_front(ArrayList** head,int data)
{
     if(*head == NULL || (*head)->capacity == (*head)->count)
    {
        array_list_realloc(head);
    }

    for(int i = (*head)->count;i > 0;i--)
    {
        (*head)->arr[i] = (*head)->arr[i-1];
    }

    (*head)->arr[0] = data;
    (*head)->count = (*head)->count + 1;
};





void array_list_pop_back(ArrayList** head)
{
    if(*head != NULL && (*head)->count > 0)
    {
        (*head)->count = (*head)->count - 1;
    }
};




void array_list_pop_front(ArrayList** head)
{
    if(*head != NULL && (*head)->count > 0)
    {

        for(int i = 0;i < (*head)->count-1;i++)
        {
           (*head)->arr[i] = (*head)->arr[i+1];
        }


        (*head)->count = (*head)->count - 1;
    }
};




