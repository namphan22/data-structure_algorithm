#include<iostream>
#include<stdint.h>
using namespace std;

class BINARY_SEARCH
{
    public:
    int32_t binary_search(uint32_t *a,uint32_t left,uint32_t right,uint32_t target_num)
    {
        if(right>=left)
        {
        uint32_t middle_element = (left+right)/2;
        if(a[middle_element]==target_num)
            return middle_element;

        if(a[middle_element]<target_num)
            return binary_search(a,middle_element+1,right,target_num);
        return binary_search(a,left,middle_element-1,target_num);
        }
        return 0;
        
     }
};
int main()
{
   uint32_t a[]={1,2,3,55,76,77,79,81,83};
   uint32_t length_a = sizeof(a)/sizeof(uint32_t);
    uint32_t target_number =9;
    BINARY_SEARCH b1;
    (b1.binary_search(a,0,length_a-1,target_number)!=0 )?std::cout << "Yes" : std::cout << "No"; 
    


}
    