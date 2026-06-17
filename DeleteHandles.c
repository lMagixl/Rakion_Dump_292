
/* public: void __thiscall CShader::DeleteHandles(void) */

void __thiscall CShader::DeleteHandles(CShader *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
                    /* 0x8f2b0  1466  ?DeleteHandles@CShader@@QAEXXZ */
  local_4 = FUN_3600c250((undefined4 *)(this + 0x28));
  if (0 < local_4) {
    iVar3 = 0;
    do {
      iVar5 = *(int *)(this + 0x2c);
      iVar4 = 0;
      do {
        iVar2 = *(int *)(iVar5 + iVar3 + iVar4 * 4);
        if (iVar2 != 0) {
          (*DAT_362c46e0)(iVar2);
          *(undefined4 *)(iVar5 + iVar3 + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 5);
      iVar3 = iVar3 + 0x18;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  iVar3 = FUN_3600c2d0((undefined4 *)(this + 0x30));
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      piVar1 = (int *)(*(int *)(this + 0x34) + iVar5 * 4);
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        (*DAT_362c46e4)(iVar4);
        *piVar1 = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

