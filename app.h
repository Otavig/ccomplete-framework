#ifndef APP_H
#define APP_H

// Standard C libraries
#include "stddef.h"    // Definitions of size_t, ptrdiff_t, and other common types
#include "string.h"    // String handling functions (e.g., strcpy, strlen)
#include "math.h"      // Math functions (e.g., sqrt, pow)
#include "time.h"      // Time and date functions
#include "stdint.h"    // Integer types with fixed sizes (e.g., int32_t, uint64_t)
#include "limits.h"    // Constants for minimum and maximum values of integer types
#include "float.h"     // Constants for floating-point types
#include "locale.h"    // Locale-specific data
#include "stdio.h"     // Input/output functions (e.g., printf, scanf)
#include "stdlib.h"    // General utility functions (e.g., malloc, free)
#include "ctype.h"     // Character classification functions (e.g., isdigit, toupper)
#include "stdbool.h"   // Boolean type and true/false macros

// Custom utility libraries
#include "utils/sorts/swap.h"           // Swap function for sorting algorithms
#include "utils/array/array.h"          // Array manipulation functions
#include "utils/array/dynamic/stack/istack.h"  // Stack operations (dynamic array-based)
#include "utils/sizelist/size.h"        // Size calculation for static arrays
#include "utils/sizelist/csize.h"       // Size calculation for null-terminated strings
#include "utils/sorts/bubblesort/bisort.h"   // Bubble sort algorithm
#include "utils/sorts/quicksort/qisort.h"   // Quick sort algorithm
#include "utils/searchs/searchbinary/sbint.h"  // Binary search algorithm
#include "utils/display/forint/difor.h"  // Display integer array using a for loop
#include "utils/display/forchar/dcfor.h" // Display character array using a for loop

#endif
