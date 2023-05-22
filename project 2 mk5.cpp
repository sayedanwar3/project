// this program calculate the fees of deffrent vehicle maintenance according to km traveled and store the data for company.
#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
//this section is used to confirm the services that have done for the user. 
void data_1000_and_allservices()
{cout<<"(services done)"<<endl;
cout<<"full_maintenace done" <<endl;
cout<<"full_chick done" <<endl;
cout<<"oil_filter done"<<endl ;
}
void data_10000_30000_50000_70000()
{cout<<"10000km_oil done"<<endl;
cout<<"chick_Brake_Lining done" <<endl;
}
void data_20000_60000_over()
{cout<<"10000km_oil done"<<endl;
cout<<"air_filter done" <<endl;
cout<<"chick_Brake_Lining done" <<endl;
}
void data_40000()
{cout<<"10000km_oil done"<<endl;
cout<<"air_filter done" <<endl;
cout<<"brake_oil done"<<endl;
cout<<"water_cooling done" <<endl;
cout<<"belt done" <<endl;
cout<<"chick_Brake_Lining done" <<endl;
}
void data_80000()
{cout<<"10000km_oil done"<<endl;
cout<<"car_spark_plugs done" <<endl;
cout<<"air_filter done"<<endl;
cout<<"gear_oil done" <<endl;
cout<<"benzene_filter done" <<endl;
cout<<"brake_oil done"<<endl;
cout<<"water_cooling done" <<endl;
cout<<"belt done" <<endl;
cout<<"chick_Brake_Linings done" <<endl;
}
int main()
{ 
// this section is to get the variables and define some usage data.
double score;
double full_mintanace=2000;
double full_chick=400;
double km_oil=1260;
double oil_filter=190;
double car_spark_plugs=2500;
double air_filter=600;
double gear_oil=1100;
double benzene_filter=1500;
double brake_oil=1500;
double water_cooling=390;
double belt=900;
double chick_Brake_Linings=90;
double fees;
double extra_fees;
char type;
ofstream storage;
ifstream ifile;
storage.open("PROJECT.txt");
storage<<"[A]sedan-[B]SUV-[C]truck"<<endl;
ifile.open("projectinput.txt"); 
string read_line;
//this section give the user the information of this program.
cout<< "_Hello customer, this program gives you your fees for car maintenance."<<endl;
while (ifile >> read_line)
{
cout << read_line << endl;
}
ifile.close();
// this section define the extra fees of diffrent types of vehcle maintenance .
cout<<"_please choose your car type [A]sedan-[B]SUV-[C]truck"<<endl;
cin>>type;
 switch (type){
case 'A' :extra_fees=220;
cout<<"extra fees for sedan maintenance is "<<extra_fees<<"LE"<<endl;
break;
case'B':extra_fees=330;
cout<<"extra fees for SUV maintenance is "<<extra_fees<<"LE"<<endl;
break;
case'C':extra_fees=550;
cout<<"extra fees for truck maintenance is "<<extra_fees<<"LE"<<endl;
break;
default:
cout << " dear customer,Sorry your vehicle has not been added yet please write the name of the vehicle"<<endl;
storage<<"A NEW VEHICLE NEEDS TO BE ADDED:"<<endl;
storage.close();
exit(0);
}
cout<<"_Please enter the number of kilometers traveled by the car."<<endl;
cin>> score;
data_1000_and_allservices();
if (score <= 1000) 
{
fees=full_mintanace+km_oil+oil_filter;
}
// this section is the calculation of 10000 km maintenance.
else if (score<= 10000) 
{
	data_10000_30000_50000_70000();
fees=full_mintanace+km_oil+oil_filter+chick_Brake_Linings+full_chick;
}
// this section is the calculation of 20000 km maintenance.
else if (score <= 20000) 
{
	data_20000_60000_over();
fees=full_mintanace+ km_oil+oil_filter+chick_Brake_Linings+ air_filter+full_chick;
}
// this section is the calculation of 30000 km maintenance.
else if (score <= 30000) 
{
	data_10000_30000_50000_70000();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+full_chick;
}
// this section is the calculation of 40000 km maintenance.
else if (score <= 40000) 
{
	data_40000();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+ air_filter+ gear_oil+brake_oil+water_cooling +belt+full_chick;
}
// this section is the calculation of 50000 km maintenance.
else if (score <= 50000) 
{
	data_10000_30000_50000_70000();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+full_chick;
}
// this section is the calculation of 60000 km maintenance.
else if (score <= 60000) 
{
	data_20000_60000_over();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+ air_filter+full_chick;
}
// this section is the calculation of 70000 km maintenance.
else if (score <= 70000) 
{
	data_10000_30000_50000_70000();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+full_chick;
}
// this section is the calculation of 80000 km maintenance.
else if (score <= 80000) 
{
	data_80000();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+ air_filter+ gear_oil+benzene_filter+brake_oil+water_cooling +belt+car_spark_plugs+full_chick;
}
// this section is the calculation of every normal maintenance after 80000 km maintenance.
else 
{
	data_20000_60000_over();
fees=full_mintanace+ km_oil+ oil_filter+chick_Brake_Linings+ air_filter+full_chick;
 } 
 // these section desplay the total fees and store the data for the co.
cout << "_your fees =" <<extra_fees+fees<<"LE"<< endl;
storage<<type<<"/"<<score<<"km"<<"/"<<extra_fees+fees<<"LE"<<endl;
storage.close();
	return 0;
}
