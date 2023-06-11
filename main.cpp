#include <iostream>
using namespace std;

//Задание №1
//int main() 
//{
//	setlocale(0, "RUS");
//  int num = 0;
//  for(int i = 100;i <= 999;i++) 
//  {
//     int hun = i % 1000 / 100;
//     int doz = i % 100 / 10;
//     int un = i % 10;

//    if (i % 2 == 0&&hun == doz||hun == un||doz == un||doz == hun||un == hun||un == doz) 
//    { 
//      num++;
//    }
//  }
//  cout << num;
//}





//Задание №2
//int main() 
//{
//	setlocale(0, "RUS");
//  int num = 0;
// for(int i = 100;i <= 999;i++) 
// {
//    int hun = i % 1000 / 100;
//    int doz = i % 100 / 10;
//    int un = i % 10;

//   if (i% 2 == 0&&hun != doz&&hun != un&&doz != un&&doz != hun) 
//    { 
//      num++;
//    }
//  }
//    cout << num;
//}






//Задание №3
//int main() {
//    setlocale(0, "RUS");
//    int number;
//    int result = 0;
//    int multiplier = 1;
    
//    cout << "Введите целое число: ";
//    cin >> number;
    
    
//    while (number != 0) 
//   {   
//       int num = number % 10;
//       if (num != 3 && num != 6) 
//        {
//            result += num * multiplier;
//            multiplier *= 10;
//       }

//        number /= 10;
//    }
//  cout << "Результат: " << result;

//}








//Задание №4
//int main()
//{   
//    setlocale(0, "RUS");
//    cout << "Введите число:\n";
//    int number;
//    cin >> number;
//    cout << "\n";

//    int B;
//    for (int i = number; i > 1; i--)
//     {
//        B = i;
//        if (number % (B * B) == 0 && number % (B * B * B) != 0)
//        {
//            cout << B << "\n";
//        }
//     }
//}






//Задание №5
//int main()
//{   
//    int result = 0;
//    int multiplier = 1;
    
//    setlocale(0, "RUS"); 
//    int number;
//    cout << "Введите целое число: \n";
//    cin >> number;

//    if (number % 2 == 0) 
//    {
//      while (number != 0) 
//      {
//        int num = number % 10;
//        result += num;
//        number /= 10;
//      }
//    }
//    int sum = number;
//    int cube = number * number * number;

//   if (cube == number * number) 
//   {
//     cout << "Куб суммы цифр числа равен квадрату числа.";
//   }
//   else 
//   {
//   cout << "Куб суммы цифр числа НЕ равен квадрату числа.";
//  }
//}








//Задание №6
//int main() 
//{
//    setlocale(0, "RUS"); 
//    int number;
//    cout << "Введите целое число: \n";
//    cin >> number;

//    for (int i = 1;i <= number;i++) 
//      {
//        if (number % i == 0) 
//      {
//         cout << i << "\n";
//       }
//     }
//}







//Задание №7
//int main() 
//{
//    setlocale(0, "RUS"); 
//    int first_number;
//    cout << "Введите первое целое число: \n";
//    cin >> first_number;

//    int second_number;
//    cout << "Введите второе целое число: \n";
//    cin >> second_number;

//   for (int i = 1;i <= first_number && i <= second_number;i++) 
//     {
//       if (first_number % i == 0 && second_number % i == 0 ) 
//       {
//         cout << i << "\n";
//       }
//     }
//}