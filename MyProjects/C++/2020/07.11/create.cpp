
// clang-format off

#include "caryon.h"
#include <iostream>

using namespace std;
using namespace ca;
int main() {
    dataname="millar";
    makein(1,20)
    {
        csh;
        int n=cyrand(5,1e5);
        inint(n);
        instring("\n");
        for(int i=0;i<n-1;i++){
            inint(cyrand(2,2147483647));
            instring(" ");
        }
        inint(cyrand(2,2147483647));
        instring("\n");
    }
    makeout(1,20);
}
