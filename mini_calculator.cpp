#include <iostream> 

int main() {

double num; 
double result;
int amount;
char op;

std::cout << "How many numbers will your expression contain?\n";
std::cin >> amount;

while (std::cin.fail()) {

std::cout << "Please enter a valid number.\n";

std::cin.clear(); 
std::cin.ignore(1000, '\n');
std::cin >> amount;
}

std::cout << "Which operator would you like to use?\n"; 
std::cin >> op;

std::cout << "Go ahead and enter the first number of your Expression.\n"; 

std::cin >> num;
result = num;

for (int i = 1; i < amount; i++) {

std::cin >> num;

switch (op) {

case'+': 
result += num;
break;

case '-':
result -= num;
break;

case '*':
result *= num;
break; 

case '/': 
while (num == 0) {
std::cout << "You cannot divide by 0! Please enter a different number.\n";
std::cin >> num;
}

result /= num;
break;

}
}

std::cout << "The result is " << result << ".\n";

return 0;
}





