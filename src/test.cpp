#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include "test1.h"

int test()
{
    bool check=false;

    int om=80,om1=90,om2=300;

    int plos=3.14*(80*80),perim=2*3.14*80;

    if (plos==20096)
        check=true;

    if (perim==502)
	{
        check=true;
	}

        int maxp1=0,max1p1=0, maxp11=0,max1p11=0, maxp2=0,max1p2=0, maxp22=0,max1p22=0;
        bool flag1,flag2,flag3,flag4;

        maxp1=om1+om;
        max1p1=om1+om;

        maxp11=om1-om;
        max1p11=om1-om;


        maxp2=om2+om;
        max1p2=om2+om;

        maxp22=om2-om;
        max1p22=om2-om;


        if(maxp1>maxp22)
        {
            flag1=true;
        }
        else
        {
            flag1=false;
        }

        if(maxp11>maxp2)
        {
            flag2=true;
        }
        else
        {

            flag2=false;
        }

        if(max1p1>max1p22)
        {
       flag3=true;
        }
        else
        {

         flag3=false;
        }

        if(max1p11>max1p2)
        {
       flag4=true;
        }
        else
        {

         flag4=false;
        }

    if(flag1==true||flag2==true||flag3==true||flag4==true)
    {
     check=false;
    }
    else
    {
    check=true;
    }

return check;
}
