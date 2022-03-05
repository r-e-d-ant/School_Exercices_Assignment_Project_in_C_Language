#include<stdio.h>
void main()
{
    // variables store marks
    int physics, maths, computer;
    // varables to store over
    int tot_physics, tot_maths, tot_computer;
    // variable to hold total marks and calculated percentage
    int total_marks, percentage;

    // Tell the user to enter their marks in whole numbers not Decimals
    printf("\nEnter Marks in whole number, Not Decimal\n");

    // Get marks and Over from the User
    printf("Physics Marks: ");
    scanf("%d", &physics);

    printf("Over: %d/", physics);
    scanf("%d", &tot_physics);

    printf("Mathematics Marks: ");
    scanf("%d", &maths);

    printf("Over: %d/", maths);
    scanf("%d", &tot_maths);

    printf("Computer Marks: ");
    scanf("%d", &computer);

    printf("Over: %d/", computer);
    scanf("%d", &tot_computer);

    // Show entered data
    printf("\nPhysics: %d/%d\nMathematics: %d/%d\nComputer: %d/%d\n", physics, tot_physics, maths, tot_maths, computer, tot_computer);

    // Calculate total of all marks
    total_marks = physics + maths + computer;

    // calculate percentange by taking total marks * 100 over the total of over
    percentage = (((total_marks) * 100) / (tot_physics + tot_maths + tot_computer));
    printf("You got %d percent", percentage); // show percent gotten
    printf("\n");

    // conditions to give grades according to percentange got

    // 90% and above: Grade A
    if(percentage >= 90) {
        printf("Grade A");
    }
    // 80% and above: Grade B
    else if(percentage >= 80) {
        printf("Grade B");
    }
    // 70% and above: Grade C
    else if(percentage >= 70) {
        printf("Grade C");
    }
    // 60% and above: Grade D
    else if(percentage >= 60) {
        printf("Grade D");
    }
    // 40% and above: Grade E
    else if(percentage >= 40) {
        printf("Grade E");
    }
    // Below 40%: Grade F
    else {
        printf("Grade F");
    }
    printf("\n");
    return;
}
