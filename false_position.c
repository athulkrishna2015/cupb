//this program is to find the solution of function 
//using false position method
#include<stdio.h>
#include<math.h>

float Fun(float x) 
{
	float y;
    	y = (x*x)+(2.1*x)-8.82;
        return y;
}

void fp(double a, double b)
{
    if (Fun(a) * Fun(b) >= 0) 
    {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c, epsilon=0.001;
    while (fabs(b-a) >= epsilon)

    {
        // Find middle point
        c = a-((b-a)*Fun(a))/(Fun(b)-Fun(a));

        // Check if middle point is root
        if (Fun(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (Fun(c)*Fun(a) < 0)
            b = c;
        else
            a = c;
    }

printf("The root is %f\n",c);
}

int main()

{
double a, b;
a=0; b=4;
fp(a,b);
return 0;
}
