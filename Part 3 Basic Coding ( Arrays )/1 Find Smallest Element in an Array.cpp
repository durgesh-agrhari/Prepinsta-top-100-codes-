#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<min)
        {
            min =arr[i];
        }
    }
    cout<<min<<" ";
    return 0;
}




// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;


// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     cout<<arr[0]<<" ";
//     return 0;
// }