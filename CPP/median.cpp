#include <iostream>
using namespace std;

int main()
{
    int in, i, a, median_class;
    cout << "Enter the number of rows of data :: ";
    cin >> in;
    in++;
    double mean, ci[in][2],f[in], cw, cf[in],median;

    // Index 0 stores the sum of the array elements.
    // N=f[0]

    // Data Input:
    for (i = 1; i < in; i++)
    {
        cout << "\nEnter class interval(Lowerlimit) : ";
        cin >> ci[i][0];
        cout << "\nEnter class interval(Upperlimit) : ";
        cin >> ci[i][1];
        cout << "\nEnter frequency : ";
        cin >> f[i];
        f[0] += f[i];
    }

    // Finding Class width
    cw = ci[1][1] - ci[1][0];

    //finding median class
    median_class = in/2;
    
    //finding Cumulative frequency
    for(i=1; i<in; i++){
        cf[i]+=f[i];
    }
    
    median=ci[median_class][0]+(((f[0]/2-cf[median_class-1])/f[median_class])*cw);
    cout<<"Median : "<<median<<endl;
    return 0;
}