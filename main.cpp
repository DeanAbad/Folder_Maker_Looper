#include <iostream>
#include <string>

void clear() {
    system("cls");
}

void header() {
    std::cout << "Folder Maker Looper" << std::endl;
    std::cout << "Making numbered folders made much easier!" << std::endl;
}

void create(int digits, int this_number, std::string this_command) {
    switch(digits) {
        case 0:
            std::cout << "Error! Something wrose has occurred." << std::endl;
            break;

        case 1:
            for(int an_index = 1; an_index < this_number + 1; an_index++) {
                std::cout << "Creating 000" << this_number << " folder..." << std::endl;
                system((this_command + "000" + std::to_string(an_index)).c_str());
                std::cout << "Folder 000" << this_number << " created." << std::endl;
            }
            break;

        case 2:
            for(int an_index = 1; an_index < this_number + 1; an_index++) {
                if(this_number < 10) {
                    std::cout << "Creating 000" << this_number << " folder..." << std::endl;
                    system((this_command + "000" + std::to_string(an_index)).c_str());
                    std::cout << "Folder 000" << this_number << " created." << std::endl;
                } else if (this_number > 9) {
                    std::cout << "Creating 00" << this_number << " folder..." << std::endl;
                    system((this_command + "00" + std::to_string(an_index)).c_str());
                    std::cout << "Folder 00" << this_number << " created." << std::endl;
                }
            }
            break;

        case 3:
            for(int an_index = 1; an_index < this_number + 1; an_index++) {
                if(this_number < 10) {
                    std::cout << "Creating 000" << this_number << " folder..." << std::endl;
                    system((this_command + "000" + std::to_string(an_index)).c_str());
                    std::cout << "Folder 000" << this_number << " created." << std::endl;
                } else if (this_number > 9 && this_number < 100) {
                    std::cout << "Creating 00" << this_number << " folder..." << std::endl;
                    system((this_command + "00" + std::to_string(an_index)).c_str());
                    std::cout << "Folder 00" << this_number << " created." << std::endl;
                } else {
                    std::cout << "Creating " << this_number << " folder..." << std::endl;
                    system((this_command + std::to_string(an_index)).c_str());
                    std::cout << "Folder " << this_number << " created." << std::endl;
                }
            }
            break;
    }
 }

void make() {
    std::string commands[2] = { "cd ", "mkdir " };
    int number = 0;
    std::string path = "";

    do {
        std::cout << "Type first the path where the folders will be put." << std::endl;
        std::cout << "Note: Avoid spaces in path." << std::endl;
        std::cout << "Path: ";
        std::cin >> path;
    } while(path == "");

    if(path != "") {
        commands[0] += path;
        system(commands[0].c_str());
        do {
            std::cout << "Enter the number of folders you want to make: ";
            std::cin >> number;
        } while(number < 1);
    }

    if(number > 0) {
        if(number < 10) {
            create(1, number, commands[1]);
        } else if(number < 100 && number > 9) {
            create(2, number, commands[1]);
        } else if(number < 1000 && number > 100) {
            create(3, number, commands[1]);
        }
    }
}

int main() {
    system("title Folder Maker Looper");
    clear();
    header();

    std::string answer;
    std::cout << "Do you want to make folders? Yes or no: ";
    std::cin >> answer;

    if(answer != "") {
        if(answer == "YES" || answer == "Yes" || answer == "yes" || answer == "y" || answer == "Y") {
            make();
        } else {
            std::cout << "Press any key to exit..." << std::endl;
            std::cin.get();
        }
    } else {
        std::cout << "Press any key to exit..." << std::endl;
        std::cin.get();
    }

    return 0;
}