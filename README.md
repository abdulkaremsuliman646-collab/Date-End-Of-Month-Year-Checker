# Date Boundary & Period-End Checker in C++ 📅🔚

A clean, modular C++ solution designed to evaluate temporal boundaries. The program determines whether a given date corresponds to the **last day of a month** or falls within the **final month of the year**.

---

## 🚀 Key Features & Logic
- **Dynamic Month-End Evaluation:** Accurately determines the final day of any month by querying dynamic calendar limits, taking into account Gregorian leap years for February.
- **Year-End Detection:** Validates whether the month index reaches the boundary limit (`Month == 12`).
- **Clean Code & Modularity:** Isolates boundary predicate logic into intuitive helper functions (`isLastDayInMonth` and `isLastMonthInYear`).

---

## 🛠️ Tech Stack
- **Language:** C++
- **Paradigm:** Modular / Procedural Programming

---

## 💻 Sample Execution
```text
Enter Date:
Please enter a Day? 29
Enter a Month (1-12): 2
Enter a Year: 2024

Yes, Day is Last Day in Month.
No, Month is NOT Last Month in Year.
