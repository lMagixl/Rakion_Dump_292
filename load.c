
/* public: unsigned int __thiscall Xenesis::xFile::load(void *,unsigned int) */

uint __thiscall Xenesis::xFile::load(xFile *this,void *param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x1a4700  4234  ?load@xFile@Xenesis@@QAEIPAXI@Z */
  uVar4 = *(uint *)(this + 8);
  uVar3 = *(uint *)(*(int *)(this + 0x20) + 8);
  if (uVar3 <= uVar4) {
    return 0;
  }
  if (uVar3 < uVar4 + param_2) {
    param_2 = uVar3 - uVar4;
  }
  if (0x20000 < *(int *)(this + 0x10) + param_2) {
    uVar4 = 0x20000 - *(int *)(this + 0x10);
    getPiece(this,param_1,uVar4);
    uVar3 = param_2 - uVar4;
    puVar2 = (uint *)((int)param_1 + uVar4);
    while( true ) {
      if (uVar3 < 0x20000) {
        bVar1 = loadBlock(this,*(uchar **)(this + 0x18));
        if (bVar1) {
          *(undefined4 *)(this + 0x10) = 0;
          getPiece(this,(uchar *)puVar2,uVar3);
          uVar4 = uVar4 + uVar3;
          *(uint *)(this + 8) = *(int *)(this + 8) + uVar4;
        }
        return uVar4;
      }
      bVar1 = loadBlock(this,(uchar *)puVar2);
      if (!bVar1) break;
      if (*(char *)(*(int *)(this + 0x20) + 0x11) == '\x01') {
        FUN_361a3cf0(*(void **)(this + 0x24),puVar2,0x20000);
      }
      uVar3 = uVar3 - 0x20000;
      uVar4 = uVar4 + 0x20000;
      puVar2 = puVar2 + 0x8000;
    }
    return uVar4;
  }
  getPiece(this,param_1,param_2);
  *(uint *)(this + 8) = *(int *)(this + 8) + param_2;
  return param_2;
}

