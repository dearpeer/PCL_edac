#include <iostream>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/features/normal_3d.h>
#include "../PCL_Library_Dll/PCL_Library_Dll.h"
#include <winbase.h>

using namespace std;

int main(int argc, char* argv[])
{

	//pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
	//不同的申明方法
	pcl::PointCloud<pcl::PointXYZ>::Ptr *cloud;
	cloud=new pcl::PointCloud<pcl::PointXYZ>::Ptr(new PointCloud);

	pcl::PointCloud<pcl::PointXYZI>::Ptr icloud(new pcl::PointCloud<pcl::PointXYZI>);
	pcl::PointXYZ pcloud;
	pcl::PointXYZ ipcloud;
	// #pragma region create cloud
	// 	pcloud.x=0;	pcloud.y=0	;pcloud.z=0.150631735    ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.1;pcloud.z=	0.169322984 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.2;pcloud.z=	0.161429295 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.3;pcloud.z=	0.191224206 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.4;pcloud.z=	0.190214754 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.5;pcloud.z=	0.109060657 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.6;pcloud.z=	0.128585417 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.7;pcloud.z=	0.176129481 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.8;pcloud.z=	0.145157209 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=0.9;pcloud.z=	0.119821389 ;cloud->push_back(pcloud);
	// 	pcloud.x=0;	pcloud.y=1;pcloud.z=	0.180168414   ;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0	;pcloud.z=	0.151675451 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.1	;pcloud.z=0.183905981;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.2	;pcloud.z=0.151733002;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.3	;pcloud.z=0.135447421;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.4	;pcloud.z=0.117041307;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.5	;pcloud.z=0.17884322 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.6	;pcloud.z=0.137177397;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.7	;pcloud.z=0.195913095;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.8	;pcloud.z=0.133567014;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=0.9	;pcloud.z=0.126720203;cloud->push_back(pcloud);
	// 	pcloud.x=0.1;	pcloud.y=1	;pcloud.z=0.15875903   ;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0	;pcloud.z=0.182678748  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.1	;pcloud.z=0.162955619;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.2	;pcloud.z=0.160586822;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.3	;pcloud.z=0.165148856;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.4	;pcloud.z=0.137030477;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.5	;pcloud.z=0.194764511;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.6	;pcloud.z=0.162229726;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.7	;pcloud.z=0.131021986;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.8	;pcloud.z=0.148288185;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=0.9	;pcloud.z=0.160212629;cloud->push_back(pcloud);
	// 	pcloud.x=0.2;	pcloud.y=1	;pcloud.z=0.162431576  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0	;pcloud.z=0.118140259  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.1	;pcloud.z=0.12173037 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.2	;pcloud.z=0.136855642;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.3	;pcloud.z=0.147193609;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.4	;pcloud.z=0.104571744;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.5	;pcloud.z=0.136045126;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.6	;pcloud.z=0.13574048 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.7	;pcloud.z=0.184101603;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.8	;pcloud.z=0.111745473;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=0.9	;pcloud.z=0.149661823;cloud->push_back(pcloud);
	// 	pcloud.x=0.3;	pcloud.y=1	;pcloud.z=0.175846934  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0	;pcloud.z=0.17950724   ;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.1	;pcloud.z=0.14067243 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.2	;pcloud.z=0.146597475;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.3	;pcloud.z=0.108018626;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.4	;pcloud.z=0.102451948;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.5	;pcloud.z=0.178352099;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.6	;pcloud.z=0.160975657;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.7	;pcloud.z=0.185582237;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.8	;pcloud.z=0.14069264 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=0.9	;pcloud.z=0.119661086;cloud->push_back(pcloud);
	// 	pcloud.x=0.4;	pcloud.y=1	;	pcloud.z=0.154488445  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0	;	pcloud.z=0.184292018  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.1	;pcloud.z=0.109820008;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.2	;pcloud.z=0.138164552;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.3	;pcloud.z=0.17218157 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.4	;pcloud.z=0.176683616;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.5	;pcloud.z=0.11153979 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.6	;pcloud.z=0.119260068;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.7	;pcloud.z=0.130411221;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.8	;pcloud.z=0.155856305;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=0.9	;pcloud.z=0.16240295 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.5;	pcloud.y=1	;pcloud.z=0.16040826   ;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0	;pcloud.z=0.175718829  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.1	;pcloud.z=0.15591079 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.2	;pcloud.z=0.19075494 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.3	;pcloud.z=0.112464026;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.4	;pcloud.z=0.111565047;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.5	;pcloud.z=0.192028016;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.6	;pcloud.z=0.161026265;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.7	;pcloud.z=0.154699988;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.8	;pcloud.z=0.164194284;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=0.9	;pcloud.z=0.169186698;cloud->push_back(pcloud);
	// 	pcloud.x=0.6;	pcloud.y=1	;pcloud.z=0.160685273  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0	;pcloud.z=0.104747675  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.1	;pcloud.z=0.195758307;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.2	;pcloud.z=0.1016985  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.3	;pcloud.z=0.138042459;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.4	;pcloud.z=0.188336624;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.5	;pcloud.z=0.130371514;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.6	;pcloud.z=0.166477515;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.7	;pcloud.z=0.171812372;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.8	;pcloud.z=0.138423893;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=0.9	;pcloud.z=0.127133848;cloud->push_back(pcloud);
	// 	pcloud.x=0.7;	pcloud.y=1	;pcloud.z=0.139837075  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0	;pcloud.z=0.170414168  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.1	;pcloud.z=0.122111335;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.2	;pcloud.z=0.112404952;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.3	;pcloud.z=0.174366719;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.4	;pcloud.z=0.137182278;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.5	;pcloud.z=0.169112406;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.6	;pcloud.z=0.17828485 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.7	;pcloud.z=0.11852431 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.8	;pcloud.z=0.173198373;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=0.9	;pcloud.z=0.104299987;cloud->push_back(pcloud);
	// 	pcloud.x=0.8;	pcloud.y=1	;pcloud.z=0.176880253  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0	;pcloud.z=0.189781194  ;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.1	;pcloud.z=0.135860802;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.2	;pcloud.z=0.116906283;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.3	;pcloud.z=0.120627485;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.4	;pcloud.z=0.117887151;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.5	;pcloud.z=0.122190175;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.6	;pcloud.z=0.110704952;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.7	;pcloud.z=0.13101106 ;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.8	;pcloud.z=0.103908912;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=0.9	;pcloud.z=0.122222423;cloud->push_back(pcloud);
	// 	pcloud.x=0.9;	pcloud.y=1	;pcloud.z=0.181179959  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0	;pcloud.z=0.168207771    ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.1	;pcloud.z=0.156724239  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.2	;pcloud.z=0.110687371  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.3	;pcloud.z=0.159579893  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.4	;pcloud.z=0.172116429  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.5	;pcloud.z=0.198819381  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.6	;pcloud.z=0.192202648  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.7	;pcloud.z=0.130820886  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.8	;pcloud.z=0.168285495  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=0.9	;pcloud.z=0.196215265  ;cloud->push_back(pcloud);
	// 	pcloud.x=1;	pcloud.y=1	;pcloud.z=0.121981499    ;cloud->push_back(pcloud);
	// #pragma endregion create cloud
	//测试dll
	//显示加载DLL
	double *x=new double[100];
	double *y=new double[100];
	double *z=new double[100];
	double *intensity=new double[100];
	unsigned short *i=new unsigned short[100];
	int index=-1;
	for (float i=-5.0;i<5;i++)
	{
		for (float j=10.0;j>-10;j=j-2)
		{
			index++;
			x[index]=i;
			y[index]=j;
			z[index]=1-i-j;
			intensity[index]=100;
		}
	}

	HINSTANCE hInstance = LoadLibrary("PCL_Library_Dll.dll");
	typedef void (*Transfer2Cloud)(double* ,double* ,double* ,unsigned short* ,const int ,const int ,PointCloud::Ptr );
	typedef int (*Dis_point2plane)(PointT& ,Vector4f& ,double&);
	typedef int (*CalculateFlatness)(PointCloud::Ptr& , double&);
	typedef int (*ComputePointNormal)(PointCloud::Ptr& ,Vector4f&, float&);

	Dis_point2plane F_Dis_point2plane = (Dis_point2plane)GetProcAddress(hInstance, "Dis_point2plane");
	CalculateFlatness F_CalculateFlatness = (CalculateFlatness)GetProcAddress(hInstance, "CalculateFlatness");
	Transfer2Cloud F_Transfer2Cloud = (Transfer2Cloud)GetProcAddress(hInstance, "Transfer2Cloud");
	ComputePointNormal F_ComputePointNormal = (ComputePointNormal)GetProcAddress(hInstance, "ComputePointNormal");

	double Flatness;
	float cuv;
	Vector4f normal_vec;
	F_Transfer2Cloud(x,y,z,0,5,20,*cloud);
	F_ComputePointNormal(*cloud,normal_vec,cuv);
	//pcl::computePointNormal(*(*cloud).get(),normal_vec,cuv);
	int info=F_CalculateFlatness(*cloud,Flatness);
	printf("Flatness=%5.6f",Flatness);
	getchar();
	FreeLibrary(hInstance);//释放动态链接库 
	//pcl::io::savePCDFile("plane_cloud_out.pcd", *cloud_with_normals);
}