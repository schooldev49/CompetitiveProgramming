#include <iostream>
#include <cstdio>

#include <vector>
using namespace std;

int main() {
    // Complete the code.
    
    
    int int1;
    int int2;
    vector<string> ok = {"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%i\n%i",&int1,&int2);
    for (int i=int1; i<=int2; i++){
        if (i >= 1 && i <= 9){
        
        cout << ok[i - 1] << endl;
            
        
        } else if (i > 9) {
              if ((i % 2) == 0){
            cout << "even" << endl ;   
        } else {
           cout << "odd" << endl ; 
        }
        
        }
        //printf("%d\n%d\n%d\n%d",);
    }
 //   printf("%d %d %d %d",int1,int2);
    return 0;
}
