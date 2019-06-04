#include "pch.h"
#include <iostream>
#include <string>
#include"Ctime.h"
using namespace std;

extern int exter;

int Ctime::count = 0;// static parameter can only be initiated outside.

Ctime::Ctime() 
	:const_test(10)
{
	//this->m_n_hour = 0,this->m_n_minute = 0,this->m_n_second = 0;
	this->m_n_hour = 0;
	this->m_n_minute = 0;
	this->m_n_second = 0;
	//this->m_n_hour, this->m_n_minute, this->m_n_second = 0, 0, 0; // this way is wrong.
	//cout << this->m_n_hour << ":" << this->m_n_minute << ":" << this->m_n_second << endl;
	count++;
	this->name = "Ctime" + to_string(count);
	cout << this->name << endl;
	this->temp = 1;
	cout <<"extern:  "<<exter << endl;
}

Ctime::Ctime(Ctime &time) 
	:const_test(10)
{
	this->m_n_hour = time.m_n_hour;
	this->m_n_minute = time.m_n_minute;
	this->m_n_second = time.m_n_second;
	//cout << m_n_hour << ":" << m_n_minute << ":" << m_n_second << endl;
	count++;
	this->name = "CCtime" + to_string(count);
	cout << this->name << endl;
	this->temp = 1;
}

void Ctime::getime(int hour, int minute, int second) {
	this->m_n_hour = hour;
	this->m_n_minute = minute;
	this->m_n_second = second;
}

Ctime::~Ctime() {
	cout << "~" <<this->name<< endl;
}