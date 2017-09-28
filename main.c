#include <stdio.h>
#include <stdbool.h>
#include <mem.h>
struct student {
    char name[25];
    char phone[25];
    char birth[25];
    int choice ;
};
struct student st1;
int main() {
//    int choice;
    printf("-----Menu-----:\n");
    printf("1.Add Student:\n");
    printf("2.Student List:\n");
    printf("3.Exit.\n");
//    Vòng lặp câu lệnh lựa chọn
//    Khi hết câu lệnh tự động chọn lại câu lệnh ( ngoại trừ lệnh thoát)
    while (true) {
        printf("What is your choice:\n");
        scanf("%d",&st1.choice);
        fflush(stdin);
//  Vòng điều kiện để xét giá trị biến choice
        if (st1.choice != 1 && st1.choice != 2 && st1.choice != 3) {
            printf("Please choose right number!!!\n");
        } else {
            switch (st1.choice) {
                case 1:
                    printf("You chosen add student: \n");
                    add_sv();
                    break;
                case 2:
                    printf("You chosen Student list: \n");
                    readtofile();
                    break;
                default:
                    printf("Exit. \n");
                    return;
            }
        }
    }
}

//Hàm thêm sinh viên
void add_sv() {
    while (true) {
        printf("Input student name: \n");
        fgets(st1.name, sizeof(st1.name) / sizeof(char), stdin);
        int len = strlen(st1.name) - 1;
//   Dòng lệnh if để tạo điều kiện cho độ dài ký tự của biến name
        if (len < 4) {
            printf("Name is too short, please enter name between 4 to 15 characters\n");
        } else if (len > 15) {
            printf("Name is too long, please enter name between 4 to 15 characters.\n");
        } else {
            printf("Nice name, You inputed: %s\n", st1);
            break;
        }
    }
    printf("Input Number phone: \n");
    fgets(st1.phone, sizeof(st1.phone) / sizeof(char), stdin);
    printf("Input birthday: (dd/mm/yyyy): \n");
    fgets(st1.birth, sizeof(st1.birth) / sizeof(char), stdin);
    writetofile();
}

//Hàm truyền ký tự từ File
void writetofile() {
    FILE *sv;
//  thay vì lênh "w", dùng lệnh "a" để thêm sinh viên thứ 2,3 nữa
    sv = fopen("assignment.txt", "a");
    fputs("Student name: ", sv);
    fputs(st1.name, sv);
    fputs("Phone: ", sv);
    fputs(st1.phone, sv);
    fputs("BirthDay: ", sv);
    fputs(st1.birth, sv);
    //  Lệnh fputs ----- mục đích làm đẹp và dễ nhìn hơn khi read file
    fputs("--------------------------------------\n", sv);
    fclose(sv);
}

//Hàm đọc ký tự từ File
void readtofile() {
    FILE *sv;
    sv = fopen("assignment.txt", "r");
//  Điều kiện xét xem file có tồn tại hay không
    if (sv == NULL) {
        printf("Cant not open file");
    } else {
        char buff[100];
//   Vòng lặp while để truyền dữ liệu từ file vào biến cho đến khi hết file
        while (fgets(buff, sizeof(buff), sv)) {
            printf(&buff);
        }
    }
    fclose(sv);
}
