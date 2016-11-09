#include <iostream>  
using namespace std;  
 
void fn();  
  
int main(void)  
{  
    fn();  
    fn();  
    fn();  
    return 0;  
}  
  
void fn()  
{  
    static int n = 10;  
    cout<<n<<endl;  
    n++;  
}  
 
