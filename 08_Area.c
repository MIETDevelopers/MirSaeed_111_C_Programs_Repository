/*
Author: Mir Saeed Mozin
Creation Date: 17th March 2021
Program Purpose: To find out area of Circle, Rectangle and Square based on user choice
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	float radiusOfCircle, sideOfSquare, lengthOfRectangle, widthOfRectangle; //Float variable declaration
	//Printf and Scanf function calling
	printf("Enter the radius of circle: ");
	scanf("%f", &radiusOfCircle); //For reading radius of the circle
	printf("\nEnter the length of side of square: ");
	scanf("%f", &sideOfSquare); //For reading lenght of side of the square
	printf("\nEnter the length and width of rectangle ");
	scanf("%f %f", &lengthOfRectangle, &widthOfRectangle); //For reading length and width of the rectangle
	//For printing the areas of Circle, Square and Rectangle
	printf("\nArea of the circle is: %.1f", 3.14*radiusOfCircle*radiusOfCircle);
	printf("\nArea of the square is: %.1f", sideOfSquare*sideOfSquare);
	printf("\nArea of the rectangle is: %.1f", lengthOfRectangle*widthOfRectangle);

	return 0; //Return function
}