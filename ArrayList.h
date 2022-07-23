
struct ArrayList
{
    int* arr;
    int count;
    int capacity;
};


void array_list_realloc(ArrayList**);


void array_list_push_back(ArrayList**,int);
void array_list_push_front(ArrayList**,int);


void array_list_pop_back(ArrayList**);
void array_list_pop_front(ArrayList**);





