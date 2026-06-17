
/* public: int __thiscall CModelInstance::FindAnimationByID(int,long *,long *) */

int __thiscall
CModelInstance::FindAnimationByID(CModelInstance *this,int param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
                    /* 0x15d370  1628  ?FindAnimationByID@CModelInstance@@QAEHHPAJ0@Z */
  iVar1 = FUN_36035fa0((int)(this + 0x34));
  if (iVar1 < 1) {
    return 0;
  }
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
      iVar2 = FUN_36035fb0(this + 0x34,iVar1);
      iVar3 = FUN_3600c5e0((undefined4 *)(iVar2 + 0x14));
      iVar4 = 0;
    } while (iVar3 < 1);
    piVar5 = *(int **)(iVar2 + 0x18);
    do {
      if (*piVar5 == param_1) {
        *param_2 = iVar1;
        *param_3 = iVar4;
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar4 < iVar3);
  } while( true );
}

