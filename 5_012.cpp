#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    auto s = 0,m = 0,e = n-1;
    while(m<=e){
        switch(*(arr+m)){
            case 0:
                swap(*(arr+s),*(arr+m));
                s++;m++;
                break;
                
            case 1:
                m++;
                break;
                
            case 2:
                swap(*(arr+m),*(arr+e));
                e--;
                break;
        }
    }
}