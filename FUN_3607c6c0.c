
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3607c6c0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((DAT_362a40ec != 0) &&
     ((0x32 < *(int *)(_pGfx + 0xafc) - _DAT_362c4704 ||
      (*(int *)(_pGfx + 0xafc) - _DAT_362c4704 < 1)))) {
    iVar6 = 0;
    iVar5 = DAT_362c4d74;
    iVar4 = DAT_362c4d7c;
    if (0 < DAT_362c4d7c) {
      do {
        puVar1 = (undefined4 *)(DAT_362c4d78 + iVar6 * 4);
        iVar3 = *(int *)(iVar5 + iVar6 * 4);
        if ((iVar3 != 0) && ((iVar3 = *(int *)(_pGfx + 0xafc) - iVar3, 0x66 < iVar3 || (iVar3 < 0)))
           ) {
          *(undefined4 *)(iVar5 + iVar6 * 4) = 0;
          *puVar1 = 0;
          iVar5 = DAT_362c4d74;
          iVar4 = DAT_362c4d7c;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    iVar4 = iVar4 + -1;
    DAT_362c4d7c = 0;
    if (-1 < iVar4) {
      do {
        if (*(int *)(iVar5 + DAT_362c4d7c * 4) == 0) {
          iVar6 = *(int *)(iVar5 + iVar4 * 4);
          for (; (iVar6 == 0 && (0 < iVar4)); iVar4 = iVar4 + -1) {
            iVar6 = *(int *)(iVar5 + -4 + iVar4 * 4);
          }
          if (iVar4 <= DAT_362c4d7c) break;
          *(undefined4 *)(iVar5 + DAT_362c4d7c * 4) = *(undefined4 *)(iVar5 + iVar4 * 4);
          *(undefined4 *)(DAT_362c4d78 + DAT_362c4d7c * 4) =
               *(undefined4 *)(DAT_362c4d78 + iVar4 * 4);
          *(undefined4 *)(DAT_362c4d74 + iVar4 * 4) = 0;
          *(undefined4 *)(DAT_362c4d78 + iVar4 * 4) = 0;
          uVar2 = *(undefined4 *)(DAT_362c4d70 + DAT_362c4d7c * 4);
          puVar1 = (undefined4 *)(DAT_362c4d70 + iVar4 * 4);
          *(undefined4 *)(DAT_362c4d70 + DAT_362c4d7c * 4) =
               *(undefined4 *)(DAT_362c4d70 + iVar4 * 4);
          *puVar1 = uVar2;
          iVar5 = DAT_362c4d74;
        }
        DAT_362c4d7c = DAT_362c4d7c + 1;
      } while (DAT_362c4d7c <= iVar4);
    }
    _DAT_362c4704 = *(int *)(_pGfx + 0xafc);
  }
  return;
}

