//
//  main.cpp
//  week4-class0102
//
//  Created by Nasiba on 05/10/22.
//

#include <iostream>
using namespace std;

int main() {
//
//    for ( int i = 0; i <= 10; i++){
//        cout << i<< endl;
//    }

    
    
    // ( x, y)
    // ( 1, 1)
    // ( 1, 2)
    // ( 1, 3)
    // ( 1, 4)
    // ( 1, 5)
    // ( 2, 1)
    // ( 2, 2)
    // ( 2, 3)
    // ( 2, 4)
    // ( 2, 5)
    // ...
    // ( 5, 5)
    
    // outer loop responsible for X coordinate
//    for ( int x = 1; x <=5; x++ ){
//        // inner loop responsible foy Y coordinate
//        for(int y = 1; y<=5; y++)
//            cout << " ( "<< x << " , "<< y <<") " << endl;
//    }
//
//
//
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    int number = 0;
//
////
//    while(number < 1 || number > 5){
//        cout << " Enter a number between 1 and 5: ";
//        cin>>number;
//    }
//    int number;
//    do{
//        cout << " Enter a number between 1 and 5: ";
//
//        cin>>number;
//    } while (number < 1 || number > 5);
//
    
//
    // Declare a secret number. Continuously ask the user to guess the secret number.
    
//    int secret_number =11;
//    int guess_number = 0;
//
//    while ( secret_number != guess_number){
//        cout << " Guess the number: ";
//        cin >> guess_number;
//    }
    
    // user should enter the number in a range 1 to 5. If the user enters the number out of this range the program should ask continously to enter number from 1 till 5.
//    int number;
//
//    while ( true){
//        cout << " Enter a number between 1 and 5: ";
//        cin>>number;
//
//        if( number >= 1 && number <= 5){
//            break;
//        }
//        cout << " Error! You should enter the number between 1 and 5!!!" << endl;
//
//
//
//    }
    
    
    
    
    
    
//
//    int secret_number = 10;
//    int guess = 0;
//
//   while ( guess != secret_number){
//       cout << " Guess the number: ";
//       cin >> guess;
//   }
////   for ( int i = 0; i < 10; i++){
//       if ( i == 6)
//           continue;
//       cout << i << endl;
//   }
//
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    cout << 1 << endl;
//    cout << 2 << endl;
//    cout << 3 << endl;
//    cout << 4 << endl;
//    cout << 5 << endl;
    
    // print out odd numbers from 1 till 10
    
//    for (int i = 1; i <=10; i++){
//       if ( i % 2 != 0)
//           cout << i << endl;
//
//    }
   
//    int i = 0;
//    while (i <=10){
//        if ( i % 2 != 0)
//            cout << i << endl;
//        i++;
//    }
    
    

//    int number = 0;
//    while ( number < 1 || number > 5){
//        cout << " Number: ";
//        cin>> number;
//
//        if (number < 1 || number > 5)
//            cout << " Enter a number between 1 and 5"<< endl;
//    }
////
    
    
    
     
//
    
    
    
    
    
//
//
//    int number = 0;
//    while ( number < 1 || number > 5){
//           cout << " Number: ";
//           cin >> number;
//           if ( number < 1 || number > 5 )
//               cout << " Enter a number between 1 and 5! " << endl;
//       }
    
    
    
    
    
    
    
    // user should enter the number in a range 1 to 5. If the user enters the number out of this range the program should ask continously to enter number from 1 till 5.
    
//    int number = 0;
//
//
//
    
    
    // Declare a secret number. Continuously ask the user to guess the secret number.
    
//    int secret_num = 30;
//    int guess = 0;
//
//    while ( guess != secret_num){
//        cout << " Guess: ";
//        cin >> guess;
//    }
//
//    int number = 0;
//    while ( number < 1 || number > 5){
//           cout << " Number: ";
//           cin >> number;
//           if ( number < 1 || number > 5 )
//               cout << " Enter a number between 1 and 5! " << endl;
//       }
//
//
//    int number;
//    do {
//        cout << " Number : ";
//        cin >> number;
//
//    } while ( number < 1 || number > 5);
    
    
    // ( x, y)
    // ( 1, 1)
    // ( 1, 2)
    // ( 1, 3)
    // ( 1, 4)
    // ( 1, 4)
    // ( 2, 1)
    // ( 2, 2)
    // ( 2, 3)
    // ( 2, 4)
    // ( 2, 5)
    
    // to generate X and Y coordinates using the combinations of 1 to 5
    //nested for loop
    
    // outer for loop
    
    cout << " Rows: ";
    int rows;
    cin >> rows;
    
    for ( int i = 1; i <= rows; i++){
        for ( int j = 0; j < i; j++){
            cout << " * " ;
        }
        cout << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//
//    cout << " Rows: ";
//    int rows;
//    cin>> rows;
//
//    for ( int i = 1; i <= rows; i++){
//        for ( int j = 0; j < i; j++){
//            // ( 1, 1)
//            cout << "*" ;
//        }
//        cout << endl;
//    }

    

    
    
    
    
    
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    for ( int i = 0; i <= 10; i++ ){
//
//        if ( i == 8)
//            continue;
//        cout << i << endl;
//    }

    // Ask the user for a positive number. Print the factorial of that number
    
    // 0! = 1
    // 1! = 1
    // 2! = 1 * 2
    // 3! = 1 * 2 * 3
    
//    int number;
//    cout << " Enter the positive number: ";
//    cin >> number;
//
//    if ( number < 0)
//        cout << " Error! the number is not positive"<< endl;
//    else{
//        int factorial = 1;
//        for ( int i = 1; i <= number; i++){
//
//            factorial = factorial * i;
//
//        } cout << factorial << endl;
//
//    }
    
  //  for ( int i = 0; i < 5; i++){}
    
    
//    int i = 1;
//    while ( i <= 10){
//        cout << i << endl;
//        i++;
//    }
        
        
    
    
    
    
    
    
    
    
    
    
    
    
   

//int a, b, c;
//
//    cout<< " Enter three integer numbers`: ";
//    cin>> a >> b >> c;
//
//    if ( a > b && a > b)
//        cout << a << " is largest number" << endl;
//    else if ( b > a && b > c)
//        cout << b << " is the largest number " << endl;
//    else
//        cout << c << " is the largest number " << endl;
//
    
    
    
   // >, <, >=, <=, ==, !=
    
//    char x = 'a';
//    char y = 'A';
//    bool result = x == y;
//
//    cout << boolalpha << result << endl;
        
   // && - AND
    // || - OR
   //  !  -   NOT
    
//    int age = 10;
//    int salary = 20'000;
//    bool isEligible = (age > 18 || age < 60) && (salary > 30'000);
//
//    cout << boolalpha << isEligible << endl;
    
//    if (age >=18){
//        isEligible = true;
//        cout << isEligible;
//    }
//    else{
//        isEligible = false;
//        cout << isEligible;
//    }
//
    
    // if temperature in the room is more than 40
        // print out " Too Hot"
    // if the temperature is less than 20
        // print out "Nice"
    // if the temperature is  less than 10
        // print out " Cold"
    
//    int temperature;
//
//
//    cout << " Enter the temperature: ";
//    cin >> temperature;
//
//    if (temperature > 40)
//        cout << " Too Hot" << endl;
//
//    else if (temperature < 10)
//        cout << " Cold"<< endl;
//    else if (temperature < 20)
//        cout << " Nice"<< endl;
//    else
//        cout << " Stay at home";
    
    // There's some conference is being held  in AU in Tashkent and participants should pay for participation
    // if participant is AU student
        // if student Uzbek citizen: tution = 5'000
        // if NOT Uzbek citizen: tution = 20'000
    // if participant NOT AU student
        //tution = 50'000
    
    // if participant is AU student
//    bool auStudent = true;
//    bool uzCitizen = true;
//    int tution;
//
//
//    if (auStudent){
//        // if student Uzbek citizen:
//        if ( uzCitizen){
//            tution = 5'000;
//            cout << tution << endl;
//
//        } else{
//            tution = 20'000;
//            cout << tution << endl;
//        }
//    }
//    else if(! auStudent){
//        tution = 50'000;
//        cout << tution << endl;
//    }
//
    
//    cout << " 1 - Create account " << endl;
//    cout << " 2 - Sign In " << endl;
//    cout << " 3 - Forgot the password " << endl;
//    cout << " 4 - Quit " << endl;
//    cout << " Select an option: ";
//
//    int option;
//    cin>> option;
//
//
//    switch ( option ){
//        case 0:
//            cout << " false";
//            break;
//        case 1:
//            cout << "true ";
//            break;
//        default:
//            cout<<" smth";
//
//    }
    
    // create basic calculator and ask user to enter 2 numbers. Then, print the result of applying the operator to those numbers
    
//    int a, b;
//    char op; // '+' '-'
//
//    cout << " Enter two numbers :";
//    cin>> a >> b;
//
//
//    cout << " Enter operator ( + - ): ";
//    cin>> op;
//
//    switch( op ){
//        case '+':
//            cout<< a + b << endl;
//            break;
//        case '-':
//            cout << a - b << endl;
//            break;
//        default:
//            cout << " there's no such operation";
//    }
//
    
    
//    if ( option == 1)
//        cout << " You selected 1";
//    else if ( option ==2)
//        cout << " You selected 2 ";
//    else if ( option == 3)
//        cout << " You selected 3";
//    else if ( option == 4)
//        cout<< " You slected 4";
//    else
//        cout << " Good bye! ";
    
    
    
    
    
    
    
    
    
 
