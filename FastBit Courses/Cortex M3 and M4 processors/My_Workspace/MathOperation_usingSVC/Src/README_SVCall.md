#Title: 
### To perform math operations using Supervisor Call Exception
#Objective:
### 
* To observe how SVCall exception can be used to perform selective operations
* Utilise the stack memory for exchanging data between system handlers and the main thread.

# Problem statement:
1. Write a program to add, subtract, multiply, and divide two operands.
2. Use the SVC Handler to select and perform the needed operation. If  undefined match is provided, raise UsageFault exception.
3. Return the result to the thread mode.
4. Turn ON the on-board LEDs (Requires the STM32F407 DISCOVERY board) as per the following criteria:
	* For successful operation, turn GREEN LED ON only.
	* If "Trap division by zero" enabled and division by zero occurs during 		SVC handling, turn BLUE LED ON only.
	* If invalid math operation number chosen, turn ORANGE and RED LEDs ON only.
	* If any other exceptions occur, turn RED LED ON only.

# Source code:
[Click here to continue...](https://github.com/SoumyaCode74/EmbeddedSystems/tree/main/FastBit%20Courses/Cortex%20M3%20and%20M4%20processors/My_Workspace/MathOperation_usingSVC/Src)
