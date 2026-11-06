# Task 02 – Paging

## Aim
To implement paging and demonstrate logical-to-physical address translation.

## Answer

Paging is a memory-management technique in which logical memory is divided into fixed-size pages and physical memory is divided into equal-sized frames.

A page table stores the frame number corresponding to each page.

### Address Translation

- Page Number = Logical Address / Page Size
- Offset = Logical Address % Page Size
- Physical Address = (Frame Number × Page Size) + Offset

If a page is not mapped to a frame, the address is treated as invalid.

## Algorithm

1. Initialize the page table.
2. Read the logical address.
3. Calculate the page number and offset.
4. Check whether the page exists in the page table.
5. Calculate the physical address using the frame number.
6. Display the result.

## Conclusion

Paging allows efficient memory allocation by dividing memory into fixed-size pages and frames. The page table is used to translate logical addresses into physical addresses.
