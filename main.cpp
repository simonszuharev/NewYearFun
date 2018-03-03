#include <iostream>
#include <windows.h>   // WinApi header
using namespace std;    //  , std::cin
int main()
{
  HANDLE  hConsole;
	int k=46;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, k);
    std::cout << "                           )   *                     \n"<<
                "                  )     *      (                     \n"<<
                "        )        (                   (               \n"<<
                "       (          )     (             )              \n"<<
                "        )    *           )        )  (               \n"<<
                "       (                (        (      *            \n"<<
                "        )          H     )        )                  \n"<<
                "                  [ ]            (                   \n"<<
                "           (  *   |-|       *     )    (             \n"<<
                "     *      )     |_|        .          )            \n"<<
                "           (      | |    .                           \n"<<
                "     )           /   \\     .    ' .        *         \n"<<
                "    (           |_____|  '  .    .                   \n"<<
                "     )          | ___ |  \\~~~/  ' .   (              \n"<<
                "            *   | \\ / |   \\_/  \\~~~/   )             \n"<<
                "                | _Y_ |    |    \\_/   (              \n"<<
                "    *           |-----|  __|__   |      *            \n"<<
                "                `-----`        __|__                 \n"<<
                "                                                     \n"<<
                "  __,  ,__)            __,  ,__)       __, ,__)      \n"<<
                " (--|__| _ ,_ ,_      (--|\\ | _       (--\\ | _  _ ,_ \n"<<
                "   _|  |(_||_)|_)(_|    _| \\|(/_(_|_)     \\|(/_(_||  \n"<<
                "  (        |  |  ,_|   (                (__|         \n";


  Sleep(1000);
  std::cout << "Good luck in 2018! I hope your dream will come true! \n"<<
            "With love from the States,                           \n" <<
            "Simon\n\n\n";
    Sleep(10000);

  return 0;
}
