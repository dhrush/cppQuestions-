#include<iostream>

float getPower(float x, int y)
{
    float temp;
    if(y == 0)
        return 1;
    else
    {
        temp = getPower(x,y/2);
        if(y%2 == 0)
            return temp*temp;
        else
        {
            if(y>0)
                return temp*temp*x;
            else 
                return (temp*temp)/x;
        }
    }
}

 int main()
 {
     float x = 2;
     int y = -3;
     float ans = getPower(x,y);
     std::cout<<ans<<std::endl;
 }