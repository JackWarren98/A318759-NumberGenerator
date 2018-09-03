#include <iostream>

using namespace std;

void Number_Generator();

int main()
{
    Number_Generator();
    return 0;
}

void Number_Generator()
{
    int Number_Tested=1; int Temporary;
    int Divideby=3;
    //For numbers bigger than this you need to use unsigned long int or do some large number implementation.
    int Limit=38000;
    while(Number_Tested<Limit)
    {
        Temporary=Number_Tested;
        //There are two cycles. 1 and 7 are the smallest numbers in those cycles.
        while((Temporary!=1) && (Temporary!=7))
        {
            if(Temporary%Divideby)
                Temporary=(Temporary*(Divideby+1)+(Divideby-(Temporary%Divideby)))/Divideby;
            else
                Temporary=Temporary/Divideby;
        }
        if(Temporary==1)
            cout<<Number_Tested<<"\n";
        Number_Tested++;
    }
}
