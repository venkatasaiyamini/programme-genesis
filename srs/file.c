#include <calc.h>



int add(int a, int b)

{

    return a + b;

}



int subtract(int a, int b)

{

    return a- b;

}



int multiply(int a, int b)

{

    return a * b;

}



int divide(int a, int b)

{

    if(0 == b)

        return 0;

    else

        return a/b;

}
