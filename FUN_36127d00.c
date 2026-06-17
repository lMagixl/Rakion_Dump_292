
void FUN_36127d00(void)

{
  CEntity *pCVar1;
  undefined4 *puVar2;
  CEntity *this;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = FUN_3612e750(0x362fcd38);
  if (0 < iVar3) {
    do {
      this = *(CEntity **)(DAT_362fcd3c + iVar4 * 8);
      puVar2 = (undefined4 *)(DAT_362fcd3c + iVar4 * 8);
      if (this != (CEntity *)0x0) {
        pCVar1 = this + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          CEntity::DeleteSelf(this);
        }
      }
      *puVar2 = 0;
      if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[1])(1);
      }
      puVar2[1] = 0;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_3612e750(0x362fcd38);
    } while (iVar4 < iVar3);
  }
  DAT_362fcd40 = 0;
  return;
}

