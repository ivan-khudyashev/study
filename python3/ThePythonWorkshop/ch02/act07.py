# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def employeePrint(emp):
    print( \
        "Name: {name}\nAge: {age}\nDepartment: {dep}\n{sepLine}" \
        .format( \
            name=emp["Name"], \
            age=emp["Age"], \
            dep=emp["Department"], \
            sepLine="-"*20
        ) \
    )

def doAction():
    employees = [
        {
            "Name": "John Mckee",
            "Age": 38,
            "Department": "Sales"
        },
        {
            "Name": "Lisa Crawford",
            "Age": 29,
            "Department": "Marketing"
        },
        {
            "Name": "Sujan Patel",
            "Age": 33,
            "Department": "HR"
        }
    ]
    print(employees)
    print("Formated print for every employee:")
    for emp in employees:
        employeePrint(emp)
    print("Formated print for Sujan Patel:")
    employeePrint(employees[2])

def main():
    doAction()

if __name__ == "__main__":
    main()
