# 🌟C Instructions

We know that a progarm is a set of instructions. Different instructions help achieve different tasks in a program.

# 🌟Types of Instructions

    a. Type Declaration Instruction - Used to declare the type of variables used in a program
    
    b. Arithmetic Instruction - Used to perform arithematic operations on constants and variables
    
    c. Control Instruction - Used to control the sequence of execution of various statements.
    
# ✨Type Declaration Instruction
This instruction is used to declare the type of variables being used in the program. Any variable used in the program must be declared before 
using it in any statement.

We can initialize while declaring the type of variable.
          
          example: int f=10;
          
The order in which we define the variables is sometimes important.

# ✨Arithematic Instruction
A C arithematic instruction includes a variable name on the left hand side of the = and a combo of constants and variables connected by arithematic operators on the right.

The arithematic operators include +, -, *, /  

= is the assignment operator

Variables and constants together are called "operands"

Types of arithematic statements:
     
    a. Integer mode arithematic statement - all operands are either integer variables or integer constants.
    
    b. Real mode arithmetic statement – In this statement all operands are either real constants or real variables.
    
    c. Mixed mode arithmetic statement – In this statement some operands are integers and some operands are real.

C allows only one variable on left-hand side of =

C also provides a modular division operator. This operator returns the remainder on dividing two integers. The sign of the remainder is always same as the sign of the numerator.

An arithematic instruction is sometimes used for storing character constants in character variables. The ASCII values of the characters will be stored in the variables.

Arithematic operations can be performed on *int, float, char*

# ⭐Integer and Float Conversions

An arithmetic operation between an integer and integer always yields an integer result.

An operation between a real and real always yields a real result.

An operation between an integer and real always yields a real result.
The integer is first promoted to a real and then the operation is performed. So, the result is real.

# Type Conversion in Assignments

Sometimes, the type of expression on the rigth hand side and the type of variable on the left hand side may vary.
Then, the value of the expression is promoted or demoted depending on the type of variable on the left hand side.

# 🌟Hierarchy of Operations

When the statement has multiple operators, we go/solve the expression by the hierarchy of the operations.

      Priority    Operators       Description
      1st           * / %          Multiplication, Division, Modular division
      2nd            + -           Additon, Subtraction
      3rd             =            Assignment

# Associativity of Operators

When an expression has two operators of the same priority, we use the associativity of the operators to solve the expression.
All operators in C have either Left to Right associativity or Right to Left associativity.

# 🌟Control Instructions

These instructions are used to specify the sequence in which the instructions in a program are to be executed.
 
The four types of control instructions are:
    
    1. Sequence Control Instruction
    2. Selection or Decision Control Instruction
    3. Repetition or Loop Control Instruction
    4. Case Control Instruction
 
The Sequence control instruction makes sure that the instructions are executed in the same order in which they appear in the program. 

Decision and Case control instructions allow the computer to take a decision as to which instruction is to be executed next.

The Loop control instruction helps computer to execute a group of statements repeatedly. 
