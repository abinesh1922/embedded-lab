#include<stdio.h>
int add(int num) {
    return num+2;
}
int sub(int num){
    return num-5;
}
int mult(int num){
    return num*3;
}
int quotient(int num){
    return num/6;
}
int remainder__(int num){
    return num%8;
}

int main ()
{
    // int num;
    // printf("Enter the Number:\n");
    // scanf("%d",&num);
    //----1
    //int result=add(num);

    //----2 
    //int result=sub(num);

    //----3
    //int result=mult(num);

    //----4
    //int result= quotient(num);

    //----5
    //int result= remainder__(num);

    //----6
    // int num;
    // printf("Enter the Two Digit Number:");
    // scanf("%d",&num);
    // int result= num%10;
    // printf("one's digit: %d",result);

    //----7
    // int num;
    // printf("Enter the Two Digit Number:");
    // scanf("%d",&num);
    // int result= num/10;
    // printf("ten's digit: %d",result);

    //----8
    // int num;
    // printf("Enter the Three Digit Number:");
    // scanf("%d",&num);
    // int result= num%10;
    // printf("one's digit: %d",result);
    
    //-----9
    // int num;
    // printf("Enter the Three Digit Number:");
    // scanf("%d",&num);
    // int result= num/100;
    // printf("Hundred's digit: %d",result);

    //-----10
    //  int num;
    // printf("Enter the Three Digit Number:");
    // scanf("%d",&num);
    // num= num/10;
    // int result= num%10; 
    // printf("Ten's digit: %d",result);

    //-----11
    // int  num,ones,tens,hundreds,result;
    // printf("Enter the Three Digit Number:");
    // scanf("%d",&num);
    // ones=num%10;
    // tens= (num/10)%10;
    // hundreds= num/100;
    // result= ones + tens + hundreds;
    // printf("Sum of the digit: %d",result);
    
    //----12
    // int num;
    // printf("Enter the Two Digit Number:");
    // scanf("%d",&num);
    // int ones = num%10;
    // int tens = num/10;
    // printf("Reverse of two digit : %d%d",ones,tens);

    //-----13
    // int num;
    // printf("Enter the Three Digit Number:");
    // scanf("%d",&num);
    // int ones = num%10;
    // int tens = (num/10)%10;
    // int hundreds = num/100;
    // printf("Reverse of three digit : %d%d%d",ones,tens,hundreds);
    
    //----14
    // int num;
    // printf("Enter the Four Digit Number:");
    // scanf("%d",&num);
    // int ones = num%10;
    // int tens = (num/10)%10;
    // int hundreds = (num/100)%10;
    // int thousands = num/1000;
    // printf("Reverse the first two digits : %d%d%d%d",hundreds,thousands,tens,ones);

    //----15
    // int num;
    // printf("Enter the Four Digit Number:");
    // scanf("%d",&num);
    // int ones = num%10;
    // int tens = (num/10)%10;
    // int hundreds = (num/100)%10;
    // int thousands = num/1000;
    // printf("reverse of last two digits : %d%d%d%d",thousands,hundreds,ones,tens);
    
    //-----16
    // int num;
    // printf("Enter the two Digit Number:");
    // scanf("%d",&num);
    // int ones = num%10;
    // int tens = 1;
    // printf("tens as 1: %d%d",tens,ones);

    //------17
    // int num;
    // printf("Enter the three Digit Number:");
    // scanf("%d",&num);
    // int ones = 2;
    // int tens = (num/10)%10;
    // int hundreds = num/100;
    // printf("ones as 2 : %d%d%d",hundreds,tens,ones);

    //-----19
    int num;
    printf("Enter the three Digit Number:");
    scanf("%d",&num);
    int ones = num%10;
    int tens = 0;
    int hundreds = num/100;
    printf("Reverse of two digit : %d%d%d",hundreds,tens,ones);
    return 0;
}