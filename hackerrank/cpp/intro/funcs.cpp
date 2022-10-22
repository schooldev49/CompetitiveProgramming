#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
   vector<int> ok = {a,b,c,d};
   sort(ok.begin(),ok.end());
   return ok[ok.size() - 1];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
