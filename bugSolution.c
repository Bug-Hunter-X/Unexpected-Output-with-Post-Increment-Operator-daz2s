int main() { int x = 5; printf("%d", x++); // Prints 5; x becomes 6 printf("%d", x); // Prints 6 return 0; } //Explanation: The post-increment operator increments the variable AFTER its value has been used in the expression.

//A more explicit and clearer alternative:
int main(){
  int x = 5;
  printf("%d", x);
  x++;
  printf("%d", x);
  return 0;
}
This improved version increases readability and makes the order of operations crystal clear.