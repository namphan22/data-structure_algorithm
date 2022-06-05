#include<iostream>
#include<stdint.h>
using namespace std;

void swap(uint16_t *p1,uint16_t *p2)
{
    uint16_t temp;
    temp = *p1;
    *p1= *p2;
    *p2 =temp;
}
void selection_sort(uint16_t *a,uint16_t length)
{
    uint8_t index1;
    uint8_t min_index;
    uint8_t index2;
    for(index1=0;index1<length-1;++index1)
    {
        min_index = index1;
        for(index2=index1+1;index2<length;++index2)
        {
            if(a[min_index]>a[index2]) min_index = index2;

        }
        swap(&a[index1],&a[min_index]);
        

    }
}
void print(uint16_t *a,uint16_t length)
{
    uint8_t i;
    for(i=0;i<length;i++)
    {
        cout<< a[i]<<"\n";
    }
}
int main()

{
    uint16_t a[]={61,25,12,22,11};
    uint16_t length = sizeof(a)/sizeof(uint16_t);
    selection_sort(a,length);
    cout<<"sorted array\n";
    print(a,length);
}
