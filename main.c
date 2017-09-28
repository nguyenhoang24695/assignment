#include <stdio.h>
#include <stdbool.h>
#include <mem.h>

char name[25];
char phone[25];
char birth[25];

int main() {
    int choice;
    printf("-----Menu-----:\n");
    printf("1.Add Student:\n");
    printf("2.Student List:\n");
    printf("3.Exit.\n");
//    Vòng lặp câu lệnh lựa chọn
//    Khi hết câu lệnh tự động chọn lại câu lệnh ( ngoại trừ lệnh thoát)
    while (true) {
        printf("What is your choice: \n");
        scanf("%i", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("You choice add student: \n");
                add_sv();
                break;
            case 2:
                printf("You choice Student list: \n");
                readtofile();
                break;
//  Lệnh default này thực ra không cần phải là số 3, bất kì gì ngoài 1 và 2 là được
            default:
                printf("Thoat chuong trinh. \n");
                return;
        }
    }
}

//Hàm thêm sinh viên
void add_sv() {
    while (true) {
        printf("Input student name: \n");
        fgets(name, sizeof(name) / sizeof(char), stdin);
        int len = strlen(name) - 1;
//   Dòng lệnh if để tạo điều kiện cho độ dài ký tự của biến name
        if (len < 4) {
            printf("Name is too short, please enter name between 4 to 15 characters\n");
        } else if (len > 15) {
            printf("Name is too long, please enter name between 4 to 15 characters.\n");
        } else {
            printf("Nice name, You inputed: %s\n", name);
            break;
        }
    }
    printf("Input Number phone: \n");
    fgets(phone, sizeof(phone) / sizeof(char), stdin);
    printf("Input birthday: (dd/mm/yyyy): \n");
    fgets(birth, sizeof(birth) / sizeof(char), stdin);
    writetofile();
}

//Hàm truyền ký tự từ File
void writetofile() {
    FILE *sv;
//  thay vì lênh "w", dùng lệnh "a" để thêm sinh viên thứ 2,3 nữa
    sv = fopen("assignment.txt", "a");
    fputs("Student name: ", sv);
    fputs(name, sv);
    fputs("Phone: ", sv);
//  Lệnh fputs có \n và ----- mục đích làm đẹp và dễ nhìn hơn khi read file
    fputs(phone, sv);
    fputs("\n", sv);
    fputs("BirthDay: ", sv);
    fputs(birth, sv);
    fputs("\n", sv);
    fputs("--------------------------------------\n", sv);
    fclose(sv);
}

//Hàm đọc ký tự từ File
void readtofile() {
    FILE *sv;
    sv = fopen("assignment.txt", "r");
    if (sv == NULL) {
        printf("Cant not open file");
    } else {
        char buff[100];
//   Vòng lặp while để truyền dữ liệu từ file vào biến cho đến khi hết file
        while (fgets(buff, sizeof(buff),sv)) {
            printf(&buff);
        }
    }
    fclose(sv);
}
