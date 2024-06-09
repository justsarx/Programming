#include <iostream>
using namespace std;

int main()
{
    int in, i, a;
    cout << "Enter the number of rows of data :: ";
    cin >> in;
    in++;
    double mean, ci[in][2], x[in], f[in], fx[in], d[in], fd[in], cw;

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

    // Finding X
    for (i = 1; i < in; i++)
    {
        x[i] = (ci[i][0] + ci[i][1]) / 2;
        x[0] += x[i];
    }

    // Assumed mean = Middlemost value
    a = x[in / 2];

    // Finding fx
    for (i = 1; i < in; i++)
    {
        fx[i] = f[i] * x[i];
        fx[0] += fx[i];
    }

    // Finding d
    for (i = 1; i < in; i++)
    {
        d[i] = x[i] - a;
        d[0] += d[i];
    }

    // Finding fd
    for (i = 1; i < in; i++)
    {
        fd[i] = f[i] * d[i];
        fd[0] += fd[i];
    }

    // Calculating the mean
    mean = a + ((fd[0] / f[0]) * cw);

    //Output
    
    cout <<"\tClass\tInterval\tX\tFrequency\td\tfd "<<endl;
    for(i = 1; i < in; i++){
        cout<<"\t"<<ci[i][0]<<"\t"<<ci[i][1]<<"\t\t"<<x[i]<<"\t"<<f[i]<<"\t\t"<<d[i]<<"\t"<<fd[i]<<endl;
    }
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Sum : \t\t\t\t\t"<<f[0]<<"\t\t"<<d[0]<<"\t"<<fd[0]<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"\nArithmetic Mean = "<<mean<<endl;
    
    return 0;
}
