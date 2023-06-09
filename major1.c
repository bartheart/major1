//major1.c

#include "major1.h"

//user menu prompt
int menu(){
    int choice;
    //User prompt
    printf("Enter the menu option for the operation to perform:\n (1) Count Leading Zeroes\n (2) Endian Swap\n (3) Rotate-right\n (4) Parity\n (5) EXIT\n-->");
    scanf("%i", &choice);
    return choice;
}

//main function
int main(){
    int menu_option;
    menu_option = menu();
    //if choice 5, quit
    while(menu_option != 5){
        //Number of leading zeros
        if(menu_option == 1){
            int num1, num2;
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%i", &num1);
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%i", &num2);
            //execute num leading zeros function
            //Tri
            menu_option = menu();
        }
        //Endian swap
        else if(menu_option == 2){
            u_int32_t num1, result;
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%i", &num1);
            //endian sawp function call
            result = endian(num1);
            printf("Endian swap of %d gives %d \n", num1, result);
            //menu option
            menu_option = menu();
        }
        //Rotate-right
        else if(menu_option == 3){
            int num1, num2;
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%i", &num1);
            printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
            scanf("%i", &num2);
            //Rotate-right function call
            //bem
            menu_option = menu();
        }
        //Parity
        else if(menu_option == 4){
            int num1;
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%i", &num1);
            //Parity function call
            //bem
            menu_option = menu();
        }
        ///error handling
        else{
            printf("Error: Invalid option. Please try again.\n");
            //User prompt
            printf("Enter the menu option for the operation to perform:\n (1) Count Leading Zeroes\n (2) Endian Swap\n (3) Rotate-right\n (4) Parity\n (5) EXIT\n-->");
            scanf("%i", &menu_option);
        }
    }
    printf("Program terminating. Goodbye...");


    return 0;
}