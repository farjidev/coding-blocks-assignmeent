#include <iostream>

using namespace std;

int main()
{
int arr[4]={1,2,3,4};

for(int i=0;i<3;i++)
{
    for(int j=i+1;j<4;j++)
    {
        cout<<arr[i]<<arr[j]<<endl;
    }
}

    return 0;
}
