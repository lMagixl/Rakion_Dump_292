
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: long __thiscall CSoundLibrary::CommitPlayingBuffer(class CSoundObject &,int &) */

long __thiscall
CSoundLibrary::CommitPlayingBuffer(CSoundLibrary *this,CSoundObject *param_1,int *param_2)

{
  CSoundLibrary *pCVar1;
  CSoundLibrary *pCVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  CSoundLibrary *pCVar9;
  int iVar10;
  float local_14;
  uint local_8;
  uint local_4;
  
                    /* 0x9f590  1347  ?CommitPlayingBuffer@CSoundLibrary@@AAEJAAVCSoundObject@@AAH@Z
                        */
  iVar10 = *(int *)(param_1 + 8);
  local_4 = (uint)(*(short *)(iVar10 + 0x16) == 1);
  if ((((*(uint *)(param_1 + 0x2c) & 2) == 0) || (local_4 == 0)) ||
     (bVar4 = true, (*(uint *)(param_1 + 0x2c) & 0x40) != 0)) {
    bVar4 = false;
  }
  iVar6 = -1;
  iVar5 = -1;
  local_14 = 3e+38;
  iVar7 = iVar6;
  if (0 < DAT_362a51ec) {
    pCVar9 = this + 0x78;
    iVar8 = 0;
    do {
      iVar7 = iVar8;
      iVar8 = *(int *)(pCVar9 + -4);
      if (iVar8 == 0) {
        piVar3 = *(int **)pCVar9;
        if ((piVar3 == (int *)0x0) ||
           ((**(code **)(*piVar3 + 0x24))(piVar3,&local_8), iVar6 = iVar7, (local_8 & 1) == 0))
        break;
      }
      else if (*(float *)(iVar8 + 100) < local_14) {
        local_14 = *(float *)(iVar8 + 100);
        iVar5 = iVar7;
      }
      iVar8 = iVar7 + 1;
      pCVar9 = pCVar9 + 0x14;
      iVar7 = iVar6;
    } while (iVar8 < DAT_362a51ec);
  }
  *param_2 = 0;
  if (iVar7 == -1) {
    if (*(float *)(param_1 + 100) - local_14 < _DAT_36230174) {
      return -1;
    }
    *(undefined4 *)(*(int *)(this + iVar5 * 0x14 + 0x74) + 0x28) = 0xffffffff;
    ReleasePlayingBuffer(this,iVar5,1);
    *param_2 = 1;
    iVar7 = iVar5;
  }
  pCVar2 = this + iVar7 * 0x14 + 0x70;
  piVar3 = *(int **)(pCVar2 + 8);
  pCVar9 = pCVar2 + 8;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)pCVar9 = 0;
  iVar10 = *(int *)(iVar10 + 0x28);
  iVar5 = (**(code **)(**(int **)(this + 0x2c) + 0x14))(*(int **)(this + 0x2c),iVar10,pCVar9);
  if (iVar5 != 0) {
    return -1;
  }
  if (bVar4) {
    piVar3 = *(int **)(pCVar2 + 0xc);
    pCVar1 = pCVar2 + 0xc;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      piVar3 = *(int **)(pCVar2 + 0x10);
      *(undefined4 *)pCVar1 = 0;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(pCVar2 + 0x10) = 0;
      }
    }
    iVar5 = (**(code **)**(undefined4 **)pCVar9)(*(undefined4 **)pCVar9,&DAT_36230060,pCVar1);
    if (iVar5 != 0) {
      return -1;
    }
    if ((unaff_EDI != 0) && ((*(byte *)(iVar10 + 0x44) & 4) != 0)) {
      (**(code **)**(undefined4 **)pCVar1)(*(undefined4 **)pCVar1,&DAT_36230010,pCVar2 + 0x10);
    }
    (**(code **)(**(int **)pCVar1 + 0x48))(*(int **)pCVar1,(unaff_EDI == 0) + '\x01',0);
  }
  *(uint *)(local_8 + 0x2c) = *(uint *)(local_8 + 0x2c) | 0x10000000;
  *(uint *)(pCVar2 + 4) = local_8;
  *(CSoundLibrary **)pCVar2 = this;
  return iVar7;
}

