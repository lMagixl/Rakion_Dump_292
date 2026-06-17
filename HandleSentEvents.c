
/* public: static void __cdecl CEntity::HandleSentEvents(void) */

void __cdecl CEntity::HandleSentEvents(void)

{
  CEntity *pCVar1;
  undefined4 *puVar2;
  int *piVar3;
  CEntity *this;
  int iVar4;
  int iVar5;
  
                    /* 0x127d60  2242  ?HandleSentEvents@CEntity@@SAXXZ */
  iVar5 = 0;
  iVar4 = FUN_3612e750(0x362fcd38);
  if (0 < iVar4) {
    do {
      piVar3 = *(int **)(DAT_362fcd3c + iVar5 * 8);
      if ((*(byte *)(piVar3 + 4) & 4) == 0) {
        (**(code **)(*piVar3 + 0x60))(*(undefined4 *)(DAT_362fcd3c + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
      iVar4 = FUN_3612e750(0x362fcd38);
    } while (iVar5 < iVar4);
  }
  iVar5 = 0;
  iVar4 = FUN_3612e750(0x362fcd38);
  if (0 < iVar4) {
    do {
      puVar2 = (undefined4 *)(DAT_362fcd3c + iVar5 * 8);
      this = (CEntity *)*puVar2;
      if (this != (CEntity *)0x0) {
        pCVar1 = this + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          DeleteSelf(this);
        }
      }
      *puVar2 = 0;
      if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[1])(1);
      }
      puVar2[1] = 0;
      iVar5 = iVar5 + 1;
      iVar4 = FUN_3612e750(0x362fcd38);
    } while (iVar5 < iVar4);
  }
  DAT_362fcd40 = 0;
  return;
}

