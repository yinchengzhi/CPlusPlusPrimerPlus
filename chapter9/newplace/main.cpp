#include <iostream>
#include <new>                              //for placement new
const int BUF = 512;
const int N = 5;
char buffer[BUF];                           //chunk of memory

int main()
{
    using namespace std;
    double *pd1,*pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new double[N];                    // use heap
    pd2 = new(buffer) double[N];            // use buffer array
    for(i = 0;i < N;i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout<<"Buffer addresses:\n" << " heap: "<<pd1
    <<" static: "<<(void *)buffer<<endl;
    cout<<"Buffer contents:\n";
    for(i=0;i<N;i++){
        cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";
        cout<<pd2[i]<<" at "<<&pd2[i]<<endl;
    }
    return 0;
}