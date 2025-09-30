# Design Document

## Overview

The Data Structure Visualizer is a simple web application that provides basic visualizations of fundamental data structures using vanilla HTML, CSS, and JavaScript. The application will translate the C++ implementations from code.cpp into visual, educational tools. The system will feature separate HTML pages for each data structure with simple, static visualizations that can be enhanced later.

## Architecture

### Technology Stack
- **Frontend**: Vanilla HTML, CSS, and JavaScript (no frameworks)
- **Styling**: Simple CSS with basic responsive design
- **Visualizations**: HTML elements and CSS styling (no canvas or SVG initially)
- **Structure**: Multiple self-contained HTML files
- **Hosting**: Can be served with any simple HTTP server

### System Architecture
```
┌─────────────────────────────────────────────────────────────┐
│                      index.html                            │
│                   (Main Navigation)                        │
├─────────────────────────────────────────────────────────────┤
│  Individual HTML Pages (Self-contained)                    │
│  simple-array.html  │  simple-stack.html                  │
│  simple-queue.html  │  simple-linkedlist.html            │
│  simple-tree.html                                          │
├─────────────────────────────────────────────────────────────┤
│  Each page contains:                                       │
│  HTML Structure │ CSS Styling │ JavaScript Logic          │
└─────────────────────────────────────────────────────────────┘
```

## Components and Interfaces

### Core Data Structure Logic
Based on the C++ implementations from code.cpp, each data structure will have simple JavaScript implementations:

```javascript
// Array operations (simple-array.html)
let arrayData = [10, 20, 30, 40];
function addElement(value) { arrayData.push(value); updateDisplay(); }
function removeElement() { arrayData.pop(); updateDisplay(); }
function accessElement(index) { return arrayData[index]; }

// Stack operations (simple-stack.html)  
let stackData = [];
function push(value) { stackData.push(value); updateDisplay(); }
function pop() { return stackData.pop(); updateDisplay(); }
function peek() { return stackData[stackData.length - 1]; }

// Queue operations (simple-queue.html)
let queueData = [];
function enqueue(value) { queueData.push(value); updateDisplay(); }
function dequeue() { return queueData.shift(); updateDisplay(); }
function front() { return queueData[0]; }
function rear() { return queueData[queueData.length - 1]; }

// LinkedList operations (simple-linkedlist.html)
let listNodes = [{data: 10, next: 1}, {data: 20, next: 2}, {data: 30, next: null}];
function insertAtHead(value) { /* simple insertion logic */ }
function deleteNode(value) { /* simple deletion logic */ }
function traverse() { /* highlight each node in sequence */ }

// Tree operations (simple-tree.html)
let treeData = {data: 1, left: {data: 2, left: {data: 4}, right: {data: 5}}, right: {data: 3, left: {data: 6}, right: {data: 7}}};
function preorderTraversal() { /* traverse and highlight nodes */ }
function inorderTraversal() { /* traverse and highlight nodes */ }
function postorderTraversal() { /* traverse and highlight nodes */ }
```

### Visualization Design

#### Array Visualization (simple-array.html)
- HTML: `<div>` elements representing array indices and values
- CSS: Grid layout with boxes showing index numbers and values
- JavaScript: Updates DOM elements when array changes
- Example: `[0: 10] [1: 20] [2: 30] [3: 40]`

#### Stack Visualization (simple-stack.html)
- HTML: Vertical stack of `<div>` elements
- CSS: Flexbox column layout, newest elements at top
- JavaScript: Adds/removes DOM elements for push/pop
- Example: Vertical boxes stacked with top element highlighted

#### Queue Visualization (simple-queue.html)
- HTML: Horizontal row of `<div>` elements with front/rear labels
- CSS: Flexbox row layout with arrows indicating direction
- JavaScript: Updates DOM for enqueue/dequeue operations
- Example: `Front -> [10] [20] [30] <- Rear`

#### LinkedList Visualization (simple-linkedlist.html)
- HTML: Node boxes with arrow elements between them
- CSS: Inline-block layout with CSS arrows (→)
- JavaScript: Updates node display and connections
- Example: `[10] -> [20] -> [30] -> NULL`

#### Tree Visualization (simple-tree.html)
- HTML: Nested `<div>` structure representing tree hierarchy
- CSS: CSS positioning to create tree layout
- JavaScript: Highlights nodes during traversal
- Example: Tree structure with connecting lines using CSS borders

### User Interface Design

#### Main Navigation (index.html)
- Simple HTML page with links to each visualizer
- Basic CSS styling for clean presentation
- Responsive design for mobile devices
- Brief description of each data structure

#### Operation Controls (on each page)
- HTML buttons for each operation (Push, Pop, etc.)
- Simple input fields for entering values
- Result display area for operation feedback
- "Back to Menu" link for navigation

#### Visual Feedback
- CSS classes for highlighting elements (.highlight, .error, .success)
- Simple color coding (green for success, red for error, blue for highlight)
- Text messages for operation results
- Basic responsive design for mobile viewing

## Data Models

### Simple Data Structures
```javascript
// Array: Simple JavaScript array
let arrayData = [10, 20, 30, 40];

// Stack: Array used as stack
let stackData = [];

// Queue: Array used as queue  
let queueData = [];

// LinkedList: Array of objects with data and next properties
let listNodes = [
  {data: 10, next: 1},
  {data: 20, next: 2}, 
  {data: 30, next: null}
];

// Tree: Nested object structure
let treeData = {
  data: 1,
  left: {
    data: 2,
    left: {data: 4, left: null, right: null},
    right: {data: 5, left: null, right: null}
  },
  right: {
    data: 3,
    left: {data: 6, left: null, right: null},
    right: {data: 7, left: null, right: null}
  }
};
```

### Configuration
```javascript
// Simple configuration object
const config = {
  maxElements: 10,
  colors: {
    normal: '#e0e0e0',
    highlight: '#4CAF50',
    error: '#f44336',
    success: '#2196F3'
  }
};
```

## Error Handling

### Input Validation
- Simple JavaScript validation for numeric inputs
- Basic checks for empty inputs
- Alert messages for invalid operations
- Prevent operations on empty structures

### Operation Error Handling
- Check for empty structures before operations (pop from empty stack, etc.)
- Display simple alert messages for errors
- Basic error messages like "Stack is empty" or "Invalid input"
- Clear visual feedback using CSS classes

### Browser Compatibility
- Use standard JavaScript features (ES5 compatible)
- Basic CSS that works across browsers
- Simple DOM manipulation methods
- No external dependencies to avoid compatibility issues

## Testing Strategy

### Manual Testing
- Test all operations by clicking buttons and entering values
- Verify visual updates match expected behavior
- Test edge cases (empty structures, invalid inputs)
- Check responsive design on different screen sizes

### Browser Testing
- Test in major browsers (Chrome, Firefox, Safari, Edge)
- Verify JavaScript functionality works consistently
- Check CSS rendering across browsers
- Test on mobile devices

### Validation Testing
- Compare behavior with C++ code.cpp reference
- Verify traversal orders match expected sequences
- Test boundary conditions (full/empty structures)
- Validate error messages are helpful and accurate

## File Structure

```
data-structure-visualizer/
├── index.html                 (Main navigation page)
├── simple-array.html         (Array visualizer)
├── simple-stack.html         (Stack visualizer) 
├── simple-queue.html         (Queue visualizer)
├── simple-linkedlist.html    (Linked List visualizer)
├── simple-tree.html          (Tree visualizer)
├── styles.css                (Shared CSS styles - optional)
└── README.md                 (Setup instructions)
```

## Implementation Notes

### Code Organization
- Each HTML file is self-contained with embedded CSS and JavaScript
- Consistent naming conventions matching C++ code.cpp
- Simple, readable code structure for educational purposes
- Minimal external dependencies (none initially)

### Visual Design
- Clean, simple interface focusing on the data structures
- Consistent color scheme across all visualizers
- Clear labels and instructions for each operation
- Mobile-friendly responsive design using basic CSS

### Enhancement Path
- Start with static visualizations
- Add simple CSS transitions later
- Consider animations in future iterations
- Maintain simplicity while adding features