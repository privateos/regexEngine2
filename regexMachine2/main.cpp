// regexMachine2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "regex.h"
#include "regex_exception.h"
using regex_engine2_regex::Regex;
using regex_engine2_exception::engine_exception;
int main()
{
	//Regex a(L"[^a]");
	//Regex b(L"[^a-m]");
	try
	{
		Regex a(L"(a|b)*abb");
		//Regex b(L"(a|b)*abb{23,45}");
		//std::cout << "123\n \030" << std::endl;
	

		/*wchar_t m = L'你';
		std::wcout.imbue(std::locale("chs"));
		std::wcout << m << std::endl;*/
	}
	catch (const engine_exception& e)
	{
		//std::cout << e.what() << std::endl;
		e.info();
	}
	system("pause");
	return 0;
}

