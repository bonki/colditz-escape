#ifndef _COLDITZ_UTILITIES_H
#define _COLDITZ_UTILITIES 1

#ifdef	__cplusplus
extern "C" {
#endif

u32 readlong(u8* buffer, u32 addr);
void writelong(u8* buffer, u32 addr, u32 value);
u16 readword(u8* buffer, u32 addr);
void writeword(u8* buffer, u32 addr, u16 value);
u8 readbyte(u8* buffer, u32 addr);
void writebyte(u8* buffer, u32 addr, u8 value);
void *aligned_malloc(size_t bytes, size_t alignment);
void aligned_free(void *ptr);
int uncompress(u32 expected_size);
void cells_to_interleaved(u8* buffer, u32 size);
void sprites_to_interleaved(u8* buffer, u32 bitplane_size);
void to_16bit_Palette(u8 palette_index);
void to_24bit_Palette(u8 palette_index);
void to_48bit_Palette(u16 wPalette[3][16], u8 palette_index);
void cells_to_RGB(u8* source, u8* dest, u32 size);
void cells_to_wGRAB(u8* source, u8* dest);
void load_all_files();
void displayRoom(u16 room_index);
void getProperties();
#if !defined(PSP)
void glutPrintf(const char *fmt, ...);
#endif
void init_sprites();
void sprites_to_wGRAB();


#ifdef	__cplusplus
}
#endif

#endif /* _COLDITZ_UTILITIES_H */
