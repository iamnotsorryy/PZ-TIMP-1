#include <iostream>
#include <getopt.h>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    char opt;
    int c = 0;
    int s = 0;
    string col;
    string sik;
    char* si;
    char* co;
    while((opt = getopt(argc, argv, "hs:c:")) != -1)
    {
       switch(opt)
        {
        	case 'h':
        	{
        		cout<<"Тригонометрический калькулятор"<<endl;
        		cout<<endl;
        		cout<<"       СПРАВКА ОПЦИЙ:         "<<endl;
        		cout<<"опция -s: синус заданного числа"<<endl;
        		cout<<"опция -c: косинус заданного числа"<<endl;
        		cout<<"-sn *** для синуса, где"<<endl;
        		cout<<"   n - режим градусов или радиан;"<<endl;
        		cout<<"   *** - градусы/радианны"<<endl;
        		cout<<"-cn *** для косинуса, где"<<endl;
        		cout<<"   n - режим градусов или радиан;"<<endl;
        		cout<<"   *** - градусы/радианны"<<endl;
        		cout<<"n - принимает значения"<<endl;
        		cout<<"   rad - радианны"<<endl;
        		cout<<"   grad - градусы"<<endl;
        		break;
        	}
        	case 's':
        	{
        		cout<<"Опция: "<<opt<<" - синус"<<endl;
        			if (string(optarg) == "rad")
        			{
        				cout<<"Режим радианн"<<endl;
        				cout<<"Введенные радианны: "<<argv[2]<<endl;
        				si = argv[2];
        				sik = string(si);
        				s =stoi(sik);
        				cout<<"Синус "<<argv[2]<<" равен "<<sin(s)<<endl;
        			}
        			else if (string(optarg) == "grad")
        			{
        				cout<<"Режим градусов"<<endl;
        				cout<<"Введенные градусы: "<<argv[2]<<endl;
        				si = argv[2];
        				sik = string(si);
        				s =stoi(sik);
        				cout<<"Синус "<<argv[2]<<" равен "<<sin(s)<<endl;
        			}
        			else
        			{
        				cout<<"Выберите один из существующих режимов ввода!!!"<<endl;
        				cout<<"Для получения справки по использованию введите параметр -h"<<endl;
        			}
        		break;
        	}
        	case 'c':
        	{
        		cout<<"Опция: "<<opt<<" - косинус"<<endl;
        			if (string(optarg) == "rad")
        			{
        				cout<<"Режим радианн"<<endl;
        				cout<<"Введенные радианны: "<<argv[2]<<endl;
        				co = argv[2];
        				col = string(co);
        				c = stoi(col);
        				cout<<"Косинус "<<argv[2]<<" равен "<<cos(c)<<endl;
        			}
        			else if (string(optarg) == "grad")
        			{
        				cout<<"Режим градусов"<<endl;
        				cout<<"Введенные градусы: "<<argv[2]<<endl;
        				co = argv[2];
        				col = string(co);
        				c = stoi(col);
        				cout<<"Косинус "<<argv[2]<<" равен "<<cos(c)<<endl;
        			}
        			else
        			{
        				cout<<"Выберите один из существующих режимов ввода!!!"<<endl;
        				cout<<"Для получения справки по использованию опций введите параметр -h"<<endl;
        			}
        		break;
        	}
     	}
    }
    return 0;
}
