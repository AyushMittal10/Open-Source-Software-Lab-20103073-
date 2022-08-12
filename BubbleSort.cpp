#include <iostream>
#include <climits>

using namespace std;


void bubble_sort (int arr[], int n)
{
    for (int itr = 1; itr <= n-1; itr++)
    {
        for (int j = 0; j<= (n-itr-1) ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                
                swap (arr[j], arr[j+1]);
                
            }
            
        }
        
    }
    
    
}



int main()
{
    
    int num, key;
    
    cin >> num;
    
    int a[1000]; 
    
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    bubble_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    
    return 0;
}
