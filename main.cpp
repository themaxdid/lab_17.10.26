#include <iostream>

/*
    Вариант 2.
    1. Ввести натуральные числа A, B и C. Если A кратно C и B кратно C, 
       то вывести (A+B)/C, если A кратно C и B не кратно C, то вывести A/С+B, 
       в остальных случаях вывести A-B-C.
    2. Ввести натуральное число N, обозначающее номер дня недели. 
       Используя оператор switch вывести название всех дней недели. 
       Предусмотреть обработку ошибочного ввода N.
    3. Переменная x может принимать 2 значения: -1 и 1. Если -1, 
       то вывести в консоль “Negative number”, 
       если положительное - “Positive number”. 
       Предложить вариант программы и объяснить свой выбор.
*/

int main() {
//1 задача
std::cout << "------- 1 Task ------- \n";
uint32_t A, B, C;

std::cout << "Enter three natural numbers separated by spaces: ";
    std::cin >> A >> B >> C;   

if (A % C == 0) {
    if (B % C == 0) { 
        std::cout << "Branch: A % C == 0 and B % C == 0 \n";
        std::cout << "Result: " << (static_cast<uint64_t>(A) + B) / C; 
    }
    else {
        std::cout << "Branch: A % C == 0 and B % C != 0 \n";
        std::cout << "Result: " << A / C + B; 
    }
}
else { 
    std::cout << "Branch: A % C != 0 \n";
    std::cout << "Result: " << static_cast<int64_t>(A) - B - C << "\n"; 
}

// 2 задача
std::cout << "------- 2 Task ------- \n";
uint16_t N;

std::cout << "Enter the day number (1-7): ";
    std::cin >> N;

switch (N) {
case 1: std::cout << "Monday \n" ;
case 2: std::cout << "Tuesday \n";
case 3: std::cout << "Wednesday \n";
case 4: std::cout << "Thursday \n";
case 5: std::cout << "Friday \n";
case 6: std::cout << "Saturday \n";
case 7: std::cout << "Sunday \n"; 
    break;
default: 
    std::cout << "Error: Invalid day number! Please enter a number between 1 and 7 \n";
    break;
}

// 3 задача
std::cout << "------- 3 Task ------- \n";
int16_t x; 

std::cout << "Enter x (-1 or 1): ";
    std::cin >> x; 

switch (x) {
    case -1:
        std::cout << "Negative number \n";
        break;
    case 1:
        std::cout << "Positive number \n";
        break;
    default:
        std::cout << "Invalid input \n";
        break;
}

return(0);
}