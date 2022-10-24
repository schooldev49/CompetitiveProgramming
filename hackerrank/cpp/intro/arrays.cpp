#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin >> n;
    string e;
    int hello[n];
    int arraySize = sizeof(hello) / sizeof(hello[0]);

    for (int i=0; i<arraySize; i++){
        cin >> hello[i];
    }
   
    for (int i=arraySize; i>0; i--){
        cout << hello[i-1] << " ";
    }

    return 0;
}
