// Abbreviate a Two Word Name.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
std::string abbrevName(std::string name);

int main()
{
    std::string str = "Sam Harris";
    abbrevName(str);
   
}


std::string abbrevName(std::string name)
{
    char str[3];
    str[0] = std::toupper(name[0]);
    str[1] = '.';
    for (int i = 0; i < name.size();i++)
    {
        if (name[i] == ' ')
        {
            str[2] = std::toupper(name[i+1]);
            break;
        }
    }
    std::cout << str;
    return str;
}




/*
Очень интересное и лаконичное решение

#include <string>

std::string abbrevName(std::string name)
{
  std::string ret;
  ret.push_back(toupper(name[0]));
  ret.push_back('.');
  ret.push_back(toupper(name[name.find(' ') + 1] ));
  return ret;
}

*/


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
