
/* public: __thiscall MappingSurface::MappingSurface(void) */

MappingSurface * __thiscall MappingSurface::MappingSurface(MappingSurface *this)

{
  char *pcVar1;
  
                    /* 0xb72c0  343  ??0MappingSurface@@QAE@XZ */
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(uint *)(this + 0x48) = *(uint *)(this + 0x48) & 0xffffdfff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0x40000000;
  *(undefined4 *)(this + 0x44) = 0x80000000;
  return this;
}

