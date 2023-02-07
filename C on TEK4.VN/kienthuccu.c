#include <stdio.h>

// function to add two numbers
int addNumbers(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

// function to return the larger value
int findLarger(int age1, int age2)
{
    // compare two ages and return the larger age
    if (age1 > age2)
    {
        return age1;
    }
    else
    {
        return age2;
    }
}

int main()
{
    // int number1 = 32;
    // int number2 = 44;
    // // function call
    // int result = addNumbers(number1, number2);
    // printf("Result: %d", result);
    // return 0;

    {
        int ages[5] = {25, 31, 30, 17, 39};
        // call the function with second and fifth array element
        int result = findLarger(ages[1], ages[3]);
        printf("%d", result);
        return 0;
    }

    // truyền tham só bằng m,ảng vào mọt hàm
    // Để truyền vào một mảng, ta áp dụng cú pháp như sau
    void printArray(int ages[5])
    {
        // code inside the array
        printf("hung");
    }
    // function that accepts array as parameter
    void printArray(int ages[])
    {
        // print the second array element
        printf("%d\n", ages[1]);
        // print the fourth array element
        printf("%d", ages[3]);
    }

    int main()
    {
        int ages[5] = {25, 30, 17, 38, 21};
        // function call with array as argument
        printArray(ages);
        return 0;
    }
    // Ngoài ra, khi gọi hàm, ta chỉ cần truyền vào tên mảng là được, không có cặp ngoặc vuông.
}


//tính tổng các phần tử của mảng
// function to find the sum of all array elements
// we have also provided array size in parameter
double findSum(double marks[4]) {
  double sum = 0.0;
  for (int i = 0; i < 4; ++i) {
    sum = sum + marks[i];
  }
  return sum;
}
 
int main() {
  double marks[4] = {79.25, 83.9, 71.95, 75.33};
  // call the function with array as argument
  double result = findSum(marks);
  printf("%.2lf", result);    // Output: 310.43
  return 0;
}

