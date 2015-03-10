//#include "stdafx.h"
#include "stdio.h"
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#define MAX 10
#include <tchar.h>

using namespace std;
void Inverse(double *matrix1[],double *matrix2[],int n,double d);
double Determinant(double* matrix[],int n);
double AlCo(double* matrix[],int jie,int row,int column);
double Cofactor(double* matrix[],int jie,int row,int column);
double getDistance(float x,float y,float z,double A,double B,double C);
void MaxandMin(double *a, int l, int r, double& maxValue, double& minValue);

#define  m_row 40*10
int _tmain(int argc, _TCHAR* argv[])
{
	pcl::PointCloud<pcl::PointXYZ>::Ptr inCloud(new pcl::PointCloud<pcl::PointXYZ>);  
// 
// 	for (float x = -5.0; x <= 5.0; x += 0.1)  
// 	{  
// 		for (float y = -5.0; y <= 5.0; y += 0.1)  
// 		{  
// 			pcl::PointXYZ cloud;  
// 			cloud.x = x;  
// 			cloud.y = y;  
// 			cloud.z = 1 - x - y; 
// 			inCloud->push_back(cloud);
// 		}  
//  	} 
	pcl::PointXYZ cloud;
	//cloud.x=0;cloud.y=0;cloud.z=0.01;inCloud->push_back(cloud);
	//cloud.x=0;cloud.y=1;cloud.z=0.2;inCloud->push_back(cloud);
	//cloud.x=0;cloud.y=2;cloud.z=-0.2;inCloud->push_back(cloud);
	//cloud.x=1;cloud.y=0;cloud.z=0.25;inCloud->push_back(cloud);
	//cloud.x=1;cloud.y=1;cloud.z=-0.3;inCloud->push_back(cloud);
	//cloud.x=1;cloud.y=2;cloud.z=-0.1;inCloud->push_back(cloud);
	//cloud.x=2;cloud.y=0;cloud.z=0.2;inCloud->push_back(cloud);
	//cloud.x=2;cloud.y=1;cloud.z=-0.2;inCloud->push_back(cloud);
	//cloud.x=2;cloud.y=2;cloud.z=0.15;inCloud->push_back(cloud);


	 	cloud.x=0;	cloud.y=0	;cloud.z=0.150631735    ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.1;cloud.z=	0.169322984 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.2;cloud.z=	0.161429295 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.3;cloud.z=	0.191224206 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.4;cloud.z=	0.190214754 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.5;cloud.z=	0.109060657 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.6;cloud.z=	0.128585417 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.7;cloud.z=	0.176129481 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.8;cloud.z=	0.145157209 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=0.9;cloud.z=	0.119821389 ;inCloud->push_back(cloud);
	 	cloud.x=0;	cloud.y=1;cloud.z=	0.180168414   ;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0	;cloud.z=	0.151675451 ;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.1	;cloud.z=0.183905981;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.2	;cloud.z=0.151733002;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.3	;cloud.z=0.135447421;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.4	;cloud.z=0.117041307;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.5	;cloud.z=0.17884322 ;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.6	;cloud.z=0.137177397;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.7	;cloud.z=0.195913095;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.8	;cloud.z=0.133567014;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=0.9	;cloud.z=0.126720203;inCloud->push_back(cloud);
	 	cloud.x=0.1;	cloud.y=1	;cloud.z=0.15875903   ;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0	;cloud.z=0.182678748  ;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.1	;cloud.z=0.162955619;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.2	;cloud.z=0.160586822;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.3	;cloud.z=0.165148856;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.4	;cloud.z=0.137030477;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.5	;cloud.z=0.194764511;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.6	;cloud.z=0.162229726;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.7	;cloud.z=0.131021986;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.8	;cloud.z=0.148288185;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=0.9	;cloud.z=0.160212629;inCloud->push_back(cloud);
	 	cloud.x=0.2;	cloud.y=1	;cloud.z=0.162431576  ;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0	;cloud.z=0.118140259  ;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.1	;cloud.z=0.12173037 ;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.2	;cloud.z=0.136855642;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.3	;cloud.z=0.147193609;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.4	;cloud.z=0.104571744;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.5	;cloud.z=0.136045126;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.6	;cloud.z=0.13574048 ;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.7	;cloud.z=0.184101603;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.8	;cloud.z=0.111745473;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=0.9	;cloud.z=0.149661823;inCloud->push_back(cloud);
	 	cloud.x=0.3;	cloud.y=1	;cloud.z=0.175846934  ;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0	;cloud.z=0.17950724   ;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.1	;cloud.z=0.14067243 ;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.2	;cloud.z=0.146597475;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.3	;cloud.z=0.108018626;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.4	;cloud.z=0.102451948;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.5	;cloud.z=0.178352099;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.6	;cloud.z=0.160975657;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.7	;cloud.z=0.185582237;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.8	;cloud.z=0.14069264 ;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=0.9	;cloud.z=0.119661086;inCloud->push_back(cloud);
	 	cloud.x=0.4;	cloud.y=1	;cloud.z=0.154488445  ;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0	;cloud.z=0.184292018  ;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.1	;cloud.z=0.109820008;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.2	;cloud.z=0.138164552;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.3	;cloud.z=0.17218157 ;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.4	;cloud.z=0.176683616;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.5	;cloud.z=0.11153979 ;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.6	;cloud.z=0.119260068;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.7	;cloud.z=0.130411221;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.8	;cloud.z=0.155856305;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=0.9	;cloud.z=0.16240295 ;inCloud->push_back(cloud);
	 	cloud.x=0.5;	cloud.y=1	;cloud.z=0.16040826   ;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0	;cloud.z=0.175718829  ;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.1	;cloud.z=0.15591079 ;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.2	;cloud.z=0.19075494 ;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.3	;cloud.z=0.112464026;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.4	;cloud.z=0.111565047;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.5	;cloud.z=0.192028016;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.6	;cloud.z=0.161026265;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.7	;cloud.z=0.154699988;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.8	;cloud.z=0.164194284;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=0.9	;cloud.z=0.169186698;inCloud->push_back(cloud);
	 	cloud.x=0.6;	cloud.y=1	;cloud.z=0.160685273  ;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0	;cloud.z=0.104747675  ;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.1	;cloud.z=0.195758307;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.2	;cloud.z=0.1016985  ;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.3	;cloud.z=0.138042459;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.4	;cloud.z=0.188336624;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.5	;cloud.z=0.130371514;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.6	;cloud.z=0.166477515;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.7	;cloud.z=0.171812372;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.8	;cloud.z=0.138423893;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=0.9	;cloud.z=0.127133848;inCloud->push_back(cloud);
	 	cloud.x=0.7;	cloud.y=1	;cloud.z=0.139837075  ;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0	;cloud.z=0.170414168  ;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.1	;cloud.z=0.122111335;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.2	;cloud.z=0.112404952;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.3	;cloud.z=0.174366719;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.4	;cloud.z=0.137182278;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.5	;cloud.z=0.169112406;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.6	;cloud.z=0.17828485 ;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.7	;cloud.z=0.11852431 ;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.8	;cloud.z=0.173198373;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=0.9	;cloud.z=0.104299987;inCloud->push_back(cloud);
	 	cloud.x=0.8;	cloud.y=1	;cloud.z=0.176880253  ;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0	;cloud.z=0.189781194  ;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.1	;cloud.z=0.135860802;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.2	;cloud.z=0.116906283;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.3	;cloud.z=0.120627485;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.4	;cloud.z=0.117887151;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.5	;cloud.z=0.122190175;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.6	;cloud.z=0.110704952;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.7	;cloud.z=0.13101106 ;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.8	;cloud.z=0.103908912;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=0.9	;cloud.z=0.122222423;inCloud->push_back(cloud);
	 	cloud.x=0.9;	cloud.y=1	;cloud.z=0.181179959  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0	;cloud.z=0.168207771    ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.1	;cloud.z=0.156724239  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.2	;cloud.z=0.110687371  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.3	;cloud.z=0.159579893  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.4	;cloud.z=0.172116429  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.5	;cloud.z=0.198819381  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.6	;cloud.z=0.192202648  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.7	;cloud.z=0.130820886  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.8	;cloud.z=0.168285495  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=0.9	;cloud.z=0.196215265  ;inCloud->push_back(cloud);
	 	cloud.x=1;	cloud.y=1	;cloud.z=0.121981499    ;inCloud->push_back(cloud);
	// double array[m_row][3],Y[3];
    double Y[3];
    double A,B,C;
    A = B = C = 0.0;
   // ZeroMemory(array,sizeof(array));
    ZeroMemory(Y,sizeof(Y));

	//随机取点
    //for (int i = 0;i < m_row;i++)
    //{
    //    for (int j = 0;j < 3;j++)
    //    {
    //        array[i][j] = (double)rand();
    //    }
    //}

	//设置平面x+y+z=1 上的点 平面向量（1，1，1）
// 	int i=0;
// 	for (float x = -5.0; x <= 5.0; x += 0.25)  
// 	{  
// 		for (float y=-20.0;y <= 20.0; y += 4,i++)
// 		{
// 			array[i][0] = x;  
// 			array[i][1] = y;  
// 			array[i][2] = 1- x-y;   
// 		}
// 	} 

//     for (int i = 0; i < m_row;i++)
//     {
//         array[i][0] = 2.0;
//     }//设计了12个最简单的数据点，x = 1平面上的点，


    double *Matrix[3],*IMatrix[3];
    for (int i = 0;i < 3;i++)
    {
        Matrix[i]  = new double[3];
        IMatrix[i] = new double[3];
    }
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            *(Matrix[i] + j) = 0.0;
        }
    }
    for (int j = 0;j < 3;j++)
    {
		//也可以用这种方法计算数组长度  (sizeof(array) / sizeof(array[0]))
        for (int i = 0;i < inCloud->size();i++)
        {
			float tmp_x=(*inCloud)[i].x;
			float tmp_y=(*inCloud)[i].y;
			float tmp_z=(*inCloud)[i].z;
			float tmp=0.0;
			switch(j)
			{
			case 0:
				tmp=(*inCloud)[i].x;
				break;
			case 1:
				tmp=(*inCloud)[i].y;
				break;
			case 2:
				tmp=(*inCloud)[i].z;
				break;
			default:
				break;
			}

			*(Matrix[0] + j) +=	tmp_x*tmp;
			*(Matrix[1] + j) += tmp_y*tmp;
			*(Matrix[2] + j) += tmp_y*tmp;
			Y[j] -= tmp;

//             *(Matrix[0] + j) += array[i][0]*array[i][j];
//             *(Matrix[1] + j) += array[i][1]*array[i][j];
//             *(Matrix[2] + j) += array[i][2]*array[i][j];
//             Y[j] -= array[i][j];
        }
    }
    double d = Determinant(Matrix,3);
	if (abs(d) < 0.0001)
    {
        printf("\n矩阵奇异");
        getchar();
        return -1;
    }
    Inverse(Matrix,IMatrix,3,d);
    for (int i = 0;i < 3;i++)
    {
        A += *(IMatrix[0] + i)*Y[i];
        B += *(IMatrix[1] + i)*Y[i];
        C += *(IMatrix[2] + i)*Y[i];
    }
	double temp=A;
	A=A/temp;
	B=B/temp;
	C=C/temp;

	printf("\n A = %5.6f,B = %5.6f,C= %5.6f",A,B,C);

    for (int i = 0;i < 3;i++)
    {
        delete[] Matrix[i];
        delete[] IMatrix[i];
    }

	//计算平面度
	vector<double> D_length;
	double *length = new double[inCloud->size()];
	for (int i=0;i<inCloud->size();i++)
	{
		double L=getDistance((*inCloud)[i].x,(*inCloud)[i].y,(*inCloud)[i].z,A,B,C);
		D_length.push_back(L);
		length[i]=L;
	}
	sort(D_length.begin(),D_length.end());

	double max,min;
	int len = inCloud->size(); 
	MaxandMin(length,0,len-1,max,min); 
	printf("\n min = %5.6f,max = %5.6f,",min,max);
	printf("\n min = %5.6f,max = %5.6f,",D_length[0],D_length[inCloud->size()-1]);
    getchar();
    return 0;
}

void Inverse(double *matrix1[],double *matrix2[],int n,double d) 
{ 
    int i,j; 
    for(i=0;i<n;i++) 
        matrix2[i]=(double *)malloc(n*sizeof(double)); 
    for(i=0;i<n;i++) 
        for(j=0;j<n;j++) 
            *(matrix2[j]+i)=(AlCo(matrix1,n,i,j)/d); 
} 

double Determinant(double* matrix[],int n)  
{  
    double result=0,temp;  
    int i;  
    if(n==1)  
        result=(*matrix[0]);  
    else  
    {  
        for(i=0;i<n;i++)  
        {  
            temp=AlCo(matrix,n,n-1,i);  
            result+=(*(matrix[n-1]+i))*temp;  
        }  
    }  
    return result;  
}  

double AlCo(double* matrix[],int jie,int row,int column)  
{  
    double result; 
    if((row+column)%2 == 0) 
        result = Cofactor(matrix,jie,row,column);  
    else result=(-1)*Cofactor(matrix,jie,row,column); 
    return result;  
}  

double Cofactor(double* matrix[],int jie,int row,int column)  
{  
    double result;  
    int i,j;  
    double* smallmatr[MAX-1];  
    for(i=0;i<jie-1;i++)  
        smallmatr[i]= new double[jie - 1];
    for(i=0;i<row;i++)  
        for(j=0;j<column;j++)  
            *(smallmatr[i]+j)=*(matrix[i]+j);  
    for(i=row;i<jie-1;i++)  
        for(j=0;j<column;j++)  
            *(smallmatr[i]+j)=*(matrix[i+1]+j);  
    for(i=0;i<row;i++)  
        for(j=column;j<jie-1;j++)  
            *(smallmatr[i]+j)=*(matrix[i]+j+1);  
    for(i=row;i<jie-1;i++)  
        for(j=column;j<jie-1;j++)  
            *(smallmatr[i]+j)=*(matrix[i+1]+j+1);  
    result = Determinant(smallmatr,jie-1); 
    for(i=0;i<jie-1;i++)
        delete[] smallmatr[i];
    return result;   
}

double getDistance(float x,float y,float z,double A,double B,double C)
{
  return (A*x+B*y+C*z)/sqrt(A*A+B*B+C*C);
}

void MaxandMin(double *a, int l, int r, double& maxValue, double& minValue)  
{  
	if(l == r) // l与r之间只有一个元素  
	{  
		maxValue = a[l] ;  
		minValue = a[l] ;  
		return ;  
	}  

	if(l + 1 == r) // l与r之间只有两个元素  
	{  
		if(a[l] >= a[r])  
		{  
			maxValue = a[l] ;  
			minValue = a[r] ;  
		}  
		else  
		{  
			maxValue = a[r] ;  
			minValue = a[l] ;  
		}  
		return ;  
	}  

	int m = (l + r) / 2 ; // 求中点  

	double lmax ; // 左半部份最大值  
	double lmin ; // 左半部份最小值  
	MaxandMin(a, l, m, lmax, lmin) ; // 递归计算左半部份  

	double rmax ; // 右半部份最大值  
	double rmin ; // 右半部份最小值  
	MaxandMin(a, m + 1, r, rmax, rmin) ; // 递归计算右半部份  

	maxValue = max(lmax, rmax) ; // 总的最大值  
	minValue = min(lmin, rmin) ; // 总的最小值  
}  