// int main() {
//     int year;
//     scanf("%d", &year);

//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//         printf("leap year");
//     }else{
//         printf("common year");
//     }
// }

int main(){
    int year;
    scanf("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("leap year");
            }else{
                printf("common year");
            }
        }else{
            printf("leap year");
        }
    }else{
        printf("common year");
    }
}