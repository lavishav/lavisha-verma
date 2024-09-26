#include<stdio.h>
int main(){
    int basic,hra,da,allow,total;
    char grade;

    printf("enter  basic salary:");
    scanf("%d",&basic);
    hra=(20/100) * basic;
    da=(50/100)* basic;
    printf("enter grade:");
while( (getchar()) !='\n');
scanf("%c",&grade);


if(grade=='A'){
  total=(basic + 1700+ da + hra);
  printf("total salary: %d",total);
}
else if(grade=='B'){
  total=(basic + 1700 + da + hra);
  printf("total salary: %d",total);
}
else if(grade=='C'){
  total=(basic + 1700 + da + hra);
  printf("total salary: %d",total);
}
else{
    printf("error");
}

}