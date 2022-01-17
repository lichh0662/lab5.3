#include "Lab53.h"
#include <iostream>


void clear_screen() {
    std::cout << "\nThe screen will now be cleared and you will be taken to the menu.\n";
    system("pause");
    system("cls");
}


int start_menu(Matrix& main_matrix, Matrix& auxiliary_matrix, int& temp, int& i, int& j)
{
    int choice = 0;

    while (true) {
        std::cout << "Menu" << std::endl;
        std::cout << "1. Input of a matrix." << std::endl;
        std::cout << "2. Input of a matrix with a given size." << std::endl;
        std::cout << "3. Printing a matrix." << std::endl;
        std::cout << "4. Output of a certain element of a matrix." << std::endl;
        std::cout << "5. binary minus." << std::endl;
        std::cout << "6. Unary minus." << std::endl;
        std::cout << "7. Addition of matrices." << std::endl;
        std::cout << "8. Multiplication of a matrix by a number." << std::endl;
        std::cout << "9. The trace of a matrix." << std::endl;
        std::cout << "10. Multiplication of matrices." << std::endl;
        std::cout << "11. Determinant of a matrix." << std::endl;
        std::cout << "12. >> overload input." << std::endl;
        std::cout << "13. << overload output." << std::endl;
        std::cout << "14. += overloading the element-wise representation of the addition of a matrix." << std::endl;
        std::cout << "15. -= overload element-wise subtraction representation of a matrix." << std::endl;
        std::cout << "16. exit" << std::endl;
        std::cout << "\nSelect job number >>> ";
        std::cin >> choice;
        std::cout << std::endl;
        switch (choice) {
        case 1:
        {
            main_matrix.input();
            break;
        }
        case 2:
        {
            std::cout << "Enter size >>> ";
            std::cin >> temp;
            main_matrix.input(temp);
            break;
        }
        case 3:
        {
            main_matrix.print();
            break;
        }
        case 4:
        {
            std::cout << "Enter indices i, j >>> ";
            std::cin >> i >> j;
            std::cout << main_matrix.get_elem(i, j);
            break;
        }
        case 5:
        {
            auxiliary_matrix.input();
            main_matrix - auxiliary_matrix;
            break;
        }
        case 6:
        {
            -main_matrix;
            break;
        }
        case 7:
        {
            auxiliary_matrix.input();
            main_matrix + auxiliary_matrix;
            break;
        }
        case 8:
        {

            std::cout << "Enter a number >>> ";
            std::cin >> temp;
            main_matrix* temp;
            break;
        }
        case 9:
        {
            std::cout << main_matrix.trace() << std::endl;
            break;
        }
        case 10:
        {
            auxiliary_matrix.input();
            main_matrix* auxiliary_matrix;
            break;
        }
        case 11:
        {
            std::cout << main_matrix.det() << std::endl;
            break;
        }
        case 12:
        {
            int n;
            std::cout << "Enter a size: ";
            std::cin >> n;

            std::cin >> main_matrix;
            break;
        }
        case 13:
        {
            std::cout << main_matrix;
            break;
        }
        case 14:
        {
            auxiliary_matrix.input();
            main_matrix += auxiliary_matrix;
            break;
        }
        case 15:
        {
            auxiliary_matrix.input();
            main_matrix -= auxiliary_matrix;
            break;
        }
        case 16: {
            return 0;
        }
        default: {
            std::cout << "\nInvalid value entered. Valid Range 1-16\n";
        }
        }
        clear_screen();
    }
}


int main()
{
    
    int result_start_menu;

    Matrix main_matrix;  
    Matrix auxiliary_matrix;  
    int temp = 0;  
    int i = 0;
    int j = 0;

    result_start_menu = start_menu(main_matrix, auxiliary_matrix, temp, i, j);
    if (result_start_menu == 0) 
    { 
        return 0; 
    }
}