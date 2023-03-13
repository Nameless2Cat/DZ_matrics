#include <iostream>
#include<array>
#include<ctime>

using namespace std;

/*1 zadanie
   int main()
{
    int min;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int a=0;a<5;a++)
        for(int b=0;b<5;b++)
            mat[a][b]=rand()%99;
    min=mat[0][0];
    for(int a=0;a<5;a++)
        for(int b=0;b<5;b++)
            if(min>mat[a][b])
                min=a;
    for(int i=0;i<5;i++)
       mat[min][i]=0;
    return 0;
}
*/

/* 6 Zadanie
  int main()
{
    int max,znach;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    std::array<int,5>mas;
    for(int a=0;a<5;a++)
        for(int b=0;b<5;b++)
            mat[c][C]=rand()%99;
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++){
            max=mat[a][0];
            if(max<mat[a][b])
                znach=mat[a][b];
    }
        mas[a]=znach;
    }
    return 0;
}
*/

/* 8 zadanie
   int main(){
    int max=-1;
    srand(time(0));
    std::array<std::array<int, 10>, 2>mat;
    for(int i=0;i<10;i++){
        mat[0][i]=rand()%100;
        mat[1][i]=1+rand()%3;
    }
    for(int i=0;i<10;i++)
        if((mat[1][i]==3) && (mat[0][i]>max))
            max=mat[0][i];
    cout<<max<<endl;
    for (int k=0;k<2;k++){
        for(int i=0;i<10;i++)
            cout<<mat[k][i]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/* 9 zadanie (b)
   int main()
{
    srand(time(0));
    std::array<std::array<int, 2>,10>mat;
    for(int a=0;a<2;a++)
        for(int b=0;b<10;b++)
            cin>>mat[a][b];
    for(int a=0;a<2;a++){
        for(int b=0;b<10;b++)
            cout<<mat[a][b]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/* 10 zadanie (4)
 * int main(){
    int sum=0,norm1,norminf,sn1,sninf;
    srand(time(0));
    std::array<std::array<int, 10>, 10>mat;
    for(int a=0;a<5;a++)
        for(int b=0;b<5;b++)
            mat[a][b]=rand()%199-99;
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++)
            cout<<mat[a][b]<<" ";
        cout<<endl;
    }
    norm1=mat[0][0];
    norminf=mat[0][0];
    for(int a=0;a<5;a++){
        sninf=0;
        for(int b=0;b<5;b++){
            if((mat[a][b]>0) && (b%2!=0) && (b>=c))
                sum+=mat[a][b];
            sninf+=abs(mat[a][b]);
        }
        if(sninf>norminf)
            norminf=sninf;
    }
    for(int a=0;a<5;a++){
        sn1=0;
        for(int b=0;b<5;b++)
            sn1+=abs(mat[b][a]);
        if(sn1>norm1)
            norm1=sn1;
    }
    cout<<"Sum: "<<sum<<" norm 1: "<<norm1<<" norm infinite: "<<norminf;
    return 0;
}
*/
