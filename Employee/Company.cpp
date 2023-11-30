/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Company.cpp
 *  Date: November 30, 2023
 *  Description: This Is Default Test File For CPP Generator
 *  Class Name: Employee
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include <iostream>
#include "Company.hpp"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
using namespace std;
namespace Company
{
/*****************************************
--------    Employee Class     -----------
*****************************************/
Employee::Employee
(
     std::string Employee_Name,
     int Employee_ID,
     double Employee_Salary
):Name{Employee_Name},ID{Employee_ID},Salary{Employee_Salary}
{
     //TODO
}
/*--------------------------------------*/
Employee::~Employee(){}
/*--------------------------------------*/
void Employee::Print()
{
     cout<<"========================================="<<endl;
     cout<<"- Name : "<<Name<<endl;
     cout<<"- ID : "<<ID<<endl;
}
/*****************************************
----------    Sales Class     ------------
*****************************************/ 
Sales::Sales
(
     std::string Employee_Name,
     int Employee_ID,
     double Employee_Salary,
     float Sales_Commission_Rate,
     float Sales_Gross_Sales
):Employee{Employee_Name,Employee_ID,Employee_Salary},Commission_Rate{Sales_Commission_Rate},Gross_Sales{Sales_Gross_Sales}
{
     //TODO
}
/*--------------------------------------*/
Sales::~Sales(){}
void Sales::Set_Goss_Sales(float Sales_Goss_Sales)
{
     Gross_Sales=Sales_Goss_Sales;
}
/*--------------------------------------*/
void Sales::Set_Commission_Rate(float Sales_Commission_Rate)
{
     Commission_Rate=Sales_Commission_Rate;
}
/*--------------------------------------*/
float Sales::Get_Total_Salary(void)
{
     return (Salary+(Gross_Sales*Commission_Rate));
}
/*--------------------------------------*/
void Sales::Print(void)
{
     Employee::Print();
     cout<<"- Gross Sales : "<<Gross_Sales<<endl;
     cout<<"- Commission Rate : "<<Commission_Rate<<endl;
     cout<<"- Total Salary : "<<Get_Total_Salary()<<endl;
     cout<<"========================================="<<endl;
}
/*****************************************
------------ Engineer Class  -------------
*****************************************/
Engineer::Engineer
(
     std::string Employee_Name,
     int Employee_ID,
     double Employee_Salary,
     std::string Engineer_Speciality,
     int Engineer_Experience,
     int Engineer_Overtime_Hours,
     float Engineer_Hour_Rate
):Employee{Employee_Name,Employee_ID,Employee_Salary},Speciality{Engineer_Speciality},Experience{Engineer_Experience},Overtime_Hours{Engineer_Overtime_Hours},Hour_Rate{Engineer_Hour_Rate}
{
     //TODO
}
/*--------------------------------------*/
Engineer::~Engineer(){}
/*--------------------------------------*/
void Engineer::Set_Hour_Rate(float Engineer_Hour_Rate)
{
     Hour_Rate=Engineer_Hour_Rate;
}
/*--------------------------------------*/
void Engineer::Set_Overtime_Hours(int Engineer_Overtime_Hours)
{
     Overtime_Hours=Engineer_Overtime_Hours;
}
/*--------------------------------------*/
float Engineer::Get_Total_Salary(void)
{
     return (Salary+(Overtime_Hours*Hour_Rate));
}
/*--------------------------------------*/
void Engineer::Print(void)
{
     Employee::Print();
     cout<<"- Speciality : "<<Speciality<<endl;
     cout<<"- Experience : "<<Experience<<endl;
     cout<<"- Overtime Hours : "<<Overtime_Hours<<endl;
     cout<<"- Hour Rate : "<<Hour_Rate<<endl;
     cout<<"- Total Salary : "<<Get_Total_Salary()<<endl;
     cout<<"========================================="<<endl;
}
/*--------------------------------------*/
}
/********************************************************************
 *  END OF FILE:  Company.cpp
********************************************************************/
