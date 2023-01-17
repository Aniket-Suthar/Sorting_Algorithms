#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fon for(i=0;i<n;i++)
#define foj for(j=0;j<n;j++)
#define f(i, x, n) for (i = x; i < n; i++)
#define bf(i,z,n) for(ll i=z;i>=n;i--)
#define PI 3.141592653589793
#define maxa *max_element
#define mina *min_element
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define cina(a,n) for(ll i=0;i<n;i++){cin>>a[i];}
#define cin1 for(ll i=0;i<n;i++){cin>>a[i];}
#define couta(a,n) for(ll i=0;i<n;i++){cout<<a[i]<<' ';}

void selectionsort(vector <int> &array ,int size){
    for (int i = 0; i < size-1; i++)
    {
        int minindex=i;
        for (int j =i+1; j <size;  j++)
        {
           if(array[j]<array[minindex]){
            minindex=j;
        
           }
        
        }  
             swap(array[minindex],array[i]);
             cout<<"\nTHe Comparison/Shifting : "<<array[minindex]<<"-->"<<array[i]<<"\n";
             
    }
    
}



int main()
{
    
vector<int>v={1,22,44,2,3};
int l=v.size();
selectionsort(v,l);
for (int i = 0; i < l; i++)
{
    cout<<v[i]<<" ";
}

return 0;
}