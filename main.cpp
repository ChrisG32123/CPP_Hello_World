#include <iostream>
#include <utility>
#include <list>
#include <cmath>
#include <ctime>

using namespace std;

pair<int,int> swap_variable_names(int a, int b) {
    cout << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "Variables Swapped: " << "a = " << a << " b = " << b << endl;

    return {a, b};
}

list<double> math() {
    cout << endl;
    // Truncated Division
    int x = 10;
    int y = 3;
    int z = x / y;

    // Floating Point Arithmetic: 1st Way
    double z1 = (double) x / y;
    // Floating Point Arithmetic: 2nd Way
    double x1 = 10;
    double z2 = x1 / y;

    // Add by 1
    int y1 = x++; // y1 = x then x += 1
    int z3 = ++x; // x += 1 then z2 = x

    list<double> zs = {(double) z, z1, z2, (double) z3};

    for(double zelm : zs) {
        cout << zelm << " ";
    }

    return zs;
}

double area_of_a_circle() {
    cout << endl;
    // Function that requires user input
    cout << "Enter Radius: ";
    double radius;
    cin >> radius;
    const float pi = 3.14159F;
    float area = pi*pow(radius,2);
    cout << "Area = " << area;
    /*
    Multiline comments can be made
    in this way
    */

    return area;
}

#include <iomanip>
#include <climits>
#include <cfloat>
#include <string>

void printRow(const std::string& type, size_t bytes, const std::string& range, const std::string& example) {
    cout << left << setw(15) << type
              << setw(10) << bytes
              << setw(45) << range
              << example << endl;
    cout << endl; 
}

void fundamental_data_types() {  
    cout << endl; 
    // Header
    cout << left << setw(15) << "Type"
                << setw(10) << "Bytes"
                << setw(45) << "Range"
                << "Example" << endl;

    // Separator
    cout << string(87, '-') << endl; // 87 Characters Total

    // Data
    printRow("short", sizeof(short), "{-32768, 32768}", "e.g., -12345");
    printRow("int", sizeof(int), "{" + std::to_string(INT_MIN) + ", " + std::to_string(INT_MAX) + "}", "e.g., 12345");
    printRow("long", sizeof(long), "{" + std::to_string(LONG_MIN) + ", " + std::to_string(LONG_MAX) + "}", "e.g., 123456789L");
    printRow("long long", sizeof(long long), "{" + std::to_string(LLONG_MIN) + ", " + std::to_string(LLONG_MAX) + "}", "e.g., 123456789LL");
    printRow("float", sizeof(float), "{-3.4e38, 3.4e38}", "e.g., 3.14f");
    printRow("double", sizeof(double), "{-1.7e308, 1.7e308}", "e.g., 3.1415");
    printRow("long double", sizeof(long double), "{-3.4e932, 1.7e4832}", "e.g., 3.14159265L");
    printRow("bool", sizeof(bool), "T or F", "e.g., true");
    printRow("char", sizeof(char), "letter", "e.g., 'A'");
    printRow("string", sizeof(string), "letters", "e.g., \'Hey. How you doing\'?\' - Joey");
}

int rolling_dice() {
    cout << endl;
    // Examples Using time() and rand()
    long elapsedSeconds = time(0);
    srand(elapsedSeconds); // Random Number with elapsedSeconds digits
    int number = rand() % 10;
    cout << number << endl;

    // Program that rolls dice
    int roll = (rand() % 6) + 1;
    cout << "You rolled a " << roll << endl;
    
    return 0;
}

void all_the_arrays() {
    cout << endl;
    cout << "Arrays" << endl;
    int luckyNums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i=0; i<size(luckyNums); i++) {
        luckyNums[i] = luckyNums[i] + i;
        cout << luckyNums[i] << endl;
    }
    cout << luckyNums << endl;

    int multiDimArray[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for (int i = 0; i<size(multiDimArray); i++) {
        for (int j=0; j<size(multiDimArray[i]); j++) {
            cout << multiDimArray[i][j] << " " << endl;
        }
    }
}

#include <windows.h> 

void jake_from_state_farm() {
    cout << endl;
    Sleep(2);
    cout << "Yeah, I'm married. Does it matter?" << endl;
    Sleep(3);
    cout << "You'd do that for me? Really?" << endl;
    Sleep(3);
    cout << "Yeah, I'd like that." << endl;
    Sleep(3);

    cout << "Who are you talking to?" << endl;
    Sleep(3);
    cout << "It's Jake from State Farm." << endl;
    Sleep(3);
    cout << "Sounds like a really good deal. " << endl;
    Sleep(3);
    
    cout << "Jake from State Farm at 3:00 in the morning?" << endl;
    Sleep(3);
    cout << "Who is this?" << endl;
    Sleep(4);

    string name;
    cout << "It's ";
    cin >> name;
    cout << " from State Farm" << endl;

    bool isJake = false;
    if (name == "Jake") {
        isJake = true;
        cout << "What are you wearing, JaKe FrOm StAtE FaRm?" << endl;
        Sleep(4);
        cout << "uhh";
        Sleep(4);
        cout << " khakis" << endl;
        cout << "She sounds hideous" << endl;
        cout << "Well, she's a guy so..." << endl;
    }
}

string getDayOfWeek(int dayNum) {
    cout << endl;
    string dayName;

    switch (dayNum) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
    }

    cout << dayName << endl;
    return dayName;
}

int the_real_stuff_pointers() {
    int age = 24;    
    string name = "Batman";

    cout << &age << endl; // Points to Spot in Memory    

    int *pAge = &age;
    string *pName = &name;

    cout << pAge << endl;

    return 0;
}

class Book {
    private:
        int rating;

    public:
        std::string title;
        std::string author;
        int pages;

        Book(std::string aTitle, std::string aAuthor, int aPages) 
            : title(aTitle), author(aAuthor), pages(aPages), rating(0) {
        }

        void setRating(int aRating) {
            rating = aRating; // Add validation if necessary
        }

        int getRating() {
            return rating;
        }
};

class MovieAdaptedBook : public Book {
    private:
        bool isMovie;

    public:
        MovieAdaptedBook(std::string aTitle, std::string aAuthor, int aPages)
            : Book(aTitle, aAuthor, aPages), isMovie(false) {
        }

        void setIsMovie(bool aIsMovie) {
            isMovie = aIsMovie;
        }

        bool getIsMovie() const {
            return isMovie;
        }
};

/*
Things to cover:
- Search & Sort Algorithms
- Data Structures & Algorithms
- Object Oriented Programming
*/

int main() {
    // First C++ Program
    int file_size = 100;
    double sales = 9.99;
    const double pi = 3.1415; // Future pi = 0;
    std::cout << file_size << std::endl;
    std::cout << "Hello World!" << std::endl;

    swap_variable_names(10,5);

    math();

    area_of_a_circle();

    fundamental_data_types();

    rolling_dice();

    all_the_arrays();

    jake_from_state_farm();

    cout << " Day of the Week (between 0-6):";
    int dayNum;
    cin >> dayNum;
    getDayOfWeek(dayNum);

    the_real_stuff_pointers();

    Book book1("Harry Potter", "JK Rowling", 500);
    book1.setRating(8);

    Book book2("Lord of the Rings", "Tolkein", 700);
    book2.setRating(3);

    cout << book1.pages << endl;
    cout << book2.title << endl;

    MovieAdaptedBook harryPotterMovie("Harry Potter", "JK Rowling", 500);
    harryPotterMovie.setRating(10);
    harryPotterMovie.setIsMovie(true);

    return 0;
}