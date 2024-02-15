#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
int score = 0; int width=30;
int i,totalQue=10;
char answer1,answer2,answer3,answer4,answer5,answer6,answer7,answer8,answer9,answer10;
clrscr();
printf("\033[36m");
printf("%*sSimple Quiz by Razin%*s\n",(width-14)/2,"",(width-14)/2+(width-14)%2,"");
printf("\033[35m"); // blue clr ANSI \033[42m
printf("1. What is programming language is commonly used for client-side\n scripting in web development?\n");
printf("a) Java\nb) HTML\nc) PHP\nd) Python\n");

scanf(" %c", &answer1);
if (answer1 == 'b' || answer1 == 'B') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("\n2. Which planet is known as the Red Planet?\n");
printf("a) Venus\nb) Mars\nc) Jupiter\nd) Saturn\n");
scanf(" %c", &answer2);
if (answer2 == 'b' || answer2 == 'B') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("3. What is the purpose of the If statement in programming?\n");
printf("a) Decision Making\nb) Looping\nc) Variable declaration\nd) Function Declartion\n");

scanf(" %c", &answer3);
if (answer3 == 'a' || answer3 == 'A') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("4. What is the time complexity of searching in a binary search tree (BST)?\n");
printf("a) O(1)\nb) O(n)\nc) O(log n)\nd) O(n^2)\n");

scanf(" %c", &answer4);
if (answer4 == 'c' || answer4 == 'C') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("5. In the context of operating systems, what is the purpose of virtual memory?\n");
printf("a) Increase physical RAM\nb) Provide a way to run virtual machines\nc) Extend the size of available RAM\nd) Manage file storage\n");

scanf(" %c", &answer5);
if (answer5 == 'c' || answer5 == 'C') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("6. Which protocol is responsible for addressing and routing\n in a computer network?\n");
printf("a) HTTP\nb) TCP\nc) UDP\nd) IP\n");

scanf(" %c", &answer6);
if (answer6 == 'd' || answer6 == 'D') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("7. What does ACID stand for in the context of database transactions?\n");
printf("a) Atomicity, Consistency, Isolation, Durability\nb) Association, Concurrency, Indexing, Data\nc) Authorization, Constraints, Integrity, Deletion\nd) Access, Configuration, Inheritance, Documentation\n");

scanf(" %c", &answer7);
if (answer7 == 'a' || answer7 == 'A') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("8. Which technique is commonly used for training machine learning models with labeled data?\n");
printf("a) Unsupervised learning\nb) Reinforcement learning\nc) Supervised learning\nd) Semi-supervised learning\n");

scanf(" %c", &answer8);
if (answer8 == 'c' || answer8 == 'C') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("9. What is the purpose of the Waterfall Model in software development?\n");
printf("a) Iterative development\nb) Incremental development\nc)  Agile development\nd) Sequential and non-iterative development\n");

scanf(" %c", &answer9);
if (answer9 == 'd' || answer9 == 'D') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\033[35m");
printf("10. Which rendering technique is commonly used for simulating realistic lighting\n in 3D computer graphics?\n");
printf("a) Flat shading\nb) Gouraud shading\nc) Phong shading\nd) Ray tracing\n");

scanf(" %c", &answer10);
if (answer10 == 'c' || answer10 == 'C') {
printf("\033[32mCorrect!\033[0m\n");
score++;
} else {
printf("\033[31mIncorrect!\033[0m\n");
}
printf("\nQuiz complete! Your score:%d out of %d\n", score,totalQue);
printf("\033[40m");
printf("\n\033[32m Thank you and ALL THE BEST");
for(i=0;i<8;i++)
{
sleep(1);
printf(".");
fflush(stdout);
}
printf("\n");
 getch();
return 0;

}