// #include <stdio.h>
// #define FOR(I,N) for ((I) = 0; (I) < (N); (I)++)
// #define UP 1
// #define DOWN 0
// int main()
// {
//     int n = 0;
//     int a = 1;
//     int b = 1;
//     int flag = UP;
//     scanf("%d",&n);
//     FOR(i,n-1)
//     {
//         if (flag)
//         {
//             if (a==1)
//             {
//                 b++;
//                 flag = DOWN;
//             }
//             else
//             {
//                 a--;
//                 b++;
//             }
//         }
//         else
//         {
//             if (b==1)
//             {
//                 a++;
//                 flag = UP;
//             }
//             else
//             {
//                 a++;
//                 b--;
//             }
//         }
//     }
//     printf("%d/%d",a,b);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// double a,b,c,d;
// #define FOR(L,R) for(int i = L;i<R;i++)
// double ret(double x)
// {
//     return a*pow(x,3)+b*pow(x,2)+c*x+d;
// }
// int main()
// {
//     int s = 0;
//     scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
//     FOR(-100,100)
//     {
//         double l = i;
//         double r = i+1;
        
//         if (ret(l)*ret(r)<0)
//         {
//             while (r-l >= 0.001)
//             {
//                 double m = (l+r)/2;
//                 if (ret(m) == 0) 
//                 {
//                     printf("%.2lf ",m);
//                     s++;
//                     goto end;
//                 }
//                 else if (ret(m)*ret(l) < 0) r = m;
//                 else l = m;
//             }
//             printf("%.2lf ",l);

//         }
//         else if (ret(l) == 0) printf("%.2lf ",l);
//         end:
//         ;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int l,m,u,v;
//     scanf("%d%d",&l,&m);
//     char arr[(int)1e4+1] = {0};
//     int s = 0;
//     for (size_t i = 0; i < m; i++)
//     {
//         int u,v;
//         scanf("%d%d",&u,&v);
//         for (size_t j = u; j < v+1; j++)
//         {
//             arr[j] -= 1;
//         }
        
//     }
//     for (size_t i = 0; i < l+1; i++)
//     {
//         if(arr[i] == 0) s++;
//     }
//     printf("%d\n",s);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int cmp(const void* pe1,const void* pe2)
// {
//     return *(int*)pe1 - *(int*)pe2;
// }
// int main()
// {
//     int arr[100] = {0};
//     int pl[100] = {0};
//     int n;
//     int m = 0;
//     int ind = 0;
//     int cur = 0;
//     scanf("%d",&n);
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&(arr[i]));
//     }
    
    
//     qsort(arr,100,4,cmp);
//     // for (size_t i = 0; i < 100; i++)
//     // {
//     //     printf("%d ",arr[i]);
//     // }
//     for (size_t i = 0; i < 100; i++)
//     {
//         if (arr[i] == cur) ;
//         else
//         {
//             cur = arr[i];
//             m++;
//             pl[ind++] = arr[i];
            
//         }
//     }
//     printf("%d\n",m);
//     for (size_t i = 0; i < m; i++)
//     {
//         printf("%d ",pl[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     size_t n;
//     scanf("%d",&n);
//     if (n%2 == 0) printf("%d",n/2);
//     else
//     {
//         for (int i = 3; i <= sqrt(n); i+=2)
//         {
//             if (n % i == 0) 
//             {
//                 printf("%d",n/i);
//                 break;
//             }
//         }
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int deposit = 0;
//     int cur = 0;
//     int i = 1;
//     int arr[12] = {0};
//     for (size_t i = 0; i < 12; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     for (i = 1;i<=12;i++)
//     {
//         int budget = arr[i-1];
//         cur += 300;
//         int r = cur - budget;
//         if (r<0)
//         {
//             printf("%d",-i);
//             break;
//         }
//         else
//         {
//             deposit += (r/100)*100;
//             cur -= (r/100)*100+budget;
//         }
//         // printf("%d %d\n",deposit,cur);
//     }
//     if (i>12)
//     {
//         printf("%.0lf",cur+deposit*1.2);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[10000] = {0};
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int s = 0;
//     for (int i=n-1; i>0; i--)
//     {
//         for (size_t j = 0; j < i; j++)
//         {
//             if (arr[i] < arr[i-j-1]) s++;
//         }
//     }
//     printf("%d",s);
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);
//     int cur = 0;
//     int arr[100] = {0};
//     printf("%d\n",n);
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             if (i == j) printf("%d",arr[j]);
//             else printf("%d",arr[j] = !arr[j]);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,k;
//     scanf("%d%d",&n,&k);
//     int cur = n;
//     int s = 0;
//     if (k>n) printf("%d",n);
//     else
//     {
//         while (cur>=k)
//         {
//             s += (cur/k*k);
//             cur -= cur/k*(k-1);
//         }
//         printf("%d",s+cur);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// void sub(int i,int *parr)
// {
//     parr[0] = i%1000;
//     parr[1] = i/100;
//     parr[2] = (i%10000)/10;
// }
// int main()
// {
//     int k;
//     int s = 0;
//     scanf("%d",&k);
//     int arr[3] = {0};
//     for (int i=10000;i<=30000;i++)
//     {
//         sub(i,arr);
//         if ((arr[0]%k == 0) && (arr[1]%k == 0) && (arr[2]%k == 0))
//         {
//             printf("%d\n",i);
//             s++;
//         }
//     }
//     if (!s) printf("No");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int cmp(const void*e1,const void*e2)
{
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    int n;
    int i = 0;
    scanf("%d",&n);
    int* pa = (int*)malloc(4*n);
    int* pl = (int*)malloc(4*(n-1));
    
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&pa[i]);
    }
    for (size_t i = 0; i < n-1; i++)
    {
        int sub = pa[i] - pa[i+1];
        pl[i] = (sub<0 ? -sub:sub);
    }
    qsort(pl,n-1,sizeof(int),cmp);
    for (i = 1;i<=n-1;i++)
    {
        if (i != pl[i-1])
        {
            printf("Not jolly");
            break;
        }
    }
    if (i>n-1) printf("Jolly");
    
    free(pa);
    pa = NULL;
    free(pl);
    pl = NULL;
    return 0;
}





















