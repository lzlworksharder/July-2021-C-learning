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

// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void*e1,const void*e2)
// {
//     return *(int*)e1 - *(int*)e2;
// }
// int main()
// {
//     int n;
//     int i = 0;
//     scanf("%d",&n);
//     int* pa = (int*)malloc(4*n);
//     int* pl = (int*)malloc(4*(n-1));
    
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&pa[i]);
//     }
//     for (size_t i = 0; i < n-1; i++)
//     {
//         int sub = pa[i] - pa[i+1];
//         pl[i] = (sub<0 ? -sub:sub);
//     }
//     qsort(pl,n-1,sizeof(int),cmp);
//     for (i = 1;i<=n-1;i++)
//     {
//         if (i != pl[i-1])
//         {
//             printf("Not jolly");
//             break;
//         }
//     }
//     if (i>n-1) printf("Jolly");
    
//     free(pa);
//     pa = NULL;
//     free(pl);
//     pl = NULL;
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ret = 0;
//     for (size_t i = 0; i < n; i++)
//     {
//         double a;
//         int t;
//         scanf("%lf%d",&a,&t);
//         for (int j=1; j<=t; j++)
//         {
//             int num = (int)(a*j);
//             ret ^= num;
//         }
//     }
//     printf("%d",ret);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int l,r;
//     int s = 0;
//     scanf("%d%d",&l,&r);
//     for(int i=l; i<=r; i++)
//     {
//         int cp = i;
//         while (cp)
//         {
//             if(cp%10 == 2) s++;
//             cp /= 10;
//         }
//     }
//     printf("%d",s);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int tran(char* arr)
// {
//     int ret = 1;
//     while (*arr)
//     {
//         // printf("%d\n",*arr-64);
//         ret *= (*arr)-64;
//         arr++;
//     }
//     // printf("%d\n",ret);
//     return ret;
// }
// int main()
// {
//     char arr1[7] = {0};
//     char arr2[7] = {0};
//     // printf("%d\n",'A'-64);
//     scanf("%s",arr1);
//     scanf("%s",arr2);
//     // printf("%d\n",tran("USACO"));
//     if ((tran(arr1)%47) == (tran(arr2)%47)) printf("GO");
//     else printf("STAY");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void*e1, const void* e2)
// {
//     return *(int*)e1 - *(int*)e2;
// }
// int main()
// {
//     int n,d;
//     int s = 0;
//     scanf("%d%d",&n,&d);
//     int* ps = (int*)malloc(4*n);
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&ps[i]);
//     }
//     qsort(ps,n,4,cmp);
//     for (size_t i = 0; i < n-1; i++)
//     {
//         for (size_t j = 0; j < n-1-i; j++)
//         {
//             // int sub = ps[i] - ps[i+1+j];
//             // int d0 = (sub>0 ? sub:-sub);
//             // if (d0 <= d) s++;
//             int sub = ps[i+j+1] - ps[i];
//             if (sub <= d) s++;
//             else break;
//         }
        
//     }
//     printf("%d",s);
    
    
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int isprime(int x)
// {
//     for(int i=2; i<=sqrt(x); i++)
//     {
//         if (x%i == 0) return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n==4) printf("4=2+2");
//     else
//     {
//         printf("4=2+2\n");
//         for (int i=6; i<=n; i+=2)
//         {
//             for (int j=3; j<=(i/2); j+=2)
//             {
//                 if (isprime(j) && isprime(i-j))
//                 {
//                     printf("%d=%d+%d\n",i,j,i-j);
//                     break;
//                 }
//             }
//         }
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     // printf("%d\n",(int)pow(10,3));
//     int n;
//     scanf("%d",&n);
//     int num = 1;
//     // num = 3;
//     // printf("%d",(int)( (int)(n/pow(10,(double)(num/2))) %10 *pow(10,num/2)));

//     int p = 0;
//     int flag = (n<0 ? -1:1);
//     n = (n>0 ? n:-n);
//     while (n/(int)pow(10,num))
//     {
//         // printf("%d\n",n/num/10);
//         num++;
//     }
//     // printf("%d\n",num);
//     for (size_t i = 0; i < num/2; i++)
//     {
//         int r = n%(int)pow(10,i+1)/((int)pow(10,i));
//         int l = n/(int)pow(10,num-i-1)%10;
//         // printf("%d%d\n",l,r);
//         p += l*(int)pow(10,i) + r*(int)pow(10,num-i-1);
//     }
//     if (num%2 == 1)
//     {
//         p += (int)( (int)(n/pow(10,(num/2))) %10 *pow(10,num/2));
//     }
//     printf("%d",flag*p);
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n<0) 
//     {
//         printf("-");
//         n = -n;
//     }
//     while (n%10 == 0)
//     {
//         n /= 10;
//     }
//     while (n)
//     {
//         printf("%d",n%10);
//         n /= 10;
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int* ps = (int*)malloc(4*n);
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&ps[i]);
//     }
//     for (size_t i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (size_t j = 0; j < i; j++)
//         {
//             if (ps[i] > ps[j]) count++;
//         }
//         printf("%d ",count);
        
//     }
    
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[101] = {0};
//     int n = 100;
//     while(1)
//     {
//         int i;
//         scanf("%d",&i);
//         if (!i) break;
//         arr[n--] = i;
//     }
//     for (size_t i = 0; i < 101; i++)
//     {
//         if (arr[i] == 0) continue;
//         printf("%d ",arr[i]);
//     }
    

//     return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ind = 0;
//     int count = 1;
//     int* ps = (int*)realloc(NULL,5*(count)*4);
//     while (n != 1)
//     {
//         // printf("%d ",n);
//         if (ind%5 == 0 && ind != 0)
//         {
//             ps = (int*)realloc(ps,5*(++count)*4);
//         }
//         ps[ind++] = n;
//         if (n%2 == 1) n = n*3+1;
//         else n /= 2;
//     }
//     printf("%d ",1);
//     for (size_t i = 0; i < ind; i++)
//     {
//         printf("%d ",ps[ind-i-1]);
//     }
//     free(ps);
//     ps = NULL;
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// typedef struct S
// {
//     int math;
//     int ch;
//     int eng;
// }S;
// int isgay(S s1,S s2)
// {
//     if (
//         abs(s1.eng - s2.eng) <= 5 &&
//         abs(s1.ch - s2.ch) <= 5 &&
//         abs(s1.math - s2.math) <= 5 &&
//         abs((s1.math+s1.eng+s1.ch) - (s2.ch + s2.eng + s2.math)) <= 10
//     ) return 1;
//     else return 0;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     S* ps = (S*)malloc(n*sizeof(S));
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d%d%d",&(ps[i].ch),&(ps[i].math),&(ps[i].eng));
//     }
//     int s = 0;
//     for (size_t i = 0; i < n-1; i++)
//     {
//         for (size_t j = 0; j < n-1-i; j++)
//         {
//             if (isgay(ps[i],ps[i+j+1]))
//             {
//                 s++;
//             }
            
//         }
        
//     }
//     printf("%d",s);
    
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[20][20][20] = {0};
//     int w,x,h,q;
//     scanf("%d%d%d%d",&w,&x,&h,&q);
//     // scanf("",);
//     for (size_t t = 0; t < q; t++)
//     {
//         int x1,y1,z1,x2,y2,z2;
//         scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
//         for (int i=x1-1; i<=x2-1; i++)
//         {
//             for (int j=y1-1; j<=y2-1; j++)
//             {
//                 for (int k=z1-1; k<=z2-1; k++)
//                 {
                    
//                     arr[i][j][k] += 1;
//                     // printf("aaa");
//                 }
//             }
//         }

//     }
//     int s = 0;
//     for (int i=0; i<=w-1; i++)
//         {
//             for (int j=0; j<=x-1; j++)
//             {
//                 for (int k=0; k<=h-1; k++)
//                 {
//                     if (arr[i][j][k] == 0)
//                         s += 1;
//                 }
//             }
//         }
//     printf("%d",s);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int luc[7] = {0};
//     for (size_t i = 0; i < 7; i++)
//     {
//         scanf("%d",&luc[i]);
//     }
//     int pl[7] = {0};
//     for (size_t i = 0; i < n; i++)
//     {
//         int c = 0;
//         int tmp;
//         for (size_t j = 0; j < 7; j++)
//         {
//             scanf("%d",&tmp);
//             for (size_t k = 0; k < 7; k++)
//             {
//                 if (tmp == luc[k]) c++;
//             }
//         }
//         if (!c) continue;
//         else (pl[7-c])++;
//     }
//     for (size_t i = 0; i < 7; i++)
//     {
//         printf("%d ",pl[i]);
//     }
//     return 0;
// // }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int n,lastcolnum,lastrownum;
// int met1[39][39];
// int met2[39][39];
// void printls(int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = 0; j < n; j++)
//         {
//             printf("%d ",met1[i][j]);
//         }
//         printf("\n");
//     }
// }
// int isin(int x,int* arr)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         if (x == arr[i]) return 1;
//     }
//     return 0;
// }
// void fill(int row,int col,int k)
// {
//     met1[row][col] = k;
//     met2[col][row] = k;
//     lastcolnum = col;
//     lastrownum = row;
// }
// int main()
// {
//     scanf("%d",&n);
//     met1[0][n/2] = 1;
//     met2[n/2][0] = 1;
//     lastcolnum = n/2;
//     lastrownum = 0;
//     for (int k = 2; k<=n*n; k++)
//     {
//         if (
//             isin(k-1,met1[0]) && !isin(k-1,met2[n-1])
//         ) fill(n-1,lastcolnum+1,k);

//         else if (
//             isin(k-1,met2[n-1]) && !isin(k-1,met1[0])
//         ) fill(lastrownum-1,0,k);
        
//         else if(
//             k-1 == met1[0][n-1]
//         ) fill(lastrownum+1,lastcolnum,k);
        
//         else if(
//             !isin(k-1,met1[0]) && !isin(k-1,met2[n-1])
//         )
//         {
//             if (
//                 met1[lastrownum-1][lastcolnum+1] == 0
//             ) fill(lastrownum-1,lastcolnum+1,k);
//             else fill(lastrownum+1,lastcolnum,k);
//         }

//     }
//     printls(n);
    
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// int arr[10];
// void count(int x)
// {
//     while (x)
//     {
//         arr[x%10]++;
//         x/=10;
//     }
// }
// int main()
// {
//     int m,n;
//     scanf("%d%d",&m,&n);
//     for (int i=m; i<=n; i++)
//     {
//         count(i);
//     }
//     for (size_t i = 0; i < 10; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void* e1,const void* e2)
// {
//     return *(int*)e1-*(int*)e2;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int* ps = (int*)malloc(4*n);
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&ps[i]);
//     }
//     qsort(ps,n,4,cmp);
//     int s = 0;
//     for (int i=2; i<n; i++)
//     {
//         for (size_t j = 0; j <i-1; j++)
//         {
//             for (size_t k = 0; k < i-j-1; k++)
//             {
//                 if (ps[j] + ps[j+k+1] == ps[i]) 
//                 {
//                     s++;
//                     goto again;
//                 }
//             }
            
//         }
//         again: ;
        
//     }
//     printf("%d",s);
    
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n,m;
//     scanf("%d%d",&n,&m);
//     int* ps = (int*)malloc(4*n);
//     for (size_t i = 0; i < n; i++)
//     {
//         scanf("%d",&ps[i]);
//     }
//     int min = 0;
//     for (size_t i = 0; i < m; i++)
//     {
//         min += ps[i];
//     }
    
//     for (size_t i = 0; i < n-m+1; i++)
//     {
//         int s = 0;
//         for (int j=i; j<i+m; j++)
//         {
//             s += ps[j];
//         }
//         min = (s<min ? s:min);
//     }
//     printf("%d",min);
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define sum(x,y,z) ((x)+(y)+(z))
// int main()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int* ps = (int*)calloc((a+b+c-2),4);
//     for (int i=1; i<=a; i++)
//     {
//         for (int j=1; j<=b; j++)
//         {
//             for (int k=1; k<=c; k++)
//             {
//                 ps[sum(i,j,k)-3]++;
//             }
//         }
//     }
//     int maxcount = ps[0];
//     int ind = 0;
//     for (size_t i = 0; i < a+b+c-2; i++)
//     {
//         // printf("%d ",ps[i]);
//         if (ps[i]>maxcount)
//         {
//             maxcount = ps[i];
//             ind = i;
//         }
//     }
//     printf("%d",ind+3);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int met[9][9];
int count = 1;
void fillcircle(int x,int y,int fill_num)
{
    int j = y;
    int i = x;
    for (j=y; j<y+fill_num; j++) met[i][j] = count++;
    for (i=x; i<x+fill_num; i++) met[i][j] = count++;
    for (j = j; j>y; j--) met[i][j] = count++;
    for (i = i; i>x; i--) met[i][j] = count++;
}
int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    int fill_num = n-1;
    while (fill_num > 0)
    {
        fillcircle(x,y,fill_num);
        x++;
        y++;
        fill_num -= 2;
    }
    if (fill_num == 0) met[n/2][n/2] = count;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%3d",met[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
    
//     return 0;
// }



