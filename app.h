#ifndef APP_H
#define APP_H

// Standard C libraries
#include "stddef.h"    // Definitions of size_t, ptrdiff_t, and other common types (used for defining sizes, memory differences, etc.)
#include "string.h"    // String handling functions (e.g., strcpy, strlen, memcmp, etc.)
#include "math.h"      // Math functions (e.g., sqrt, pow, sin, cos, etc.)
#include "time.h"      // Time and date functions (e.g., time(), localtime(), difftime(), etc.)
#include "stdint.h"    // Integer types with fixed sizes (e.g., int32_t, uint64_t, etc.)
#include "limits.h"    // Constants for minimum and maximum values of integer types (e.g., INT_MAX, INT_MIN, etc.)
#include "float.h"     // Constants for floating-point types (e.g., FLT_MAX, FLT_MIN, etc.)
#include "locale.h"    // Locale-specific data for managing cultural and language-specific formatting
#include "stdio.h"     // Input/output functions (e.g., printf, scanf, fopen, fclose, etc.)
#include "stdlib.h"    // General utility functions (e.g., malloc, free, atoi, exit, etc.)
#include "ctype.h"     // Character classification functions (e.g., isdigit, toupper, isalpha, etc.)
#include "stdbool.h"   // Boolean type and true/false macros (e.g., true, false, bool)


// Custom utility libraries
#include "utils/sorts/swap.h"           // Swap function for sorting algorithms (swapping elements in arrays)
#include "utils/array/array.h"          // Array manipulation functions (e.g., array sorting, searching, resizing)
#include "utils/array/dynamic/stack/istack.h"  // Stack operations (dynamic array-based stack implementation)
#include "utils/sizelist/size.h"        // Size calculation for static arrays (calculating the size of static arrays)
#include "utils/sizelist/csize.h"       // Size calculation for null-terminated strings (calculating the length of strings)
#include "utils/sorts/bubblesort/bisort.h"   // Bubble sort algorithm (sorting algorithm based on repeated swapping of adjacent elements)
#include "utils/sorts/quicksort/qisort.h"   // Quick sort algorithm (efficient sorting algorithm using divide and conquer approach)
#include "utils/searchs/searchbinary/sbint.h"  // Binary search algorithm (efficient searching algorithm for sorted arrays)
#include "utils/display/forint/difor.h"  // Display integer array using a for loop (functions to print integer arrays)
#include "utils/display/forchar/dcfor.h" // Display character array using a for loop (functions to print character arrays)
#include "utils/inputs/input_char/input_char.h" // Input functions for reading characters from the user (e.g., reading a single character)
#include "utils/inputs/input_int/input_int.h" // Input functions for reading integers from the user (e.g., reading an integer)
#include "utils/inputs/input_float/input_float.h" // Input functions for reading floating-point numbers (e.g., reading a float)
#include "utils/typeof_input/typeof_input.h" // Detecting the type of input (e.g., determining if input is an integer, float, etc.)
#include "utils/fgets_dynamic/fgets_dynamic.h" // Dynamic input function that adjusts buffer size based on input length

#endif
