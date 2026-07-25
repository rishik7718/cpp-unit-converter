#include<iostream>
using namespace std ;
int main()
{
	float kilometer,meter,centimeter;
	string fromunit,tounit;
	cout<<"enter fromunit(km,m,cm)";
	cin>>fromunit;
	cout<<"enter tounit(km,m,cm)";
	cin>>tounit;
	if(fromunit=="km",tounit=="km")
	{
		cout<<"enter the number";
		cin>>kilometer;
		kilometer = 1*kilometer;
		cout<<kilometer<<"km "<<"in kilometer ="<<kilometer<<"km";
	}
	else if(fromunit=="km",tounit=="m")
	{
		cout<<"enter the number";
		cin>>kilometer;
	    meter = 1000*kilometer;
		cout<<kilometer<<"km "<<"in meter ="<<meter<<"m";
	}
	else if(fromunit=="km",tounit=="cm")
	{
		cout<<"enter the number";
		cin>>kilometer;
		centimeter = 100000*kilometer;
		cout<<kilometer<<"km "<<"in centimeter ="<<centimeter<<"cm";
	}
		else if(fromunit=="m",tounit=="km")
	{
		cout<<"enter the number";
		cin>>meter;
		kilometer =meter/1000;
		cout<<meter<<"m "<<"in kilometer ="<<kilometer<<"km";
	}
	else if(fromunit=="m",tounit=="cm")
	{
		cout<<"enter the number";
		cin>>meter;
		centimeter =meter*100;
		cout<<meter<<"m "<<"in centimeter ="<<centimeter<<"cm";
	}
		else if(fromunit=="cm",tounit=="m")
	{
		cout<<"enter the number";
		cin>>centimeter;
		meter =centimeter/100;
		cout<<centimeter<<"cm "<<"in meter ="<<meter<<"m";
	}
		else if(fromunit=="cm",tounit=="km")
	{
		cout<<"enter the number";
		cin>>centimeter;
		kilometer =meter/100000;
		cout<<centimeter<<"cm "<<"in kilometer ="<<kilometer<<"km";
	}
	else
	{
		cout<<"invalid entry"<<endl;
	}
	

	return 0;
}