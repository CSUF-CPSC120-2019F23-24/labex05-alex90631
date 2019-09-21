// Random Rectangle

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
 unsigned seed = time(0);
 srand (seed);

 std::string box_chars;
 int max_lenght = 40;
 int lenght = rand() %max_lenght + 1;

 box_chars.assign(lenght, '#');

 std::cout << box_chars << std::endl;
 std::cout << box_chars << std::endl;
 std::cout << box_chars << std::endl;


  return 0;
}
