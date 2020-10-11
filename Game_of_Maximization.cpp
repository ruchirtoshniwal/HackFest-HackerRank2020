
#include <iostream>
using namespace std;
 
int main()
{
    int n,i,even=0,odd=0;
    int numbers[ 100 ];
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>numbers[i];
    }
    for(i=0;i<n;i++) {
        if(i%2==0){
            odd += numbers[i];
        }
        else {
            even += numbers[i];
        }
    }
    if(even == odd) {
        printf("%d",2*even);
    }
    else if (even > odd) {
        printf("%d",2*odd);
    }
    else if (even < odd) {
        printf("%d",2*even);
    }
        
    
    return 0;
}
