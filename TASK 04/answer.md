# Task 04 – Virtual Memory and Demand Paging

## Aim
To understand virtual memory and demonstrate the concept of demand paging.

## Answer

Virtual memory allows a program to execute even when its entire size is not available in physical memory.

Demand paging is a technique in which a page is loaded into RAM only when it is required.

### Page Fault

A page fault occurs when a process tries to access a page that is not currently present in main memory.

### Advantages

1. Efficient utilization of RAM.
2. Programs larger than physical memory can execute.
3. More processes can be maintained in memory.
4. Unused pages do not need to be loaded immediately.

### Disadvantages

1. Page faults increase execution time.
2. Excessive page faults can cause thrashing.
3. Page tables require additional memory.

## Algorithm

1. Initialize the memory frames.
2. Access the required pages.
3. Check whether each page is already present.
4. If a page is absent, load it into a frame.
5. Continue until all pages are accessed.
6. Display the result.

## Conclusion

Demand paging improves memory utilization by loading pages only when they are needed. It reduces unnecessary loading of pages into main memory.
