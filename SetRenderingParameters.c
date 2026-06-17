
/* public: void __thiscall MappingSurface::SetRenderingParameters(unsigned long) */

void __thiscall MappingSurface::SetRenderingParameters(MappingSurface *this,ulong param_1)

{
                    /* 0xb4900  3578  ?SetRenderingParameters@MappingSurface@@QAEXK@Z */
  if ((param_1 & 0x400) == 0) {
    *(undefined4 *)(this + 0x4c) = 1;
  }
  else {
    *(undefined4 *)(this + 0x4c) = 0;
  }
  if (((byte)param_1 & 7) == 2) {
    *(undefined4 *)(this + 0x50) = 2;
  }
  else {
    *(uint *)(this + 0x50) = (uint)(((byte)param_1 & 0xc0) == 0x80);
  }
  *(undefined4 *)(this + 0x48) = 0;
  if ((param_1 & 0x200) != 0) {
    *(undefined4 *)(this + 0x48) = 1;
  }
  if ((param_1 & 0x1000) != 0) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 4;
  }
  return;
}

