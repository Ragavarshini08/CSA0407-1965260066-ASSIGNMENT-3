# Task 06 – Disk Management

## Aim
To study Linux disk-management operations and the commands used to manage storage devices.

## Answer

Disk management is the process of organizing, allocating, monitoring and maintaining secondary storage devices.

### Important Disk-Management Activities

1. **Disk Initialization:** Preparing a disk for use.
2. **Partitioning:** Dividing a disk into logical sections.
3. **Formatting:** Creating a file system such as ext4 or FAT32.
4. **Mounting:** Making a file system accessible through a directory.
5. **Swap Management:** Using disk space as additional virtual memory.
6. **Free-Space Management:** Tracking unused storage blocks.
7. **Disk Scheduling:** Organizing disk I/O requests to improve performance.
8. **Backup:** Maintaining copies of important data for recovery.

## Linux Commands

### 1. Display disk devices

```bash
lsblk
```

### 2. Display disk space

```bash
df -h
```

### 3. Display disk partitions

```bash
sudo fdisk -l
```

### 4. Display memory and swap information

```bash
free -h
```

### 5. Display active swap areas

```bash
swapon --show
```

### 6. Display mounted file systems

```bash
mount
```

## Observation

The commands help identify disk devices, partitions, file systems, available storage and swap usage.

The output depends on the Linux system being used.

## Conclusion

Linux provides disk-management utilities to inspect and manage storage devices, partitions, file systems and swap space.
