#include <stdbool.h>
#include <stdio.h>

#define MAX_NUMBER_OF_GRADES 7

bool valid_grade(int grade) {
	return (grade >= 5) && (grade <= 10);	
}

void input_grades(int grades[]) {
	int grade;
	for (int i = 0; i < MAX_NUMBER_OF_GRADES; i++) {
		scanf_s("%d", &grade);
		if (!valid_grade(grade))
			return;
		grades[i] = grade;
	}
}
double calculate_average_grade(int grades[]) {
	int avg_grade = 0, num_of_grades = 0, sum_of_grades = 0;
	for (int i = 0; i < MAX_NUMBER_OF_GRADES; i++) {
		if (!valid_grade(grades[i]))
			break;
		sum_of_grades += grades[i];
		num_of_grades++;
	}
	if (num_of_grades == 0)
		return 0.0;
	return (double)sum_of_grades / num_of_grades;
}

int main() {
	int grade, grades[MAX_NUMBER_OF_GRADES];
	double avg_grade;

	input_grades(grades);
	avg_grade = calculate_average_grade(grades);

	printf("%lf", avg_grade);

	return 0;
}