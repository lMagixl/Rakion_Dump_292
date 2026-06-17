
void __thiscall FUN_3611f130(void *this,int param_1)

{
  if ((DAT_362fcb98 == 0) || (_pselbscVisTweaks == (CSelection<class_CBrushSector,1> *)0x0)) {
    if ((*(uint *)(param_1 + 0x48) & 0x100) != 0) {
      *(uint *)((int)this + 0xd74) = *(uint *)(param_1 + 0x50) & 0xffff;
      return;
    }
    *(uint *)((int)this + 0xd70) = *(uint *)((int)this + 0xd70) | *(uint *)(param_1 + 0x50) & 0xffff
    ;
  }
  return;
}

