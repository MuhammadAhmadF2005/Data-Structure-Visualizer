# Data Structure Visualizer

A simple web application that provides interactive visualizations of fundamental data structures using vanilla HTML, CSS, and JavaScript. This educational tool helps students understand how basic data structures work through visual demonstrations and hands-on operations.

## Overview

This project implements visual representations of five core data structures:
- **Arrays** - Index-based element storage and access
- **Stacks** - Last-In-First-Out (LIFO) operations
- **Queues** - First-In-First-Out (FIFO) operations  
- **Linked Lists** - Pointer-based node connections
- **Binary Trees** - Hierarchical data with traversal algorithms

## Features

- **Interactive Operations**: Perform add, remove, access, and traversal operations
- **Visual Feedback**: Real-time updates showing data structure changes
- **Educational Design**: Clear labeling and step-by-step operation explanations
- **Mobile Responsive**: Touch-friendly interface that works on all devices
- **No Dependencies**: Pure HTML, CSS, and JavaScript - no frameworks required

## Getting Started

### Prerequisites

- A modern web browser (Chrome, Firefox, Safari, Edge)
- A simple HTTP server (optional, but recommended)

### Installation

1. **Clone or download** this repository to your local machine
2. **Navigate** to the project directory
3. **Open** `index.html` in your web browser, or
4. **Serve** the files using a local HTTP server:

```bash
# Using Python 3
python -m http.server 8000

# Using Python 2
python -m SimpleHTTPServer 8000

# Using Node.js (if you have http-server installed)
npx http-server

# Using PHP
php -S localhost:8000
```

5. **Access** the application at `http://localhost:8000` (if using a server)

## Usage Instructions

### Main Navigation (index.html)
- Click on any data structure card to access its visualizer
- Each card provides a brief description of the data structure
- Mobile-friendly navigation with responsive design

### Array Visualizer (simple-array.html)
- **Add Element**: Enter a number and click "Add Element" to append to the array
- **Remove Last**: Click "Remove Last" to remove the final element
- **Access Element**: Enter an index number and click "Access Element" to highlight that position
- **Clear Highlight**: Remove visual highlighting from elements

**Key Concepts Demonstrated:**
- Zero-based indexing (elements numbered 0, 1, 2, ...)
- Direct access to elements by index
- Dynamic resizing when adding/removing elements

### Stack Visualizer (simple-stack.html)
- **Push**: Add a new element to the top of the stack
- **Pop**: Remove and return the top element
- **Peek**: View the top element without removing it
- **Clear**: Reset the stack to empty state

**Key Concepts Demonstrated:**
- LIFO (Last-In-First-Out) principle
- Stack overflow and underflow conditions
- Top-of-stack operations only

### Queue Visualizer (simple-queue.html)
- **Enqueue**: Add a new element to the rear of the queue
- **Dequeue**: Remove and return the front element
- **Front**: View the front element without removing it
- **Rear**: View the rear element without removing it

**Key Concepts Demonstrated:**
- FIFO (First-In-First-Out) principle
- Front and rear pointer management
- Queue full and empty conditions

### Linked List Visualizer (simple-linkedlist.html)
- **Insert at Head**: Add a new node at the beginning
- **Delete Node**: Remove a specified node from the list
- **Traverse**: Step through each node in sequence
- **Clear**: Reset to empty list

**Key Concepts Demonstrated:**
- Node structure with data and next pointer
- Dynamic memory allocation concept
- Pointer manipulation for insertions and deletions

### Binary Tree Visualizer (simple-tree.html)
- **Preorder Traversal**: Visit nodes in Root → Left → Right order
- **Inorder Traversal**: Visit nodes in Left → Root → Right order  
- **Postorder Traversal**: Visit nodes in Left → Right → Root order
- **Reset**: Clear all highlights and start over

**Key Concepts Demonstrated:**
- Tree structure with parent-child relationships
- Recursive traversal algorithms
- Different visiting orders produce different sequences

## Relationship to C++ Implementation

This web application is based on the C++ reference implementation found in `code.cpp`. The JavaScript implementations mirror the C++ logic:

### Array Operations
- **C++ Vector**: `vector<int> arr = {10, 20, 30, 40}`
- **JavaScript Array**: `let arrayData = [10, 20, 30, 40]`
- **Operations**: `push_back()` → `push()`, `erase()` → `pop()`, direct indexing preserved

### Stack Operations  
- **C++ Stack**: `stack<int> st`
- **JavaScript Array**: `let stackData = []` (used as stack)
- **Operations**: `push()` → `push()`, `pop()` → `pop()`, `top()` → `peek()`

### Queue Operations
- **C++ Queue**: `queue<int> q`  
- **JavaScript Array**: `let queueData = []` (used as queue)
- **Operations**: `push()` → `push()` (enqueue), `pop()` → `shift()` (dequeue), `front()/back()` → array indexing

### Linked List Structure
- **C++ Node**: `struct Node { int data; Node* next; }`
- **JavaScript Object**: `{data: value, next: index}` (simplified pointer simulation)
- **Operations**: Dynamic insertion/deletion logic adapted for web display

### Binary Tree Structure
- **C++ TreeNode**: `struct TreeNode { int data; TreeNode* left; TreeNode* right; }`
- **JavaScript Object**: `{data: value, left: {...}, right: {...}}` (nested object structure)
- **Traversals**: Recursive algorithms directly translated from C++ to JavaScript

## File Structure

```
data-structure-visualizer/
├── index.html              # Main navigation page
├── simple-array.html       # Array operations visualizer
├── simple-stack.html       # Stack operations visualizer  
├── simple-queue.html       # Queue operations visualizer
├── simple-linkedlist.html  # Linked list operations visualizer
├── simple-tree.html        # Binary tree traversal visualizer
├── code.cpp                # C++ reference implementation
└── README.md               # This documentation file
```

## Educational Goals

This visualizer is designed to help students:

1. **Understand Abstract Concepts**: See how data structures work visually rather than just in code
2. **Learn Operation Mechanics**: Observe step-by-step how insertions, deletions, and traversals work
3. **Grasp Time Complexity**: Notice the difference between O(1) array access and O(n) linked list traversal
4. **Connect Theory to Practice**: Bridge the gap between textbook descriptions and actual implementations
5. **Debug Mental Models**: Correct misconceptions about how data structures behave

## Browser Compatibility

- **Chrome**: Fully supported (recommended)
- **Firefox**: Fully supported  
- **Safari**: Fully supported
- **Edge**: Fully supported
- **Mobile Browsers**: Responsive design works on iOS Safari, Chrome Mobile, etc.

## Technical Implementation

### Architecture
- **Self-contained HTML files**: Each visualizer is independent with embedded CSS and JavaScript
- **No external dependencies**: Works offline and doesn't require internet connection
- **Responsive CSS**: Mobile-first design with touch-friendly controls
- **Vanilla JavaScript**: ES5-compatible code for maximum browser support

### Performance Considerations
- **Lightweight**: Total project size under 1MB
- **Fast Loading**: No external resources to download
- **Smooth Animations**: CSS transitions for visual feedback
- **Memory Efficient**: Simple data structures with automatic garbage collection

## Future Enhancements

Potential improvements for educational value:
- **Step-by-step animations** for complex operations
- **Algorithm complexity indicators** (Big O notation display)
- **Code view panel** showing equivalent C++/JavaScript side-by-side
- **Interactive quizzes** to test understanding
- **More data structures** (heaps, hash tables, graphs)
- **Algorithm visualizations** (sorting, searching)

## Contributing

This is an educational project designed for learning. To contribute:

1. **Fork** the repository
2. **Create** a feature branch for your enhancement
3. **Test** thoroughly across different browsers and devices
4. **Document** any new features in this README
5. **Submit** a pull request with clear description of changes

## License

This project is open source and available for educational use. Feel free to use, modify, and distribute for learning purposes.

## Support

For questions or issues:
- **Check** that you're using a modern web browser
- **Verify** JavaScript is enabled in your browser
- **Try** refreshing the page if visualizations aren't working
- **Test** with a local HTTP server if opening files directly doesn't work

---

**Happy Learning!** 🎓

This visualizer is designed to make data structures more accessible and understandable. Take your time exploring each structure and don't hesitate to experiment with different operations to see how they behave.