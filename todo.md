# 1. Arrays
## **Sorting**
-  [x] Merge Sort
-  [x] Selection Sort
-  [x] Bubble Sort
-  [x] Insertion Sort
-  [ ] Shell Sort
-  [ ] Quick Sort
-  [ ] Heap Sort
-  [ ] Radix Sort

## **Searching**
- [x] Linear Search
- [x] Binary Search
- #### Advanced Search (which improves over binary search in sorted arrays).
- [ ] Interpolation Search
- [ ] Exponential Search
- [ ] Fibonacci Search
- [ ] Jump Search
- [ ] Ternary Search

## **Matrix Operations**
-  Addition
- Multiplication
- Transposition
# 2. **Linked Lists**

### Basic Operations for Linked Lists:
1. [ ] **Insert at the Beginning**: Add a node to the front of the list.
2. [ ] **Insert at the End**: Add a node to the end of the list.
3. [ ] **Insert at a Position**: Insert a node at a specific position.
4. [x] **Insert nodes in ascending order**: Insert nodes in ascending order.
5. [x] **Delete a Node**: Remove a node from the list (beginning).
6. [ ] **Delete a Node**: Remove a node from the list (middle).
7. [ ] **Delete a Node**: Remove a node from the list (end).
8. [ ] **Search for a Node**: Find the position of a node by its value.
9. [x] **Traverse the List**: Go through the entire list and print the values.
10. [ ] **Reverse the List**: Reverse the order of the nodes.

### Intermediate Operations:
1. [ ] **Length of the List**: Find the number of nodes in the list.
2. [ ]  **Detect Cycle**: Check if the list has a cycle (for circular linked lists).
3. [ ]  **Delete List**: Remove all nodes from the list.
4. [ ] **Merge Two Lists**: Merge two sorted linked lists into one.
5. [ ]  **Find Middle Node**: Use two pointers to find the middle node of the list.
6. [ ]  **Nth Node from the End**: Get the nth node from the end using a two-pointer approach.

### Advanced Operations:
1. [ ]  **Doubly Linked List**: Implement a linked list with pointers to both the next and previous nodes.
2. [ ]  **Circular Linked List**: Implement a circular linked list where the last node points to the first.
3. [ ]  **Clone a Linked List**: Create a deep copy of a linked list.
4. [ ]  **Flattening a Multi-Level Linked List**: If a node can point to another list, flatten it into a single list.
5. [ ]  **Skip List**: An advanced data structure that allows faster search within an ordered sequence by maintaining multiple layers of linked lists.

---

# **3. Stacks**

#### **Basic Operations**:
1. [ ] **Push**: Insert an element at the top of the stack.
2. [ ] **Pop**: Remove the top element from the stack.
3. [ ] **Peek/Top**: Get the top element without removing it.
4. [ ] **isEmpty**: Check if the stack is empty.

#### **Intermediate Operations**:
1. [ ] **Stack using Linked List**: Implement a stack using a linked list.
2. [ ] **Reverse a Stack**: Reverse the elements in a stack using recursion or another stack.
3. [ ] **Balanced Parentheses**: Check if a string has balanced parentheses (expression evaluation).
4. [ ] **Infix to Postfix Conversion**: Convert an infix expression to postfix using a stack.

#### **Advanced Operations**:
1. [ ] **Stack in Recursion**: Understand how function calls use a stack for recursion.
2. [ ] **Min/Max Stack**: Design a stack that supports push, pop, and retrieving the minimum/maximum element in O(1) time.
3. [ ] **Evaluate Postfix Expression**: Evaluate a postfix expression using a stack.

---

# **4. Queues**

#### **Basic Operations**:
1. [ ] **Enqueue**: Insert an element at the rear of the queue.
2. [ ] **Dequeue**: Remove an element from the front of the queue.
3. [ ] **Peek/Front**: Get the front element without removing it.
4. [ ] **isEmpty**: Check if the queue is empty.

#### **Intermediate Operations**:
1. [ ] **Circular Queue**: Implement a circular queue where the last position connects to the first.
2. [ ] **Queue using Stack**: Implement a queue using two stacks.
3. [ ] **Reverse a Queue**: Reverse a queue using recursion or another queue/stack.
4. [ ] **Deque (Double-Ended Queue)**: Implement a deque where elements can be added/removed from both ends.

#### **Advanced Operations**:
1. [ ] **Priority Queue**: Implement a priority queue where elements are ordered by priority, not just FIFO.
2. [ ] **Sliding Window Maximum**: Given an array and a window size, find the maximum of each sliding window of size k.
3. [ ] **LRU Cache**: Implement an LRU (Least Recently Used) cache using a queue and a hash map.
4. [ ] **Queue in OS Scheduling**: Learn how queues are used in scheduling algorithms like Round Robin in operating systems.

---

# **5. Trees**

#### **Basic Operations**:
1. [ ] **Insertion**: Insert a node in a binary tree.
2. [ ] **Preorder Traversal**: Visit nodes in root-left-right order.
3. [ ] **Inorder Traversal**: Visit nodes in left-root-right order.
4. [ ] **Postorder Traversal**: Visit nodes in left-right-root order.
5. [ ] **Level Order Traversal**: Traverse the tree level by level using a queue (BFS for trees).

#### **Intermediate Operations**:
1. [ ] **Binary Search Tree (BST)**: Implement a binary search tree with insertion, deletion, and search.
2. [ ] **Height of a Tree**: Find the height of a binary tree (the longest path from root to a leaf).
3. [ ] **Lowest Common Ancestor (LCA)**: Find the lowest common ancestor of two nodes in a BST.
4. [ ] **Balanced Binary Tree**: Check if a binary tree is height-balanced (difference between heights of subtrees is ≤ 1).
5. [ ] **Diameter of a Binary Tree**: Find the longest path between any two nodes in a tree.

#### **Advanced Operations**:
1. [ ] **AVL Tree**: Implement a self-balancing BST with rotations.
2. [ ] **Red-Black Tree**: Another self-balancing BST with additional constraints.
3. [ ] **Trie**: Implement a trie (prefix tree) for efficient string searching.
4. [ ] **Segment Tree**: Implement a segment tree for range queries (sum, min, max) over an array.
5. [ ] **Fenwick Tree (Binary Indexed Tree)**: A more efficient data structure than segment trees for range updates and queries.

---

# **6. Graphs**

#### **Basic Operations**:
1. [ ] **Graph Representation**: Represent a graph using an adjacency list and an adjacency matrix.
2. [ ] **Depth-First Search (DFS)**: Explore the graph depth-wise.
3. [ ] **Breadth-First Search (BFS)**: Explore the graph level-wise.
4. [ ] **Detect Cycle**: Detect a cycle in a graph (directed and undirected).

#### **Intermediate Operations**:
1. [ ] **Shortest Path (BFS)**: Find the shortest path between two nodes in an unweighted graph.
2. [ ] **Topological Sorting**: Perform topological sorting on a directed acyclic graph (DAG).
3. [ ] **Connected Components**: Find all connected components in an undirected graph.
4. [ ] **Dijkstra's Algorithm**: Find the shortest path in a weighted graph (positive weights).

#### **Advanced Operations**:
1. [ ] **A* Algorithm**: A pathfinding and graph traversal algorithm that improves over Dijkstra's algorithm by using heuristics.
2. [ ] **Kruskal's Algorithm**: Find the minimum spanning tree using a union-find structure.
3. [ ] **Prim's Algorithm**: Another algorithm to find the minimum spanning tree.
4. [ ] **Bellman-Ford Algorithm**: Compute shortest paths in a graph that may have negative edge weights.
5. [ ] **Floyd-Warshall Algorithm**: Find shortest paths between all pairs of nodes (all-pairs shortest paths).
6. [ ] **Backtracking in Graphs**: Implement backtracking algorithms like Hamiltonian Path, coloring problem, and N-Queens problem.
7. [ ] **Strongly Connected Components (SCCs)**: Find strongly connected components in directed graphs using Kosaraju's or Tarjan's algorithm.

---
