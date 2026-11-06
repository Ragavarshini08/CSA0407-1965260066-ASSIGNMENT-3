# Task 03 – Segmentation

## Aim
To implement segmentation and demonstrate logical-to-physical address translation.

## Answer

Segmentation is a memory-management technique in which a program is divided into variable-sized logical segments such as code, data and stack.

The segment table contains:

- **Base:** Starting physical address of a segment.
- **Limit:** Maximum size of the segment.

### Address Translation

Physical Address = Base Address + Offset

The offset must be smaller than the segment limit. Otherwise, a segmentation fault occurs.

## Algorithm

1. Initialize the base and limit tables.
2. Read the segment number.
3. Read the offset.
4. Check whether the segment number is valid.
5. Check whether the offset is within the segment limit.
6. Calculate and display the physical address.

## Conclusion

Segmentation divides memory according to the logical structure of a program. It supports protection and independent management of different segments.
