#include <iostream>
#include <cmath>
using namespace std;
class QuadraticEquation
{
    private:
         float a, b, c; /*Coefficients of the equation*/
         float root1, root2; /*results for real solution*/
         float discriminant;
         float realPart, imaginaryPart; /*results for imaginary solution*/
    public:
        void get_QuadraticEquation (int a, int b, int c)
        {
            cin>>a;
            cin>>b;
            cin>>c;
        }

        int find_discriminant (float a, float b, float c)
        {
            return b*b-4*a*c;
        }

        float roots(float a, float b, float c)
        {
            if((b*b-4*a*c)>0)
            {
                float root1 = ((( -b ) + sqrt(discriminant)) / 2*a );
                return root1;
                float root2 = ((( -b ) - sqrt(discriminant)) / 2*a );
                return root2;
            }
        }

       float roots(float a, float b, float c)
       {
           if((b*b-4*a*c)=0)
           {
               float root1= (-b)/(2*a);
               return root1;
           }
       }

       float roots(float a, float b, float c)
       {
           if((b*b-4*a*c)<0)
           {
               float realPart = (-b)/(2*a);
               float imaginaryPart = sqrt(-discriminant)/(2*a);
               return realPart+imaginaryPart;
               return realPart-imaginaryPart;
           }
       }
};

int main()
{
    cout<<"The discriminant is: "<<find_discriminant()<<endl;
    roots();
    cout<<"The roots of the equation are: "<<roots()<<endl;
    return 0;
}














