
/* public: void __thiscall CTString::InsertSubString(long,class CTString const &) */

void __thiscall CTString::InsertSubString(CTString *this,long param_1,CTString *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
                    /* 0x23d00  2344  ?InsertSubString@CTString@@QAEXJABV1@@Z */
  pcVar6 = *(char **)this;
  pcVar1 = pcVar6 + 1;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar7 = (int)pcVar6 - (int)pcVar1;
  lVar5 = iVar7;
  if ((param_1 <= iVar7) && (lVar5 = param_1, param_1 < 0)) {
    lVar5 = 0;
  }
  pcVar6 = *(char **)param_2;
  pcVar1 = pcVar6 + 1;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = (int)pcVar6 - (int)pcVar1;
  FUN_36023350((void **)this,iVar7,uVar3 + iVar7);
  memmove((void *)(*(int *)this + uVar3 + lVar5),(void *)(*(int *)this + lVar5),(iVar7 - lVar5) + 1)
  ;
  puVar8 = *(undefined4 **)param_2;
  puVar9 = (undefined4 *)(*(int *)this + lVar5);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  return;
}

