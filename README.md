# 📒 Address Book Management System

A simple **Address Book Management System** developed in **C**. This project allows users to store and manage contact information using structures, arrays, and functions.

## 📌 Features

- ➕ Add a new contact
- 📋 Display all contacts
- 🔍 Search a contact by name
- 🚪 Exit the application

## 🛠 Technologies Used

- C Programming Language
- Standard C Libraries
  - `stdio.h`
  - `string.h`

## 📂 Project Structure

```
AddressBook/
│── addressbook.c
│── README.md
```

## 🚀 How to Compile and Run

### Using GCC

Compile the program:

```bash
gcc addressbook.c -o addressbook
```

Run the executable:

### Windows

```bash
addressbook.exe
```

### Linux / macOS

```bash
./addressbook
```

## 📖 Program Menu

```
===== ADDRESS BOOK =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Exit
```

## 📌 Contact Details Stored

Each contact contains:

- Name
- Phone Number
- Email Address
- Address

## 💻 Sample Output

```
===== ADDRESS BOOK =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Exit

Enter your choice: 1

Enter Name: John Doe
Enter Phone: 9876543210
Enter Email: john@example.com
Enter Address: Hyderabad

Contact Added Successfully!
```

### Display Contacts

```
===== CONTACT LIST =====

Name    : John Doe
Phone   : 9876543210
Email   : john@example.com
Address : Hyderabad
```

## ⚙️ Functions Used

| Function | Description |
|----------|-------------|
| `addContact()` | Adds a new contact |
| `displayContacts()` | Displays all saved contacts |
| `searchContact()` | Searches a contact by name |

## 📊 Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Contact | O(1) |
| Display Contacts | O(n) |
| Search Contact | O(n) |

where **n** is the number of contacts.

## 🔮 Future Enhancements

- ✏️ Edit Contact
- ❌ Delete Contact
- 📁 Save contacts to a file
- 📂 Load contacts from a file
- 🔍 Search by phone number
- 🔤 Sort contacts alphabetically
- 🔎 Case-insensitive search
- 📱 User-friendly menu interface

## 📚 Concepts Used

- Structures (`struct`)
- Arrays
- Functions
- Loops
- Conditional Statements
- String Handling (`strcmp`)
- Global Variables

## 👨‍💻 Author

Developed as a beginner-level C programming project for learning data management using structures and functions.

---

⭐ If you found this project useful, consider giving it a star on GitHub!
