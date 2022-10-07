//Write  a problem to convert a normal user inputted sentence to an output formatted in camelCase.
//Examples of Camel Case:
//"how are you" will become "howAreYou"
//INPUT: "Love live! the school idol movie"
//OUTPUT: "loveLive!TheSchoolIdolMovie"



#include <iostream>
#include <string>

int main()
{
    int count;

    std::cout << "Enter film count: ";
    std::cin >> count;
    if(std::cin.fail())
    {
        std::cout << "Invalid input." << std::endl;
        exit(0);
    }
    std::cin.ignore(10000,'\n');
    for(int i = 0; i < count; i++)
    {
        std::string film;
        std::cout << "Enter film name: ";
        std::getline(std::cin, film);
        if(std::cin.fail())
        {
            std::cout << "Invalid input." << std::endl;
            exit(0);
        }
        if(film.size() == 0)
            break;
        film[0] = tolower(film[0]);
        for(unsigned int i = 1; i < film.size() - 1; i++)
        {
            if(film[i] == ' ')
            {
                film.erase(i,1);
                film[i] = toupper(film[i]);
                i--;
            }
        }
        std::cout << "Result: " << film << std::endl;
     }

    return 0;
}
