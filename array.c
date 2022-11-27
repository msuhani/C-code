#include <stdio.h>
/*int display(int m[]){
    for 
}
int main(){
    int num;
    printf("How many numbers you want in the array: ");
    scanf("%d",&num);
    int num_arr[num];
    for (int i=0;i<num;i++){
        printf("Enter a no: ");
        scanf("%d",&num_arr[i]);
    }
    printf("Which number you want: ");
    scanf("%d",&num);

    int disp = max(num_arr);
    printf("max number is %d", disp);
}*/
int main(){
    int num;
    printf("enter how many numbers ;");
    scanf("%d", &num);
    if (num<1)
    {
       printf("no numbers to find max");
       return 0;
    }
    int arr[num];
    for(int i=0;i<num;i++){
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }
    int max=arr[0], pos=0; 
    for(int i=1;i<num;i++)
        if(max<arr[i]){
            max=arr[i];
            pos=i;
        }
    printf("the maximum number is %d at position %d", max, pos+1);
}
