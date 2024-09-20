# Data Structures and Algorithms

This project demonstrates various sorting, searching, and linked list algorithms by implementing them in `C` and integrating them into a `C++` program. The UI is created in `C++`, while the algorithms are written in `C`. The program provides a menu-driven interface where users can select different algorithms to analyze their performance on randomly generated arrays and linked lists.

## Features

- **Sorting Algorithms (for Arrays):**
  - Merge Sort
  - Selection Sort
  - Bubble Sort
  - Insertion Sort

- **Searching Algorithms (for Arrays):**
  - Linear Search
  - Binary Search

- **Linked List Operations:**
  - Insert a new value (in sorted order)
  - Delete the head of the linked list
  - Print the entire linked list

- **Performance Analysis:**
  - The program calculates and displays the time taken by each algorithm for sorting and searching.
  - Memory usage of the array is displayed dynamically based on the array size.

## Getting Started

### Prerequisites

Before running the program, make sure you have the necessary tools installed on your system:

- **For Debian/Ubuntu (and derivatives):**
  ```bash
  sudo apt-get install build-essential make git
  ```

- **For Fedora:**
  ```bash
  sudo dnf install gcc gcc-c++ make git
  ```

- **For Arch Linux:**
  ```bash
  sudo pacman -S gcc make git
  ```

These commands will ensure that you have the required compilers, build tools, and Git installed to work with the project.

### Cloning the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/0Shree005/Dsa.git
cd Dsa
```

### Compilation

To compile the entire program into a single executable, run:

```bash
make
```

To run the compiled executable:

```bash
./program
```

If you encounter discrepancies or random bugs while running the program, run:

```bash
make clean
```

This command will remove all the previous shared library files and recompile the program from scratch, ensuring a clean build.

## How to Use the Program

### 1. Select Data Structure

- Choose between **Arrays** or **Linked Lists** from the menu.
- Example: Choose "1" for Arrays or "2" for Linked Lists.

### 2. Arrays

- Enter the size of the array.
- A random array will be generated and displayed. If the array size is more than 75, the displayed array will be truncated.
- Memory used by the array is displayed in bytes, KB, or MB depending on the size. The array size limit is set to 100 MB (~25 million elements) to prevent excessive RAM usage.

#### Sorting Algorithms:

- Select the sorting algorithms you want to analyze by entering their corresponding numbers separated by spaces (e.g., `1 2` for Merge Sort and Selection Sort).
- The program will sort the array using all selected algorithms and display the execution time in nanoseconds, microseconds, milliseconds, or seconds, depending on the duration.

#### Searching Algorithms:

- After sorting, select the search algorithms (Linear Search, Binary Search) you want to run.
- Enter the element you want to search for.
- The program will return the position of the element in the array (may not be the first instance of that element for Binary Search) along with the time taken by each search algorithm.

### 3. Linked Lists

- Insert values into the linked list until `-1` is entered to stop.
- Perform the following operations:
  - **Insert a new value** (the given value is inserted in sorted order).
  - **Delete the head**
  - **Print the current state**

## Example Output

### Arrays

```plaintext
=====================================
     === Data Structures ===
=====================================
Choose your Data Structure:
1. Array
2. Linked List
3. Exit

Please Choose a Data Structure from the list: 1
You selected *Array* as your Data Structure.

Enter the size of the array: 12345

========= Generated array =========
[ 88 54 87 39 82 35 52 0 34 18 .... 47 19 55 19 80 ] (truncated)

--- Array Memory Usage *48.2227 KB* ---

Press Enter to continue to Sort

=====================================
     === Sorting Algorithms ===
=====================================


1. Merge Sort
2. Selection Sort
3. Bubble Sort
4. Insertion Sort
5. Exit
Please enter the numbers of the algorithms you want to analyze: 1 2 3 4
--- Merge sort is currently sorting... ---
--- Merge sort executed ---
--- Selection sort is currently sorting... ---
--- Selection sort executed ---
--- Bubble sort is currently sorting... ---
--- Bubble Sort executed ---
--- Insertion sort is currently sorting... ---
--- Insertion Sort executed ---

========= Generated array =========
[ 0 0 0 0 0 0 0 0 0 0 .... 99 99 99 99 99 ] (truncated)

--- Array Memory Usage *48.2227 KB* ---

_sr no.__|____Algorithm____|__time taken_
     1   |      Merge Sort | 4.076 milliseconds
     2   |  Selection Sort | 175.466 milliseconds
     3   |     Bubble Sort | 382.254 milliseconds
     4   |  Insertion Sort | 69.088 milliseconds


Press Enter to continue to Search


=====================================
     === Searching Algorithms ===
=====================================


1. Linear Search
2. Binary Search
3. Exit
Please enter the numbers of the algorithms you want to analyze: 1 2
Please enter the element you want to search: 19
Linear Search: The element _19_ was found at position: _2327_.
Binary Search: The element _19_ was found at position: _2410_.

_sr no.__|____Algorithm____|__time taken_
     1   |   Linear Search | 0.025 microseconds
     2   |   Binary Search | 0.005 microseconds
```

### Linked Lists

```plaintext
=====================================
     === Data Structures ===
=====================================
Choose your Data Structure:
1. Array
2. Linked List
3. Exit

Please Choose a Data Structure from the list: 2
You selected *Linked List* as your Data Structure.

Enter values for the Linked List (enter -1 to stop): 1 2 3 4 9 8 -1

1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 3

1 -> 2 -> 3 -> 4 -> 8 -> 9 -> NULL

1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 1

Enter the value to insert: 5

1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 3
1 -> 2 -> 3 -> 4 -> 5 -> 8 -> 9 -> NULL


1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 2


1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 3
2 -> 3 -> 4 -> 5 -> 8 -> 9 -> NULL

1. Insert a new value
2. Delete the head of the list
3. Print the Linked List
4. Exit
Enter your choice: 4

Thank you!
Exiting...
```
