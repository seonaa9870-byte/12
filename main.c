
#include <stdio.h>

struct student {
    int id;          
    char name[20];   
        float grade;    
};

int main(void) {
   
    struct student s1 = {123456, "Juyeop", 4.2};

  
    s1.id = 123456;
    s1.grade = 4.2;

   
    printf("ID   : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade: %f\n", s1.grade);

    return 0;
}
