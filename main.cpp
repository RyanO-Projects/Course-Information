#include <iostream>
#include <map>

int main(){
    std::map <std::string, int> courseRoom{
        {"CS101", 3004},
        {"CS102", 4501},
        {"CS103", 6755},
        {"NT110", 1244},
        {"CM241", 1411}
    };

    std::map <std::string, std::string> courseInstructor{
        {"CS101", "Haynes"},
        {"CS102", "Alvarado"},
        {"CS103", "Rich"},
        {"NT110", "Burke"},
        {"CM241", "Lee"}
    };

    std::map <std::string, std::string> courseTime{
        {"CS101", "8:00 a.m."},
        {"CS102", "9:00 a.m."},
        {"CS103", "10:00 a.m."},
        {"NT110", "11:00 a.m."},
        {"CM241", "1:00 p.m."}
    };

    std::string userIn = "";
    std::cin >> userIn;

    if(courseRoom.count(userIn)){
        std::cout << courseRoom.at(userIn) << std::endl;
        std::cout << courseInstructor.at(userIn) << std::endl;
        std::cout << courseTime.at(userIn) << std::endl;
    }
    else
        std::cout << "Course not found." << std::endl;

    return 0;
}