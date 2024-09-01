# Data Structures and Algorithms

This project demonstrates various sorting and searching algorithms by implementing them in `C` and integrating them into a `C++` program. The UI is created in `C++`, while the algorithms are written in `C`. The program provides a menu-driven interface where users can select different algorithms to analyze their performance on randomly generated arrays. (I'll be adding other data structures soon.)

## Features

- **Sorting Algorithms:**
  - Merge Sort
  - Selection Sort

- **Searching Algorithms:**
  - Linear Search
  - Binary Search

- **Performance Analysis:**
  - The program calculates and displays the time taken by each algorithm.

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

1. **Select Data Structure:**
   - Choose your preferred data structure from the provided list.
   - For example, choose "1" for Arrays.

2. **Enter the Size of the Array:**
   - Enter the desired size for the array.

3. **Sorting Algorithms:**
   - Select the sorting algorithms you want to analyze by entering their corresponding numbers separated by spaces (e.g., `1 2` for Merge Sort and Selection Sort).
   - The program will run all the algorithms sequentially and provide a condensed output using a table with the respective run times and print the final sorted array.

4. **Searching Algorithms:**
   - Follow the same procedure as Sorting Algorithms.
   - Enter the element you want to search for.
   - The program will use the same input, pass it to all the selected algorithms, search for that element in the array, and then print the result.

### Example Output

```plaintext
=====================================
     === Data Structures ===
=====================================
Choose your Data Structure:
1. Arrays
2. Exit

Please Choose a Data Structure from the list: 1
You selected *Array* as your Data Structure.

Enter the size of the array: 12345

========= Generated array =========
[ 11 57 90 75 98 36 0 13 68 93 .... 39 77 42 2 21 ] (truncated)

--- Array Memory Usage *48.2227 KB* ---

Press Enter to continue to Sort

=====================================
     === Sorting Algorithms ===
=====================================

1. Merge Sort
2. Selection Sort
3. Exit
Please enter the numbers of the algorithms you want to analyze: 1 2
--- Merge sort executed ---
--- Selection sort is currently sorting... ---
--- Selection sort executed ---

========= Generated array =========
[ 0 0 0 0 0 0 0 0 0 0 .... 99 99 99 99 99 ] (truncated)

--- Array Memory Usage *48.2227 KB* ---

_sr no.__|____Algorithm____|__time taken_
     1   |      Merge Sort | 0.004114 seconds
     2   |  Selection Sort | 0.175440 seconds

Press Enter to continue to Search

=====================================
     === Searching Algorithms ===
=====================================

1. Linear Search
2. Binary Search
3. Exit
Please enter the numbers of the algorithms you want to analyze: 1 2
Please enter the element you want to search: 93
Linear Search: The element _93_ was found at position: _11504_.
Binary Search: The element _93_ was found at position: _11573_.
```
