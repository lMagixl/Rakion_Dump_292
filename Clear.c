
/* public: void __thiscall FieldInfo::Clear(void) */

void __thiscall FieldInfo::Clear(FieldInfo *this)

{
  FieldInfo *pFVar1;
  int iVar2;
  
                    /* 0x19a3b0  1251  ?Clear@FieldInfo@@QAEXXZ */
  this[0x1ab] = (FieldInfo)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  this[0x2e] = (FieldInfo)0x0;
  pFVar1 = this + 0x2f;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = 0;
    pFVar1 = pFVar1 + 4;
  }
  *pFVar1 = (FieldInfo)0x0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  this[0xd8] = (FieldInfo)0x0;
  pFVar1 = this + 0xd9;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = 0;
    pFVar1 = pFVar1 + 4;
  }
  *pFVar1 = (FieldInfo)0x0;
  this[0x1a2] = (FieldInfo)0x0;
  this[0x1a3] = (FieldInfo)0x0;
  this[0x1a4] = (FieldInfo)0x0;
  this[0x1a5] = (FieldInfo)0x0;
  *(undefined2 *)(this + 0x1a6) = 0;
  this[0x1a8] = (FieldInfo)0x0;
  this[0x1a9] = (FieldInfo)0x0;
  this[0x1aa] = (FieldInfo)0x0;
  this[0x475c] = (FieldInfo)0x0;
  *(undefined4 *)(this + 0x4930) = 0;
  *(undefined4 *)(this + 0x4934) = 0;
  *(undefined4 *)(this + 0x4938) = 0;
  *(undefined4 *)(this + 0x493c) = 0;
  *(undefined4 *)(this + 0x48f4) = 0;
  this[0x4916] = (FieldInfo)0x0;
  pFVar1 = this + 0x476c;
  iVar2 = 0x14;
  do {
    *(undefined4 *)(pFVar1 + -8) = 0;
    *(undefined4 *)(pFVar1 + -4) = 0;
    *(undefined4 *)pFVar1 = 0;
    *(undefined4 *)(pFVar1 + 4) = 0;
    pFVar1 = pFVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x48a4) = 0;
  *(undefined4 *)(this + 0x48a8) = 0;
  *(undefined4 *)(this + 0x48ac) = 0;
  *(undefined4 *)(this + 0x48b0) = 0;
  *(undefined4 *)(this + 0x48b4) = 0;
  *(undefined4 *)(this + 0x48b8) = 0;
  *(undefined4 *)(this + 0x48bc) = 0;
  *(undefined4 *)(this + 0x48c0) = 0;
  *(undefined4 *)(this + 0x48c4) = 0;
  *(undefined4 *)(this + 0x48c8) = 0;
  *(undefined4 *)(this + 0x48cc) = 0;
  *(undefined4 *)(this + 0x48d0) = 0;
  *(undefined4 *)(this + 0x48d4) = 0;
  *(undefined4 *)(this + 0x48d8) = 0;
  *(undefined4 *)(this + 0x48dc) = 0;
  *(undefined4 *)(this + 0x48e0) = 0;
  *(undefined4 *)(this + 0x48e4) = 0;
  *(undefined4 *)(this + 0x48e8) = 0;
  *(undefined4 *)(this + 0x48ec) = 0;
  *(undefined4 *)(this + 0x48f0) = 0;
  pFVar1 = this + 0x1ac;
  iVar2 = 0x14;
  do {
    FUN_3619cb30(pFVar1);
    pFVar1 = pFVar1 + 0x37c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

