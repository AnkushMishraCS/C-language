// prototype ke baad , ab ham    function ko kahi bhee rakh de ye  (upar ya neeche kahi bhee )run krega .
#include <stdio.h>
int main()
{

    //  way to give prototype.
    void india();
    india();
    return 0;
}

void india()
{

    printf("You are in India \n");
    void australia();
    australia();
    return;
}
void australia()
{
    printf("You are in Australia \n");

    void america();
    america();
    return;
}

void america()
{

    printf("You are in America ");
    return;
}