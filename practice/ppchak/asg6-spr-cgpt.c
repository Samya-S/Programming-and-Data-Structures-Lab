#include <stdio.h>
#include <string.h>

#define MAX_SUBJECTS 10

int main() {
    int M;
    printf("Enter the total number of students: ");
    scanf("%d", &M);
    printf("%d\n", M);

    char names[M][50]; //////////////
    char subjects[M][MAX_SUBJECTS][50];
    int marks[M][MAX_SUBJECTS];
    int count = 0;

    for (int i = 0; i < M; i++) {
        char INPUTD[80];
        printf("Enter the student information (name followed by subject-names and subject-marks pairs): ");
        fgets(INPUTD, sizeof(INPUTD), stdin);
        fgets(INPUTD, sizeof(INPUTD), stdin);

        // Parse the input string
        char *token = strtok(INPUTD, " \n");
        int tokenCount = 0;
        int subjectCount = 0;
        char currentName[50];

        while (token != NULL) {
            if (tokenCount == 0) {
                strcpy(currentName, token);
                tokenCount++;
            } else {
                if (tokenCount % 2 == 1) {
                    // Subject name
                    int duplicateSubject = 0;
                    for (int j = 0; j < subjectCount; j++) {
                        if (strcmp(subjects[i][j], token) == 0) {
                            duplicateSubject = 1;
                            break;
                        }
                    }

                    if (duplicateSubject) {
                        printf("Error: Subject '%s' is repeated for student '%s'. Please re-enter the student information.\n", token, currentName);
                        break;
                    } else {
                        strcpy(subjects[i][subjectCount], token);
                        tokenCount++;
                    }
                } else {
                    // Subject marks
                    int marksValue = atoi(token);
                    if (marksValue < 0 || marksValue > 100) {
                        printf("Error: Invalid marks '%s' for student '%s'. Please re-enter the student information.\n", token, currentName);
                        break;
                    } else {
                        marks[i][subjectCount] = marksValue;
                        subjectCount++;
                        tokenCount++;
                    }
                }
            }

            token = strtok(NULL, " \n");
        }

        // Check for duplicate student name
        int duplicateName = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(names[j], currentName) == 0) {
                duplicateName = 1;
                break;
            }
        }

        if (duplicateName) {
            printf("Error: Student name '%s' is repeated. Please re-enter the student information.\n", currentName);
            i--;
        } else {
            strcpy(names[count], currentName);
            count++;
        }
    }

    // Print the student information
    for (int i = 0; i < count; i++) {
        printf("\nStudent: %s\n", names[i]);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            if (marks[i][j] != 0) {
                printf("Subject: %s\tMarks: %d\n", subjects[i][j], marks[i][j]);
            }
        }
    }

    return 0;
}