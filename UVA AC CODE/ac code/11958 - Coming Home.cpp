#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define inf (1<<29)
#define akbarbe ceil
#define akkombe floor
#define bug(x) cout<<#x<<" = "<<x<<endl
#define N 1000000
#define LL long long
#define delect(str) str.erase(std::remove_if(str.begin(), str.end(), str[i]), str.end());

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

/*bool mark[N];
vector<int>prime;
void seive()
{
    mark[0]=1;
    mark[1]=1;
    mark[2]=0;
    for(int i=3; i*i<=N; i+=2)
    {
        if(mark[i]==0)
        {
            for(int j=i*i; j<=N; j+=i+i) mark[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3,k=1; i<=N; i+=2)
    {
        if(mark[i]==0) prime.push_back(i);
    }
}*/
/*LL divisor_count(LL n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n) c+=1;
        else if(n%i==0) c+=2;
    }
     return c;
}*/
/*
class data{
    public:
  int x,y;
};
bool cmp(const data &a, const data &b)
{
    if(a.x < b.x) return true;
    else if(a.x == b.x)
    {
        if(a.y > b.y) return true;
    }
    return false;
}*/
///Geometry///
/*double perimeter(double A,double B,double C)
{
    return A+B+C;
}
double semi_perimeter(double A,double B,double C)
{
    return perimeter(A,B,C)/2.0;
}
double TAREA(double A,double B,double C)
{
    double S=semi_perimeter(A,B,C);
    return sqrt(S*(S-A)*(S-B)*(S-C));
}
double incircle(double A,double B,double C)
{
    return TAREA(A,B,C)/semi_perimeter(A,B,C);
}
double excircle(double A,double B,double C)
{
    double AA=TAREA(A,B,C);
    return A*B*C/(4*AA);
}*/
/*int a[101][305];
void fact()
{
    memset( a , 0 , sizeof a);
    a[0][0]=1;
    a[1][0]=1;
    long long i,j;
    for(i=2; i<=100; i++)
    {
        for(j=0; j<=300; j++)
        {
            a[i][j]+=i*(a[i-1][j]);
            if(a[i][j]>9)
            {
                a[i][j+1]=a[i][j]/10;
                a[i][j]%=10;
            }

        }
    }
}*/
int main()
{
    int t,k,hh,mm,m1,h,m,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        int maxi = 1000000000;
        scanf("%d %d:%d",&k,&h,&m);
        h = (h*60)+m;
        for(int i=1;i<=k;i++)
        {
             int ans = 0;
            scanf("%d:%d %d",&hh,&mm,&m1);
             int a = (hh*60)+mm;
             if(a<h) a+=(24*60);
            int b = a-h;

            ans=b+m1;
            maxi=min(ans,maxi);
        }
        printf("Case %d: %d\n",++cs,maxi);
    }
    return 0;
}


