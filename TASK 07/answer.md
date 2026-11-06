# Task 07 – Memory Management Plan from First Principles

## Aim
To propose a memory-management plan that provides efficient memory allocation, protection and utilization.

## Answer

A memory-management plan is required to allocate memory to processes, protect memory areas and manage available RAM efficiently.

### Proposed Memory-Management Plan

1. **Process Address Space:** Each process should have its own virtual address space.
2. **Paging:** Divide virtual memory into fixed-size pages and physical memory into frames.
3. **Demand Paging:** Load pages into RAM only when they are required.
4. **Page Replacement:** Use algorithms such as LRU to replace pages when memory is full.
5. **Memory Protection:** Use access permissions to prevent unauthorized reading or writing.
6. **Kernel Protection:** Protect operating-system memory from normal user processes.
7. **Memory Monitoring:** Monitor memory usage and page faults to avoid excessive swapping.

### Memory Locking

The Linux `mlock()` system call requests that a memory region remain resident in RAM instead of being swapped out.

The request may fail if the system's locked-memory limit is too small.

## Conclusion

The proposed plan combines virtual memory, paging, demand paging, page replacement and memory protection to provide efficient and secure memory management.
