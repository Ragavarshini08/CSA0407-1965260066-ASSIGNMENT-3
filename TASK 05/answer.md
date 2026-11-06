# Task 05 – Page-Replacement Techniques

## Aim
To study and compare FIFO, LRU and Optimal page-replacement algorithms.

## Answer

Page replacement is used when a page fault occurs and all available memory frames are occupied. The operating system selects a page to remove to make space for the required page.

### 1. FIFO (First-In, First-Out)

- Replaces the page that entered memory first.
- Simple to implement.
- May suffer from Belady's anomaly.

### 2. LRU (Least Recently Used)

- Replaces the page that has not been used for the longest time.
- Uses recent page-access history.
- Usually performs better than FIFO for many access patterns.

### 3. Optimal Page Replacement

- Replaces the page that will not be used for the longest time in the future.
- Produces the minimum possible page faults for a known reference string.
- Mainly used as a theoretical comparison because future references are not normally known.

## Algorithm

1. Initialize the page frames.
2. Read the page reference string.
3. Check whether each page is already present.
4. If the page is absent, count a page fault.
5. Apply the selected replacement algorithm.
6. Display the total page faults.

## Conclusion

FIFO, LRU and Optimal are page-replacement algorithms used to manage memory efficiently. Optimal provides a benchmark, while FIFO and LRU can be implemented in practical systems.
