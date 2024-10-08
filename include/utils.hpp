#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef _UTILS_H_
# define _UTILS_H_

void    update_cursor(size_t x, size_t y);
void    move_cursor_left();
void    move_cursor_right();

void    outb(const uint16_t port, const uint8_t val);
uint8_t inb(uint16_t port);
void    PIC_remap(void);
void    initialize_idt(void);
void    load_idt();
void    init_gdt();
void    kmemset(void* ptr, const int8_t value, const size_t num);
void    kprintf(const char* format, ...);
void*   kmemcpy(void *dest, const void *src, size_t n);
int     kstrncmp(const uint16_t *s1, const char *s2, const size_t n);
size_t  terminal_putnbr_base(int n, const char* base, const size_t base_len, size_t pos);

extern GDT_t gdt[GDT_ENTRIES];

#endif // _UTILS_H_