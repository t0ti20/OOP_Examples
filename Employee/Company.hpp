/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Company.hpp
 *  Date: November 30, 2023
 *  Description: This Is Default Test File For CPP Generator
 *  Class Name: Employee
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
#ifndef _COMPANY_HPP_
#define _COMPANY_HPP_
/******************************************************************/
#include <string>
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Company
{
/*****************************************
------------ Employee Class  -------------
*****************************************/
class Employee
{
private:
	std::string Name;
	int ID;
protected:
	double Salary;
public:
    Employee(std::string Employee_Name ,int Employee_ID,double Employee_Salary);
    ~Employee();
	virtual float Get_Total_Salary(void)=0;
	virtual void Print(void);
};
/*****************************************
-------------- Sales Class  --------------
*****************************************/
class Sales:public Employee
{
private:
	float Commission_Rate,Gross_Sales;
public:
    Sales
	(
		std::string Employee_Name,
		int Employee_ID,
		double Employee_Salary,
		float Sales_Commission_Rate,
		float Sales_Goss_Sales
	);
    ~Sales();
	void Set_Goss_Sales(float Sales_Goss_Sales);
	void Set_Commission_Rate(float Sales_Commission_Rate);
	float Get_Total_Salary(void) override;
	void Print(void) override;
};
/*****************************************
------------ Engineer Class  -------------
*****************************************/
class Engineer:public Employee
{
private:
	std::string Speciality;
	int Experience,Overtime_Hours;
	float Hour_Rate;
public:
    Engineer
	(
		std::string Employee_Name,
		int Employee_ID,
		double Employee_Salary,
		std::string Engineer_Speciality,
		int Engineer_Experience,
		int Engineer_Overtime_Hours,
		float Engineer_Hour_Rate
	);
    ~Engineer();
	void Set_Hour_Rate(float Engineer_Hour_Rate);
	void Set_Overtime_Hours(int Engineer_Overtime_Hours);
	float Get_Total_Salary(void) override;
	void Print(void) override;
};
}
/******************** ************************************************
 *  END OF FILE:  ./Company.hpp
********************************************************************/
#endif
