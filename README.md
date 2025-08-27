# Employee Management System (OOP in C++)

##  Overview
This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++.

### Key Concepts Covered
- **Abstraction**: `Employee` is abstract and defines a pure virtual function.
- **Inheritance**: `Sales` and `Engineer` inherit from `Employee`.
- **Polymorphism**: Achieved using virtual functions (`print`, `getTotalSalary`).
- **Encapsulation**: Employee details are encapsulated in private/protected members.
- **Static Members**: Count of employees is tracked using a static variable.

---
## How To Run
- git clone https://github.com/MohamedELAfandy1/OOP_CPP_Project/
- cd OOP_CPP_Project
- g++ main.cpp employee.cpp sales.cpp engineer.cpp -o program

### Example Output
Total Salary: 5100
Name: ali, EmpID: 120, Salary: 5000
Gross Sales: 1000, Commesion Rate0.1
===========================
Total Salary: 10500
Name: amr, EmpID: 290, Salary: 10000
Speciality: IT, Experience: 5, Over Time Hours: 10, Over Time Hour Rate: 50
===========================
  
  
  Number Of Employees: 2
