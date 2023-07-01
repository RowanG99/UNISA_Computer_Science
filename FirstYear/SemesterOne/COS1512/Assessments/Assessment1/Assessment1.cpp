//#define NDEBUG

#include <cassert>



int main()

{

    int x = 7;

   /*  Some big code in between and let's say x

       is accidentally changed to 9  */

    x = 9;

     // To ensure that x will be 7 in rest of the code

    assert(x==7);

    /* Rest of the code */

    return 0;

}
