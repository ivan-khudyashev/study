# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def formatedEmployeePrint(head, emp, delimCount = 45):
    print(emp)
    for i in range(len(head)):
        print("{head}: {value}".format(head=head[i], value=emp[i]))
    print("-" * delimCount)

def doAction():
    employees = [
        ["Name", "Age", "Department"],
        ["John Mckee", 38, "Sales"],
        ["Lisa Crawford", 29, "Marketing"],
        ["Sujan Patel", 33, "HR"]
    ]
    print("Just print employees: ")
    print(employees)
    print("\n\n")
    print("Formated print for all:")
    head = employees[0]
    for i in range(1, len(employees)):
        formatedEmployeePrint(head, employees[i])
    print("\n\n")
    print("Formated print for employee #2:")
    formatedEmployeePrint(head, employees[2])


def main():
    doAction()

if __name__ == "__main__":
    main()
