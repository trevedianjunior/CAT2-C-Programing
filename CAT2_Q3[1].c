/*
Name: Trevedian Junior
Reg No: PA106/G/28831/25
Description:A program to develop a C program that reads a list of integers from 
a file,processes the integers, and writes the results to a different file.
*/
 #include <stdio.h>
#include <stdlib.h>

// Function prototype

void writeIntegersToFile();
void processIntegers();
void displayFiles();

int main() {
    writeIntegersToFile();
    processIntegers();
    displayFiles();
    return 0;
}

// Function to prompt user to enter integers and write to input.txt
void writeIntegersToFile() {
    FILE *fp;
    int num, i;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        perror("Error opening input.txt for writing");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }

    fclose(fp);
    printf("\nIntegers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to file(output.txt)
void processIntegers() {
    FILE *fin, *fout;
    int num, count = 0;
    int sum = 0;
    double avg;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        perror("Error opening output.txt for writing");
        fclose(fin);
        exit(1);
    }

    while (fscanf(fin, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        fprintf(stderr, "No integers found in input.txt\n");
        fclose(fin);
        fclose(fout);
        exit(1);
    }

    avg = (double)sum / count;

    fprintf(fout, "Sum: %d\nAverage: %.2f\n", sum, avg);

    fclose(fin);
    fclose(fout);

    printf("Sum and average successfully written to output.txt\n\n");
}

//  Function to display the contents of the two files
void displayFiles() {
    FILE *fp;
    char ch;

    printf("=== Contents of input.txt ===\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\n=== Contents of output.txt ===\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Error opening output.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>

// Function prototype

void writeIntegersToFile();
void processIntegers();
void displayFiles();

int main() {
    writeIntegersToFile();
    processIntegers();
    displayFiles();
    return 0;
}

// Function to prompt user to enter integers and write to input.txt
void writeIntegersToFile() {
    FILE *fp;
    int num, i;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        perror("Error opening input.txt for writing");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }

    fclose(fp);
    printf("\nIntegers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to file(output.txt)
void processIntegers() {
    FILE *fin, *fout;
    int num, count = 0;
    int sum = 0;
    double avg;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        perror("Error opening output.txt for writing");
        fclose(fin);
        exit(1);
    }

    while (fscanf(fin, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        fprintf(stderr, "No integers found in input.txt\n");
        fclose(fin);
        fclose(fout);
        exit(1);
    }

    avg = (double)sum / count;

    fprintf(fout, "Sum: %d\nAverage: %.2f\n", sum, avg);

    fclose(fin);
    fclose(fout);

    printf("Sum and average successfully written to output.txt\n\n");
}

//  Function to display the contents of the two files
void displayFiles() {
    FILE *fp;
    char ch;

    printf("=== Contents of input.txt ===\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\n=== Contents of output.txt ===\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Error opening output.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n");
}